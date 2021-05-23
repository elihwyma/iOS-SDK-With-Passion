/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class NCBannerPresentationTransitionDelegate, NSString, SBBannerContainerView, SBBannerContextView, SBUIBannerContext, UIScrollView;

@protocol SBBannerContainerViewControllerDelegate;

@interface SBBannerContainerViewController : UIViewController <Swift>

{
    NCBannerPresentationTransitionDelegate *_bannerPresentationTransitionDelegate;
    SBUIBannerContext *_bannerContext;
    UIScrollView *_scrollView;
    SBBannerContainerView *_bannerContainerView;
    SBBannerContextView *_bannerContextView;
    id <SBBannerContainerViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SBBannerContainerViewControllerDelegate> delegate;
@property (nonatomic, readonly) SBBannerContainerView *bannerContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)setBannerContext:(id)arg1 withReplaceReason:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_bannerContextViewCreatingIfNecessary;
- (void)_handleBannerTapGesture:(id)arg1;
- (void)_tryDismissingBannerInScrollView:(id)arg1;

@end
