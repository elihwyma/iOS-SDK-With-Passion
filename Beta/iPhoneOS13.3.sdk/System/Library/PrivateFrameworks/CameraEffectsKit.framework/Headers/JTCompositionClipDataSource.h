/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class JTAudioClip, JTClip, NSString;

@interface JTCompositionClipDataSource : NSObject

{
    _Bool _dontRenderLiveTitles;
    _Bool _duckAllAudioClips;
    JTClip *_clip;
    JTAudioClip *_backgroundAudioClip;
}

@property (nonatomic) _Bool dontRenderLiveTitles;
@property (nonatomic) _Bool duckAllAudioClips;
@property (retain, nonatomic) JTClip *clip;
@property (retain, nonatomic) JTAudioClip *backgroundAudioClip;
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
- (_Bool)containsEffectsThatRequireCustomRendering;
- (_Bool)use2160Pcontent:(_Bool)arg1;
- (_Bool)fullScreenPlaybackOnExternalDisplay;
- (long long)indexOfClip:(id)arg1;
- (id)initWithClip:(id)arg1 backgroundAudioClip:(id)arg2;

@end
