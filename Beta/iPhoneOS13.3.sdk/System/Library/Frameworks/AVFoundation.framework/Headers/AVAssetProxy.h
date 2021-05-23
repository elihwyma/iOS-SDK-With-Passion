/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAsset.h>

@class AVAssetProxyInternal;

__attribute__((visibility("hidden")))
@interface AVAssetProxy : AVAsset

{
    AVAssetProxyInternal *_assetProxy;
}

+ (id)assetProxyWithPropertyList:(id)arg1;
+ (id)makePropertyListForMovieProxyHeader:(id)arg1 name:(id)arg2;

- (_Bool)isProxy;
- (void)dealloc;
- (id)initWithPropertyList:(id)arg1;
- (id)tracks;
- (struct OpaqueFigAsset *)_figAsset;
- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (struct OpaqueFigFormatReader *)_formatReader;
- (Class)_classForTrackInspectors;

@end
