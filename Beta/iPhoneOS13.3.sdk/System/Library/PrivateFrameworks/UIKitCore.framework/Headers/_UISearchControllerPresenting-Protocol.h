/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIPresentationController, UIView;

@protocol _UISearchControllerPresenting;

@protocol _UISearchControllerPresenting <Swift>

@property (retain, nonatomic, readonly) UIView *searchBarContainerView;
@property (nonatomic, readonly) _Bool shouldAccountForStatusBar;
@property (nonatomic, readonly) double statusBarAdjustment;
@property (nonatomic, readonly) _Bool searchBarToBecomeTopAttached;
@property (nonatomic, readonly) _Bool resultsUnderlapsSearchBar;
@property (nonatomic, readonly) _Bool searchBarCanContainScopeBar;
@property (nonatomic, readonly) _Bool searchBarShouldClipToBounds;
@property (nonatomic, readonly) double resultsControllerContentOffset;
@property (nonatomic, readonly) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (nonatomic, readonly) struct CGRect finalFrameForContainerView;
@property (nonatomic, readonly) _Bool animatorShouldLayoutPresentationViews;
@property (nonatomic, readonly) _Bool forceObeyNavigationBarInsets;
@property (nonatomic, readonly) unsigned long long edgeForHidingNavigationBar;

- (unsigned short)setContentVisible: /* Error: Ran out of types for this method. */;

@end
