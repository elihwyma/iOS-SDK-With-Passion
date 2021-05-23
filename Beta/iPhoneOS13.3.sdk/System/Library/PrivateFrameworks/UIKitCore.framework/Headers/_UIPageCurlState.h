/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITransitionState.h>

@class NSString, UIView, _UIPageCurl;

__attribute__((visibility("hidden")))
@interface _UIPageCurlState : _UITransitionState

{
    _UIPageCurl *_pageCurl;
    long long _curlType;
    struct CGPoint _initialLocation;
    struct CGPoint _referenceLocation;
    UIView *_frontPageView;
    UIView *_backPageView;
    UIView *_frontView;
    UIView *_backView;
    long long _completionCount;
    long long _curlState;
    _Bool _finished;
    _Bool _willComplete;
    CDUnknownBlockType _finally;
}

@property (nonatomic, readonly) _UIPageCurl *pageCurl;
@property (nonatomic, readonly) long long curlType;
@property (nonatomic, readonly) struct CGPoint initialLocation;
@property (nonatomic, readonly) struct CGPoint referenceLocation;
@property (nonatomic, readonly) UIView *frontPageView;
@property (nonatomic, readonly) UIView *backPageView;
@property (nonatomic, readonly) UIView *frontView;
@property (nonatomic, readonly) UIView *backView;
@property (nonatomic, readonly) long long curlState;
@property (nonatomic, readonly, getter=hasPendingAnimations) _Bool pendingAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cleanup;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)finally;
- (struct CGRect)_pageViewFrame;
- (void)cleanupWithFinishedState:(_Bool)arg1 completedState:(_Bool)arg2;
- (id)initWithPageCurl:(id)arg1 andCurlType:(long long)arg2 fromLocation:(struct CGPoint)arg3 withReferenceLocation:(struct CGPoint)arg4 inDirection:(long long)arg5 withView:(id)arg6 revealingView:(id)arg7 completion:(CDUnknownBlockType)arg8 finally:(CDUnknownBlockType)arg9;
- (void)invalidatePageCurl;
- (void)addFrontPageContent;
- (void)addBackPageContent;
- (void)setCurlState:(long long)arg1 willComplete:(_Bool)arg2;
- (void)incrementCompletionCount;
- (long long)_effectiveTransitionDirection;
- (_Bool)isCompatibleWithCurlOfType:(long long)arg1 inDirection:(long long)arg2;

@end
