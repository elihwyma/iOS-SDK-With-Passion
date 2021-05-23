/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface Stopwatch : NSObject

+ (void)stop;
+ (void)start;
+ (double)elapsedTime;
+ (void)stopWithMessage:(id)arg1 precision:(int)arg2;
+ (void)stopWithMessage:(id)arg1 precision:(int)arg2 elapsedtimeBiggerThan:(double)arg3;

@end
