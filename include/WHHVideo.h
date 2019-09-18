#ifndef WHH_VIDEO_H
#define WHH_VIDEO_H

#ifndef LIBWHHVIDEO_EXPORTS
#define LIBWHHVIDEO_API __declspec(dllimport)
#else
#define LIBWHHVIDEO_API __declspec(dllexport)
#endif

LIBWHHVIDEO_API
void whh_video_say_hello();


#endif // !WHHVIDEO_H

