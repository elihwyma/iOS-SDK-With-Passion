/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface _UIActiveTimer : NSObject

{
    CADisplayLink *_displayLink;
    CDUnknownBlockType _updateHandler;
}

@property (nonatomic, readonly, getter=isComplete) _Bool complete;

- (void)invalidate;
- (void)_tick:(id)arg1;
- (id)initWithDuration:(double)arg1 updateHandler:(CDUnknownBlockType)arg2;

@end
