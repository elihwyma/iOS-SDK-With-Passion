/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class HFCameraPlaybackEngine, NSString, UIActivityIndicatorView, UIImageView, UILabel, UIVisualEffectView;

@interface HUCameraPlayerAccessoryViewController : UIViewController

{
    _Bool _canShowOverlayContent;
    _Bool _shouldShowLoadingIndicatorForClipPlayback;
    _Bool _showingNoActivity;
    _Bool _showingError;
    _Bool _showingLoadingIndicator;
    _Bool _showingBlur;
    HFCameraPlaybackEngine *_playbackEngine;
    UIImageView *_noResponseView;
    UIActivityIndicatorView *_loadingActivityIndicator;
    UILabel *_noActivityLabel;
    UILabel *_primaryErrorLabel;
    UILabel *_secondaryErrorLabel;
    UIVisualEffectView *_blurView;
    unsigned long long _currentAccessMode;
}

@property (retain, nonatomic) UIImageView *noResponseView;
@property (retain, nonatomic) UIActivityIndicatorView *loadingActivityIndicator;
@property (retain, nonatomic) UILabel *noActivityLabel;
@property (retain, nonatomic) UILabel *primaryErrorLabel;
@property (retain, nonatomic) UILabel *secondaryErrorLabel;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (nonatomic) _Bool showingNoActivity;
@property (nonatomic) _Bool showingError;
@property (nonatomic) _Bool showingLoadingIndicator;
@property (nonatomic) _Bool showingBlur;
@property (nonatomic) unsigned long long currentAccessMode;
@property (nonatomic) _Bool canShowOverlayContent;
@property (nonatomic) _Bool shouldShowLoadingIndicatorForClipPlayback;
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_newLabel;

- (void)viewDidLoad;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
- (void)_updateStateAnimated:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)hu_reloadData;
- (void)_updateAllOverlayStateAnimated:(_Bool)arg1;
- (void)_updateLoadingStateAnimated:(_Bool)arg1;
- (void)_updateBlurVisibilityAnimated:(_Bool)arg1;
- (void)_updateErrorStateAnimated:(_Bool)arg1;
- (void)_updateNoActivityStateAnimated:(_Bool)arg1;
- (_Bool)_shouldShortCircuitLoadingIndicator;
- (id)_errorStringDetailsForError:(id)arg1;
- (_Bool)_shouldShortCircuitBlurEffect;

@end
