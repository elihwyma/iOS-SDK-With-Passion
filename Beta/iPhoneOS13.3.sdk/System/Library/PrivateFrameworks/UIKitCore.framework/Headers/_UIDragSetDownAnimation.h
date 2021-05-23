/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSArray, NSString, UIViewPropertyAnimator, UIWindow, _UIDragSetDownAnimationWindow;

@interface _UIDragSetDownAnimation : NSObject

{
    NSArray *_itemAnimations;
    CDUnknownBlockType _completion;
    _Bool _hasBegun;
    _UIDragSetDownAnimationWindow *_window;
    CADisplayLink *_displayLink;
    UIViewPropertyAnimator *_remainingItemsPropertyAnimator;
}

@property (nonatomic, readonly) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultSetDownPropertyAnimator;
+ (CDUnknownBlockType)defaultSingleItemAnimationForPlatterView:(id)arg1;
+ (CDUnknownBlockType)defaultMultiItemAnimationForPlatterView:(id)arg1;
+ (CDUnknownBlockType)defaultDropAnimationForPlatterView:(id)arg1;

- (void)begin;
- (void)updateTargetedDragPreview:(id)arg1 forDragItem:(id)arg2;
- (id)initWithVisibleDroppedItems:(id)arg1 items:(id)arg2 forSource:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateVisibleDroppedItems:(id)arg1;
- (void)updateInFlightAnimationTick:(id)arg1;
- (void)_allItemAnimationsCompleted;
- (void)itemAnimationReachedTarget:(id)arg1;
- (void)itemAnimationCompleted:(id)arg1;

@end
