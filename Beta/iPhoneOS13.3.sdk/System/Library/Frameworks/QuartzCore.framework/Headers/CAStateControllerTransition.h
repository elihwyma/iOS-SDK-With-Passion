/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class CALayer, CAStateController, CAStateTransition, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CAStateControllerTransition : NSObject

{
    CAStateController *_controller;
    CALayer *_layer;
    CAStateTransition *_transition;
    double _beginTime;
    double _duration;
    float _speed;
    NSString *_masterKey;
    NSMutableArray *_animations;
}

@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) CAStateTransition *transition;
@property (nonatomic, readonly) double beginTime;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) float speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)addAnimation:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)removeAnimationFromLayer:(id)arg1 forKey:(id)arg2;

@end
