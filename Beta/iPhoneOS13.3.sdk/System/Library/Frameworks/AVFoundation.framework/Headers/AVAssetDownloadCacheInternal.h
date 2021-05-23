/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAsset;

__attribute__((visibility("hidden")))
@interface AVAssetDownloadCacheInternal : NSObject

{
    AVAsset *asset;
    struct CMBaseObject *assetCacheInspector;
}

@end
