/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/Swift-Protocol.h>

@protocol JTCompositionClipsDataSource <Swift>

- (unsigned short)duration;
- (unsigned short)imageScale;
- (unsigned short)naturalSize;
- (unsigned short)isFullScreen;
- (unsigned short)supportsDeepColor;
- (unsigned short)timeScale;
- (unsigned short)frameRate;
- (unsigned short)currentClip;
- (unsigned short)clipCount;
- (unsigned short)clipAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)screenCanShow2160P;
- (unsigned short)isExporting;
- (unsigned short)use2160Pcontent: /* Error: Ran out of types for this method. */;
- (unsigned short)duckAllAudioClips;
- (unsigned short)backgroundAudioClip;
- (unsigned short)fullScreenPlaybackOnExternalDisplay;
- (unsigned short)dontRenderLiveTitles;
- (unsigned short)indexOfClip: /* Error: Ran out of types for this method. */;

@end
