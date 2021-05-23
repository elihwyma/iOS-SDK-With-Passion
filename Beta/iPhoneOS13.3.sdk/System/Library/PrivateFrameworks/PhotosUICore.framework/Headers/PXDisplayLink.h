/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink;

@interface PXDisplayLink : NSObject

{
    CADisplayLink *_displayLink;
    id _target;
    SEL _selector;
}

@property (weak, nonatomic, readonly) id target;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double targetTimestamp;
@property (nonatomic, readonly) double currentMediaTime;
@property (nonatomic) _Bool paused;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)_tick:(id)arg1;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2 deferredStart:(_Bool)arg3;
- (void)_addToRunLoop;

@end
