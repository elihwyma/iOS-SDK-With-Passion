/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UINavigationController, UIRefreshControl, UIScrollView, UIView;

@protocol _UINavigationControllerRefreshControlHostDelegate;

__attribute__((visibility("hidden")))
@interface _UINavigationControllerRefreshControlHost : NSObject

{
    UIScrollView *_scrollView;
    id <_UINavigationControllerRefreshControlHostDelegate> _delegate;
    UINavigationController *_navigationController;
    double _restingHeightOfRefreshControl;
    UIView *_hostContainerView;
    double _unobstructedHeight;
    UIRefreshControl *_refreshControl;
    NSArray *_refreshControlConstraints;
}

@property (weak) UIRefreshControl *refreshControl;
@property (retain) NSArray *refreshControlConstraints;
@property (weak, nonatomic) id <_UINavigationControllerRefreshControlHostDelegate> delegate;
@property (weak, nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic) double restingHeightOfRefreshControl;
@property (nonatomic, readonly) double fullHeightOfRefreshControl;
@property (retain, nonatomic) UIView *hostContainerView;
@property (nonatomic) double unobstructedHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) _Bool refreshControlInsetsAffectScrollViewRubberBanding;
@property (weak, readonly) UIScrollView *scrollView;

+ (_Bool)canHostRefreshControlOwnedByScrollView:(id)arg1 inNavigationController:(id)arg2;

- (void)dealloc;
- (void)stopAnimations;
- (_Bool)isHostingRefreshControlOwnedByScrollView:(id)arg1;
- (id)initWithNavigationController:(id)arg1 scrollView:(id)arg2;
- (void)incrementInsetHeight:(double)arg1;
- (void)decrementInsetHeight:(double)arg1;
- (void)refreshControl:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3;
- (void)_notifyLayoutDidChange;
- (void)_removeRefreshControlFromContainerView;
- (void)_installRefreshControlIntoContainerView;
- (void)_updateFadeOutProgress;
- (double)_alphaForRefreshingControlStateWithPossiblyObstructedContent;
- (double)_thresholdForObstructedContentFullAlpha;
- (double)_thresholdForObstructedContentZeroAlpha;

@end
