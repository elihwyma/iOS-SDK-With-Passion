/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, CLKMediaAssetView, NSString, NSURL, NTKCachedPhoto, NTKPhoto;

@protocol NTKPhotoImageViewDelegate;

@interface NTKPhotoImageView : UIView

{
    CLKDevice *_device;
    CLKMediaAssetView *_mediaAssetView;
    NTKPhoto *_photo;
    id <NTKPhotoImageViewDelegate> _delegate;
    NTKCachedPhoto *_cachedPhoto;
}

@property (weak, nonatomic) id <NTKPhotoImageViewDelegate> delegate;
@property (nonatomic, readonly) _Bool isPhotoIris;
@property (nonatomic, readonly) _Bool isIrisVideoHidden;
@property (nonatomic, readonly) NSURL *irisURL;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NTKCachedPhoto *cachedPhoto;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isPlaying;
- (void)mediaAssetViewDidEndPlaying:(id)arg1;
- (void)mediaAssetViewDidBeginPlaying:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;
- (void)interruptPlayback;
- (void)resumeInterruptedPlayback;
- (void)prepareToPlayWithMode:(long long)arg1;
- (void)playWithMode:(long long)arg1;
- (void)pauseWithMode:(long long)arg1;
- (void)setPhoto:(id)arg1 allowIris:(_Bool)arg2;

@end
