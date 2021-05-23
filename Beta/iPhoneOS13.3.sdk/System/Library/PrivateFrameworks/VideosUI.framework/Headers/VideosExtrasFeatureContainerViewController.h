/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UIView, VideosExtrasContext;

@protocol VideosExtrasVideoPlaybackViewController;

__attribute__((visibility("hidden")))
@interface VideosExtrasFeatureContainerViewController : UIViewController

{
    UIViewController<VideosExtrasVideoPlaybackViewController> *_videoPlaybackViewController;
    NSLayoutConstraint *_overlayViewAdjustmentConstraint;
    VideosExtrasContext *_context;
    UIView *_menuBarView;
    double _collectionViewHeight;
}

@property (nonatomic) double collectionViewHeight;
@property (weak, nonatomic, readonly) VideosExtrasContext *context;
@property (retain, nonatomic) UIViewController<VideosExtrasVideoPlaybackViewController> *videoPlaybackViewController;
@property (weak, nonatomic) UIView *menuBarView;

- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)viewDidLoad;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)_menuBarHeightChange:(id)arg1;

@end
