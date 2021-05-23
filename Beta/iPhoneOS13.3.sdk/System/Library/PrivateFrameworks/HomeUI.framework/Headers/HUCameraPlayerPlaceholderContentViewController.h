/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class HFCameraPlaybackEngine, HMCameraClip, NSString, UIImageView;

@interface HUCameraPlayerPlaceholderContentViewController : UIViewController

{
    _Bool _cameraPlayerHasContentToShow;
    HFCameraPlaybackEngine *_playbackEngine;
    UIImageView *_placeholderImageView;
    HMCameraClip *_lastRequestedClip;
}

@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) HMCameraClip *lastRequestedClip;
@property (nonatomic) _Bool cameraPlayerHasContentToShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackError:(id)arg2;
- (void)manager:(id)arg1 didFindImage:(id)arg2 atTimeOffset:(double)arg3 forClip:(id)arg4;
- (void)_updatePlaceholderContentAnimated:(_Bool)arg1;
- (_Bool)_shouldHidePlaceholderContentForCurrentAccessMode;
- (void)_animateState:(_Bool)arg1 placeholderImage:(id)arg2;
- (void)_updateStateAnimated:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)hu_reloadData;

@end
