#include <string.h>
#include <assert.h>
#define MAX_MIME_TYPES_NUM 10000

#include "mime-types.c"

static int mime_initialized;
static int mime_type_number;
static char *mime_type_names[MAX_MIME_TYPES_NUM];
static char *mime_type_extensions[MAX_MIME_TYPES_NUM];

static void mime_init (void) {
  char *start = (char *)mime_types;
  char *end = start + mime_types_len;
  mime_initialized = 1;
  char *c = start;
  while (c < end) {
    if (*c == '#') {
      while (c < end && *c != '\n') {
        c ++;
      }
      if (c < end) {
        c ++;
      }
    } else {
      while (*c <= ' ' && *c != '\n' && c < end) {
        c ++;
      }
      assert (*c > ' ' && *c != '\n' && c < end);
      char *name = c;
      while (*c > ' ' && *c != '\n' && c < end) {
        c ++;
      }
      assert (*c <= ' ' && *c != '\n' && c < end);
      *c = 0;
      c ++;
      while (1) {
        while (*c <= ' ' && *c != '\n' && c < end) {
          c ++;
        }
        if (*c == '\n' || c == end) {
          if (*c == '\n') { c ++; }
          break;
        }
        char *ext = c;
        while (*c > ' ' && *c != '\n' && c < end) {
          c ++;
        }
        assert (c != end);
        int br = (*c == '\n');
        *c = 0;
        c ++;
        assert (mime_type_number < MAX_MIME_TYPES_NUM);
        mime_type_names[mime_type_number] = name;
        mime_type_extensions[mime_type_number] = ext;
        mime_type_number ++;
        if (br) { break; }
      }
    }
  }
}

char *tg_extension_by_mime (const char *mime_type) {
  if (!mime_initialized) {
    mime_init ();
  }

  if (!strcmp ("audio/mp4", mime_type))
      return "m4a";

  int i;
  for (i = 0; i < mime_type_number; i++) {
    if (!strcmp (mime_type_names[i], mime_type)) {
      return mime_type_extensions[i];
    }
  }
  return NULL;
}

char *tg_mime_by_filename (const char *filename) {
  int l = strlen (filename);
  const char *p = filename - 1 + l;
  while (p >= filename && *p != '.') {
    p --;
  }
  p ++;

  if (!mime_initialized) {
    mime_init ();
  }

  static char *def = "application/octet-stream";
  int i;
  for (i = 0; i < mime_type_number; i++) {
    if (!strcmp (mime_type_extensions[i], p)) {
      return mime_type_names[i];
    }
  }

  if (!strcmp ("m4a", p))
      return "audio/mp4";

  return def;
}
