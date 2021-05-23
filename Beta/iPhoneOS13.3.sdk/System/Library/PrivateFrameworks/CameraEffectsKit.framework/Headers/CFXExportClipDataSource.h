/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class JTClip, NSString;

@interface CFXExportClipDataSource : NSObject

{
    JTClip *_clip;
}

@property (retain, nonatomic) JTClip *clip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (int)duration;
- (double)imageScale;
- (struct CGSize)naturalSize;
- (_Bool)isFullScreen;
- (_Bool)supportsDeepColor;
- (int)timeScale;
- (int)frameRate;
- (id)currentClip;
- (long long)clipCount;
- (id)clipAtIndex:(long long)arg1;
- (_Bool)screenCanShow2160P;
- (_Bool)isExporting;
- (_Bool)use2160Pcontent:(_Bool)arg1;
- (_Bool)duckAllAudioClips;
- (id)backgroundAudioClip;
- (_Bool)fullScreenPlaybackOnExternalDisplay;
- (_Bool)dontRenderLiveTitles;
- (id)initWithClip:(id)arg1;
- (long long)indexOfClip:(id)arg1;

@end
