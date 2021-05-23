/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <UIKit/UIViewController.h>

@class CALayer, MediaControlsVolumeController, MediaControlsVolumeSliderView, NSArray, NSString, UIViewPropertyAnimator, UIWindowScene;

@protocol MediaControlsVolumeViewControllerDelegate;

@interface MediaControlsVolumeViewController : UIViewController

{
    MediaControlsVolumeSliderView *_primarySlider;
    MediaControlsVolumeSliderView *_secondarySlider;
    NSString *_packageName;
    _Bool _isExpanded;
    id <MediaControlsVolumeViewControllerDelegate> _delegate;
    MediaControlsVolumeController *_volumeController;
}

@property (weak, nonatomic) id <MediaControlsVolumeViewControllerDelegate> delegate;
@property (retain, nonatomic) MediaControlsVolumeController *volumeController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIWindowScene *windowSceneForVolumeDisplay;
@property (nonatomic, readonly, getter=isOnScreenForVolumeDisplay) _Bool onScreenForVolumeDisplay;
@property (nonatomic, readonly) NSString *volumeAudioCategory;
@property (nonatomic, readonly, getter=isOnScreen) _Bool onScreen;
@property (nonatomic, readonly, getter=isGroupRenderingRequired) _Bool groupRenderingRequired;
@property (nonatomic, readonly) NSArray *punchOutRootLayers;
@property (nonatomic, readonly) CALayer *punchOutRootLayer;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) double preferredExpandedContinuousCornerRadius;
@property (nonatomic, readonly) _Bool providesOwnPlatter;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;

- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)_updateVisibility;
- (void)willTransitionToExpandedContentMode:(_Bool)arg1;
- (void)mediaControlsVolumeController:(id)arg1 didUpdateSplitRoute:(_Bool)arg2;
- (void)mediaControlsVolumeController:(id)arg1 didChangeVolumeAvailable:(_Bool)arg2 effectiveVolume:(float)arg3 forRoute:(unsigned long long)arg4;
- (void)mediaControlsVolumeController:(id)arg1 didChangeUserInteractionEnabled:(_Bool)arg2 forRoute:(unsigned long long)arg3;
- (void)_primarySliderValueDidChange:(id)arg1;
- (void)_secondarySliderValueDidChange:(id)arg1;
- (void)_dismissMediaControlsVolumeViewController;
- (void)_updateGlyphPackageDescription;
- (struct CGRect)primaryFrame;
- (struct CGRect)secondaryFrame;
- (void)_performWithoutAnimationWhileHidden:(CDUnknownBlockType)arg1;

@end
