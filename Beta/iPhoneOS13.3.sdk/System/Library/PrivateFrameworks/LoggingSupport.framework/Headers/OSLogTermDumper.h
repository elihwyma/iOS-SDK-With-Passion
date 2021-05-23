/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@interface OSLogTermDumper : NSObject

{
    struct os_trace_blob_s _ob;
    unsigned short _last_attrs;
    unsigned char _ob_slop[1];
    _Bool _fancy;
    int _fd;
    _Bool _vis;
    unsigned char _colorMode;
    unsigned short _cur_attrs;
}

@property (nonatomic, readonly) unsigned char colorMode;
@property (nonatomic, readonly) _Bool isFancy;
@property (nonatomic) unsigned short style;
@property (nonatomic, getter=isBold) _Bool bold;
@property (nonatomic, getter=isOblique) _Bool oblique;
@property (nonatomic, getter=isUnderlined) _Bool underline;
@property (nonatomic) unsigned char bgColor;
@property (nonatomic) unsigned char fgColor;

- (id)init;
- (void)dealloc;
- (void)beginEditing;
- (void)endEditing;
- (void)close;
- (unsigned int)format:(const char *)arg1;
- (void)puts:(const char *)arg1;
- (void)startPager;
- (void)flush:(_Bool)arg1;
- (void)resetStyle;
- (id)initWithFd:(int)arg1 colorMode:(unsigned char)arg2;
- (void)_flushAttrs;
- (void)_resetAttrsForNewline;
- (void)write:(const void *)arg1 size:(unsigned long long)arg2;
- (void)putc:(int)arg1;
- (unsigned int)vformat:(const char *)arg1 args:(char *)arg2;
- (void)hexdump:(const void *)arg1 length:(unsigned long long)arg2;
- (void)writeln;
- (void)pad:(int)arg1 count:(unsigned long long)arg2;
- (void)putUUID:(unsigned char [16])arg1;

@end
