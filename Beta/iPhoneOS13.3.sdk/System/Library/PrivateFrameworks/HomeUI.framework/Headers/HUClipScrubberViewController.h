/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class CADisplayLink, HFCameraPlaybackEngine, HMCameraClipFetchVideoAssetContextOperation, HUClipScrubberDataSource, HUClipScrubberScrollDelegate, HUClipScrubberView, NSLayoutConstraint, NSString, UIButton, UIView;

@interface HUClipScrubberViewController : UIViewController

{
    _Bool _isVisible;
    CDUnknownBlockType _accessoryButtonHandler;
    CDUnknownBlockType _beginEditingHandler;
    CDUnknownBlockType _endEditingHandler;
    CDUnknownBlockType _deletionHandler;
    HFCameraPlaybackEngine *_playbackEngine;
    HUClipScrubberView *_scrubberView;
    UIButton *_selectionButton;
    UIButton *_nearbyAccessoriesButton;
    UIButton *_feedbackButton;
    UIView *_selectionPlatter;
    UIView *_feedbackPlatter;
    UIView *_nearbyAccessoriesPlatter;
    HUClipScrubberDataSource *_dataSource;
    HUClipScrubberScrollDelegate *_clipScrollDelegate;
    NSLayoutConstraint *_scrubberViewRightAnchorConstraint;
    NSLayoutConstraint *_scrubberViewLeftAnchorConstraint;
    NSLayoutConstraint *_feedbackPlatterTopAnchorConstraint;
    NSLayoutConstraint *_nearbyAccessoriesPlatterTopAnchorConstraint;
    NSLayoutConstraint *_selectionPlatterTopAnchorConstraint;
    CADisplayLink *_scrubberUpdateDisplayLink;
    unsigned long long _lastEngineMode;
    HMCameraClipFetchVideoAssetContextOperation *_exportDownloadOperation;
}

@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (retain, nonatomic) HUClipScrubberView *scrubberView;
@property (retain, nonatomic) UIButton *selectionButton;
@property (retain, nonatomic) UIButton *nearbyAccessoriesButton;
@property (retain, nonatomic) UIButton *feedbackButton;
@property (retain, nonatomic) UIView *selectionPlatter;
@property (retain, nonatomic) UIView *feedbackPlatter;
@property (retain, nonatomic) UIView *nearbyAccessoriesPlatter;
@property (retain, nonatomic) HUClipScrubberDataSource *dataSource;
@property (retain, nonatomic) HUClipScrubberScrollDelegate *clipScrollDelegate;
@property (retain, nonatomic) NSLayoutConstraint *scrubberViewRightAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *scrubberViewLeftAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *feedbackPlatterTopAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *nearbyAccessoriesPlatterTopAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *selectionPlatterTopAnchorConstraint;
@property (retain, nonatomic) CADisplayLink *scrubberUpdateDisplayLink;
@property (nonatomic) _Bool isVisible;
@property (nonatomic) unsigned long long lastEngineMode;
@property (weak, nonatomic) HMCameraClipFetchVideoAssetContextOperation *exportDownloadOperation;
@property (copy, nonatomic) CDUnknownBlockType accessoryButtonHandler;
@property (copy, nonatomic) CDUnknownBlockType beginEditingHandler;
@property (copy, nonatomic) CDUnknownBlockType endEditingHandler;
@property (copy, nonatomic) CDUnknownBlockType deletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double currentScrubberResolution;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (unsigned long long)displayMode;
- (void)didTap:(id)arg1;
- (void)_addConstraints;
- (void)togglePlayPause;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)manager:(id)arg1 didSubmitCameraClip:(id)arg2;
- (void)manager:(id)arg1 didSubmitCameraClips:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateClipManager:(id)arg2;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)didPinch:(id)arg1;
- (void)_updateScrubberDisplayLinkState;
- (id)platterWithView:(id)arg1;
- (void)submitCurrentClip;
- (void)dismissEditInterface;
- (void)exportCurrentClipWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)userIsScrubbing;
- (void)reloadClipManager:(id)arg1;
- (void)updateDisplayForLiveMode;
- (void)_scrubberDisplayLinkTick:(id)arg1;
- (void)updateScrubberViewAndAssociatedConstraints;
- (void)_updatePlaybackPosition:(id)arg1 animated:(_Bool)arg2;
- (void)removeLiveButtonHighlighting;
- (_Bool)_cellBoundsContainsPlayhead:(id)arg1;
- (void)changeToLiveMode;
- (void)showDeleteInterface;
- (void)didSelectLeftActionButton:(id)arg1;
- (void)didSelectRightActionButton:(id)arg1;
- (void)didSelectFeedbackButton;
- (void)showEditInterface;
- (void)showAssociatedAccessories;
- (void)exportLocalClipAtURL:(id)arg1;
- (id)_displayableURLForCameraClipURL:(id)arg1;
- (void)presentPreviouslySubmittedClipAlert;
- (void)deleteClip;
- (void)presentFeedbackConsent;
- (id)_feedbackClip;
- (void)presentFeedbackOptions;
- (void)verifySubmitAllClips;
- (void)submitAllUnsubmittedClips;
- (void)consentController:(id)arg1 didFinishConsentWithAnswer:(_Bool)arg2;
- (id)uploadURLCameraClip:(id)arg1;
- (id)outputURLForClip:(id)arg1;
- (void)updateTimelineState:(unsigned long long)arg1;

@end
