/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCustomVideoCompositorSession, AVVideoComposition, AVVideoOutputSettings, NSArray;

__attribute__((visibility("hidden")))
@interface AVAssetReaderVideoCompositionOutputInternal : NSObject

{
    NSArray *videoTracks;
    AVVideoOutputSettings *videoOutputSettings;
    AVVideoComposition *videoComposition;
    void *figVideoCompositor;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
}

@end
