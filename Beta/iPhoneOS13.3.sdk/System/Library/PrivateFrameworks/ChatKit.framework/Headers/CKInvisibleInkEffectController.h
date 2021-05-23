/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKInvisibleInkEffectView, NSString, NSTimer, UIView;

@protocol CKInvisibleInkEffectHostView;

@interface CKInvisibleInkEffectController : NSObject

{
    _Bool _enabled;
    _Bool _paused;
    _Bool _suspended;
    _Bool _effectViewNeedsReset;
    CKInvisibleInkEffectView *_effectView;
    UIView<CKInvisibleInkEffectHostView> *_hostView;
    NSTimer *_resumeTimer;
    UIView *_borrowedEffectViewSnapshot;
}

@property (retain, nonatomic) CKInvisibleInkEffectView *effectView;
@property (weak, nonatomic) UIView<CKInvisibleInkEffectHostView> *hostView;
@property (nonatomic) _Bool effectViewNeedsReset;
@property (retain, nonatomic) NSTimer *resumeTimer;
@property (retain, nonatomic) UIView *borrowedEffectViewSnapshot;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic, getter=isSuspended) _Bool suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForDisplay;
- (void)suspendForTimeInterval:(double)arg1;
- (void)hostViewDidLayoutSubviews;
- (id)initWithHostView:(id)arg1;
- (void)returnBorrowedEffectView;
- (id)borrowEffectView;
- (void)hostViewDidUpdateSnapshot:(id)arg1;
- (void)resumeTimerFired:(id)arg1;
- (void)_updateBorrowedEffectViewSnapshot;
- (void)invisibleInkEffectViewWasUncovered:(id)arg1;
- (void)updateBorrowedEffectViewSnapshot;

@end
