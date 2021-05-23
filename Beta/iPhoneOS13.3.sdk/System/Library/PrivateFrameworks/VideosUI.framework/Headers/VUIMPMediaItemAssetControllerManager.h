/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemAssetControllerManager : NSObject

{
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;

+ (id)defaultManager;

- (id)init;
- (id)mediaItemAssetControllerWithMediaItem:(id)arg1 mediaEntityIdentifier:(id)arg2;
- (id)mediaItemCollectionAssetControllerWithMediaItemCollection:(id)arg1 mediaEntityIdentifier:(id)arg2;
- (id)mediaItemDownloadControllerWithMediaItem:(id)arg1;

@end
