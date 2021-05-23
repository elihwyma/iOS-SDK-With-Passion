/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVMetadataItemFilter, AVVideoComposition, NSArray;

__attribute__((visibility("hidden")))
@interface AVAssetExportSessionInternal : NSObject

{
    struct OpaqueFigAssetExportSession *figExportSession;
    AVAsset *asset;
    AVAudioMix *audioMix;
    void *figVideoCompositor;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    AVVideoComposition *videoComposition;
    NSArray *metadata;
    AVMetadataItemFilter *metadataItemFilter;
    CDUnknownBlockType handler;
}

@end
