/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface ISDisplayLink : NSObject

{
    long long _preferredFramesPerSecond;
    CDUnknownBlockType _updateHandler;
    CDUnknownBlockType _completionHandler;
    CADisplayLink *_displayLink;
}

@property (copy, nonatomic) CDUnknownBlockType updateHandler;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) long long preferredFramesPerSecond;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)_update:(id)arg1;
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_callUpdateHandler;

@end
