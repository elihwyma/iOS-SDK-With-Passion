/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCDumper.h>

@interface BRCTermDumper : BRCDumper

{
    struct __sFILE *_file;
    unsigned long long _termWidth;
    unsigned long long _usedTermWidth;
    int _curAttrs;
    int _curFg;
    int _curBg;
    _Bool _isatty;
    _Bool _useColor;
    _Bool _supportsEscapeSequences;
}

@property (nonatomic, readonly) _Bool isatty;
@property (nonatomic, readonly) _Bool supportsEscapeSequences;
@property (nonatomic, readonly) _Bool useColor;

+ (void)setupPagerForFd:(int)arg1;
+ (void)execPagerOnFileFd:(int)arg1;

- (void)reset;
- (void)put:(id)arg1;
- (void)write:(const char *)arg1;
- (void)endLine;
- (id)initWithFd:(int)arg1 forceColor:(_Bool)arg2;
- (unsigned long long)_startInCString:(char [256])arg1 fgColor:(int)arg2 bgColor:(int)arg3 attr:(int)arg4;
- (id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (void)cursorGotoLineStart;
- (void)forgetRemainingSpace;
- (void)puts:(const char *)arg1 len:(unsigned long long)arg2;
- (void)_putsAndCrop:(const char *)arg1 len:(unsigned long long)arg2;
- (void)puts:(const char *)arg1;
- (void)startPager;
- (id)stringForReset;
- (void)eraseEndOfLine;
- (void)eraseStartOfLine;
- (void)eraseLine;
- (void)eraseScreenDown;
- (void)eraseScreenUp;
- (void)cursorSave;
- (void)cursorRestore;
- (void)cursorUp:(unsigned int)arg1;
- (void)cursorDown:(unsigned int)arg1;
- (void)cursorRight:(unsigned int)arg1;
- (void)cursorLeft:(unsigned int)arg1;
- (void)startNewLine;
- (unsigned long long)remainingSpace;

@end
