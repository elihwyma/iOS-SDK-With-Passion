/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@interface SCNAnimationEvent : NSObject

{
    double _eventTime;
    CDUnknownBlockType _eventBlock;
}

+ (id)animationEventWithKeyTime:(double)arg1 block:(CDUnknownBlockType)arg2;

- (id)init;
- (void)dealloc;
- (double)time;
- (void)setTime:(double)arg1;
- (CDUnknownBlockType)eventBlock;
- (void)setEventBlock:(CDUnknownBlockType)arg1;

@end
