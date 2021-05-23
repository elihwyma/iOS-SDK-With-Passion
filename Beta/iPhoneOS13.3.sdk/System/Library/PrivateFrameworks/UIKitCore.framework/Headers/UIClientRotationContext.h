/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UISnapshotView, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface UIClientRotationContext : NSObject

{
    UIView *_headerView;
    UIView *_footerView;
    UIView *_contentView;
    UIView *_snapshotTargetView;
    UIView *_rotatingSnapshotView;
    UIView *_footerStartSnapshotView;
    UIView *_footerEndSnapshotView;
    _Bool _headerWasHidden;
    _Bool _footerWasHidden;
    _Bool _contentWasHidden;
    _Bool _snapshotTargetWasHidden;
    _Bool _orderKeyboardInAfterRotating;
    long long _fromOrientation;
    long long _toOrientation;
    double _duration;
    UISnapshotView *_headerSnapshotViewStart;
    UISnapshotView *_footerSnapshotViewStart;
    UISnapshotView *_contentSnapshotViewStart;
    id _rotatingClient;
    CDStruct_8bdd0ba6 _rotationSettings;
    double contentBottomInset;
    UIWindow *_window;
    _Bool _skipClientRotationCallbacks;
}

@property (nonatomic, readonly) id rotatingClient;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) double duration;
@property (nonatomic) _Bool skipClientRotationCallbacks;
@property (nonatomic, readonly) long long fromOrientation;
@property (nonatomic, readonly) long long toOrientation;

- (void)dealloc;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(_Bool)arg3 forInterfaceOrientation:(long long)arg4;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3;
- (id)initWithClient:(id)arg1 toOrientation:(long long)arg2 duration:(double)arg3 andWindow:(id)arg4;
- (void)slideHeaderViewAndFooterViewOffScreen:(_Bool)arg1 forInterfaceOrientation:(long long)arg2;
- (_Bool)_isHeaderTranslucent;
- (_Bool)_isFooterTranslucent;
- (void)setupRotationOrderingKeyboardInAfterRotation:(_Bool)arg1;
- (void)rotateSnapshots;
- (void)finishFirstHalfRotation;
- (void)finishFullRotateUsingOnePartAnimation:(_Bool)arg1;

@end
