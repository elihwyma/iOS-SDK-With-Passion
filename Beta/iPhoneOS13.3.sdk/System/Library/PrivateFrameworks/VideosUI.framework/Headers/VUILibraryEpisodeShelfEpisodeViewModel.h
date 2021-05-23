/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class VUIMediaItem;

@protocol VUIMediaEntityAssetController;

__attribute__((visibility("hidden")))
@interface VUILibraryEpisodeShelfEpisodeViewModel : NSObject

{
    VUIMediaItem *_episode;
    NSObject<VUIMediaEntityAssetController> *_assetController;
}

@property (retain, nonatomic) VUIMediaItem *episode;
@property (retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController;

@end
