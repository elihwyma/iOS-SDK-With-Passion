/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class NSString, NSTimer, UIImage, VideosExtrasConstrainedArtworkContainerView;

@protocol VideosExtrasSlideshowViewControllerDataSource;

__attribute__((visibility("hidden")))
@interface VideosExtrasSlideshowViewController : UIViewController <Swift>

{
    _Bool _animatingTransition;
    _Bool _viewVisible;
    id <VideosExtrasSlideshowViewControllerDataSource> _dataSource;
    unsigned long long _transitionStyle;
    double _transitionInterval;
    unsigned long long _visibleImageIndex;
    VideosExtrasConstrainedArtworkContainerView *_disappearingImageContainerView;
    VideosExtrasConstrainedArtworkContainerView *_imageContainerView;
    UIImage *_nextImage;
    NSTimer *_transitionTimer;
}

@property (nonatomic, getter=isAnimatingTransition) _Bool animatingTransition;
@property (nonatomic, getter=isViewVisible) _Bool viewVisible;
@property (retain, nonatomic) VideosExtrasConstrainedArtworkContainerView *disappearingImageContainerView;
@property (retain, nonatomic) VideosExtrasConstrainedArtworkContainerView *imageContainerView;
@property (retain, nonatomic) UIImage *nextImage;
@property (retain, nonatomic) NSTimer *transitionTimer;
@property (weak, nonatomic) id <VideosExtrasSlideshowViewControllerDataSource> dataSource;
@property (nonatomic) unsigned long long transitionStyle;
@property (nonatomic) double transitionInterval;
@property (nonatomic) unsigned long long visibleImageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (long long)preferredStatusBarStyle;
- (void)_reload;
- (unsigned long long)_numberOfImages;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;
- (void)_invalidateTransitionTimer;
- (void)_prepareNextImageAndScheduleTransitionTimerIfAppropriate;
- (void)_loadImageContainerViewIfAppropriateWithImage:(id)arg1;
- (void)_transitionDidComplete;
- (void)_transitionTimerDidFire:(id)arg1;
- (void)_transitionToNextImageIfAppropriate;
- (void)_scheduleTransitionTimer;
- (void)_performInstantaneousTransition;
- (void)_performDissolveTransition;
- (void)_performPushTransition;
- (void)_performWipeTransition;

@end
