/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class CSBounceSettings, NSMutableSet, NSSet, NSString, SBBounceBehavior, SBBouncingItem, SBBouncingSystem, UIDynamicAnimator, UIGestureRecognizer, UIView;

@protocol SBPresentingDelegate;

@interface SBLockScreenBounceAnimator : NSObject <Swift>

{
    NSMutableSet *_tapExcludedViews;
    NSMutableSet *_tapExcludedZones;
    _Bool _isAnimating;
    _Bool _bounceEnabled;
    UIView *_view;
    SBBouncingSystem *_system;
    UIDynamicAnimator *_animator;
    SBBouncingItem *_item;
    SBBounceBehavior *_behavior;
    UIGestureRecognizer *_tapRecognizer;
    NSSet *_gestures;
    CDUnknownBlockType _shouldBeginBlock;
    CDUnknownBlockType _prepareBlock;
    CDUnknownBlockType _translateBlock;
    CDUnknownBlockType _canceledBlock;
    CDUnknownBlockType _completedBlock;
    CSBounceSettings *_settings;
    id <SBPresentingDelegate> _presentingDelegate;
}

@property (copy) CDUnknownBlockType shouldBeginBlock;
@property (copy) CDUnknownBlockType prepareBlock;
@property (copy) CDUnknownBlockType translateBlock;
@property (copy) CDUnknownBlockType canceledBlock;
@property (copy) CDUnknownBlockType completedBlock;
@property (retain, nonatomic) CSBounceSettings *settings;
@property (weak, nonatomic, readonly) NSSet *tapExcludedViews;
@property (weak, nonatomic) id <SBPresentingDelegate> presentingDelegate;
@property (weak, nonatomic, readonly) NSSet *gestures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)isAnimating;
- (id)initWithView:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)dynamicAnimatorDidPause:(id)arg1;
- (void)_updateSettings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_createAnimator;
- (void)_addTapRecognizer;
- (void)_removeAnimator;
- (void)_resetAnimator;
- (void)_removeTapRecognizer;
- (_Bool)allowTapForGestureRecognizer:(id)arg1;
- (void)_beginAnimating:(id)arg1;
- (void)cancelAnimation;
- (void)setBounceEnabled:(_Bool)arg1;
- (void)addTapExcludedView:(id)arg1;
- (void)removeTapExcludedView:(id)arg1;
- (void)addTapExcludedZone:(struct CGRect)arg1;
- (void)cancelGestureRecognizer:(id)arg1;
- (void)reenableGestureRecognizer:(id)arg1;

@end
