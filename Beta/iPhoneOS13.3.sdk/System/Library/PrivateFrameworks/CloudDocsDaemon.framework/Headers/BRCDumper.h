/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@interface BRCDumper : NSObject

- (void)reset;
- (void)write:(const char *)arg1;
- (void)changeAttributes:(int)arg1;
- (id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (id)stringForReset;
- (void)startFgColor:(int)arg1 attr:(int)arg2;
- (void)startBgColor:(int)arg1 attr:(int)arg2;
- (void)startFgColor:(int)arg1;
- (void)startBgColor:(int)arg1;
- (void)startAttributes:(int)arg1;
- (void)changeFgColor:(int)arg1;
- (void)changeBgColor:(int)arg1;

@end
