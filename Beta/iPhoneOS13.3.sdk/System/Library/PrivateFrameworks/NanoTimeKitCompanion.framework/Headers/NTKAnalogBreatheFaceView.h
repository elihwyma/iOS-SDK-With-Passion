/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogVideoFaceView.h>

@class NSDictionary;

@interface NTKAnalogBreatheFaceView : NTKAnalogVideoFaceView

{
    NSDictionary *_editOptionDataSources;
    _Bool _shouldApplyTransform;
    unsigned long long _currentVideoStyle;
}

@property (nonatomic) unsigned long long currentVideoStyle;

- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_configureTimeView:(id)arg1;
- (void)handleScreenBlanked;
- (id)imageForEditOption:(id)arg1;
- (id)_complicationsForegroundColor;
- (id)_complicationsPlatterColor;
- (id)_tapHighlightImage;
- (void)_customizeVideoPlayerOnSetup;
- (void)_handleEitherScreenWake;
- (_Bool)_shouldAnimateComplicationsOnTap;
- (void)_faceViewWasTapped;
- (void)videoDidFinishPlayingToEnd;
- (void)videoDidBeginPlayingQueuedVideo;
- (void)customizeFaceViewForListing:(id)arg1 changeEvent:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_applyVideoPlayerTransform;
- (void)_updateDialSize;
- (void)setupDataSources;
- (void)_takeBacklightAssertion;
- (void)_releaseBacklightAssertion;

@end
