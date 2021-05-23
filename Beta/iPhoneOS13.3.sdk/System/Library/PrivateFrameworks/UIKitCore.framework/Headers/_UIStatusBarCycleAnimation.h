/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, _UIStatusBarCycleLayerAnimation;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCycleAnimation : NSObject

{
    _Bool _stopsAfterReversing;
    _Bool _visible;
    NSArray *_layerAnimations;
    long long _state;
    NSArray *_stoppingLayerAnimations;
    NSMutableArray *_completionHandlers;
}

@property (nonatomic) _Bool visible;
@property (nonatomic, readonly) _UIStatusBarCycleLayerAnimation *mainLayerAnimation;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (nonatomic, readonly) NSArray *layerAnimations;
@property (nonatomic, readonly) long long state;
@property (nonatomic) _Bool stopsAfterReversing;
@property (retain, nonatomic) NSArray *stoppingLayerAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)resumePersistentAnimation;
- (void)pausePersistentAnimation;
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_stopAnimations;
- (id)initWithLayerAnimations:(id)arg1;
- (void)_startAnimations;
- (void)_stopStoppingAnimations;
- (void)_sendCompletionsWithFinished:(_Bool)arg1;

@end
