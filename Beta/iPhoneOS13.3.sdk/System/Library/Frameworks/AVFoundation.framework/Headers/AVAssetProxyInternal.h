/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetInspectorLoader, AVDispatchOnce, NSArray;

__attribute__((visibility("hidden")))
@interface AVAssetProxyInternal : NSObject

{
    AVAssetInspectorLoader *loader;
    NSArray *tracks;
    AVDispatchOnce *makeTracksArrayOnce;
}

@end
