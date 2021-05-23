/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_source;

@interface MPWeakTimer : NSObject

{
    NSObject<OS_dispatch_source> *_timerSource;
}

+ (id)timerWithInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
+ (id)timerWithInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (id)timerWithInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)timerWithInterval:(double)arg1 repeats:(_Bool)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;

- (void)dealloc;
- (void)invalidate;
- (id)initWithInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithInterval:(double)arg1 repeats:(_Bool)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;

@end
