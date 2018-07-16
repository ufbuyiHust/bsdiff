#ifndef __INCLUDE_GUARD_BSDIFF_H
#define __INCLUDE_GUARD_BSDIFF_H

/* encodings */
//编码格式的列表
enum BSDIFF_ENCODINGS {
	BSDIFF_ENC_ANY,
	BSDIFF_ENC_NONE,
	BSDIFF_ENC_BZIP2,
	BSDIFF_ENC_GZIP,
	BSDIFF_ENC_XZ,
	BSDIFF_ENC_ZEROS,
	BSDIFF_ENC_LAST
};

//仅仅定义了两个接口

/* API definition */
int make_bsdiff_delta(char *old_filename, char *new_filename, char *delta_filename, int enc);
int apply_bsdiff_delta(char *oldfile, char *newfile, char *deltafile);

#endif
