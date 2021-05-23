/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBKeyViewAnimator : NSObject

{
    _Bool _disabled;
}

@property (nonatomic) _Bool disabled;
@property (nonatomic, readonly) _Bool shouldPurgeKeyViews;
@property (nonatomic, readonly) struct CGRect primaryGlyphNormalizedExitRect;
@property (nonatomic, readonly) struct CGRect secondaryGlyphNormalizedExitRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
+ (id)normalizedUnwindOpacityAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;
+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;
+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;

- (void)reset;
- (Class)keyViewClassForKey:(id)arg1 traits:(id)arg2;
- (void)endTransitionForKeyView:(id)arg1;
- (void)updateTransitionForKeyView:(id)arg1 normalizedDragSize:(struct CGSize)arg2;
- (Class)_keyViewClassForSpecialtyKey:(id)arg1;
- (id)keycapMeshTransformFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2;
- (id)keycapNullTransform;
- (id)keycapPrimaryDualStringTransform:(id)arg1;
- (id)keycapPrimaryTransform;
- (id)keycapAlternateDualStringTransform:(id)arg1;
- (id)keycapAlternateTransform:(id)arg1;
- (id)keycapLeftTransform;
- (id)keycapRightTransform;
- (void)_fadeOutKeyView:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)keycapPrimaryExitTransform;
- (id)keycapLeftSelectPrimaryTransform;
- (id)keycapLeftSelectLeftTransform;
- (id)keycapLeftSelectRightTransform;
- (id)keycapRightSelectPrimaryTransform;
- (id)keycapRightSelectLeftTransform;
- (id)keycapRightSelectRightTransform;
- (void)transitionStartedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 toLeft:(_Bool)arg3;
- (void)transitionEndedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2;
- (double)delayedDeactivationTimeForKeyView:(id)arg1;
- (void)_fadeInKeyView:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldAssertCurrentKeyState:(id)arg1;
- (_Bool)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3;
- (void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;

@end
