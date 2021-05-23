/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class MSASAlbum, MSAsset;

@interface MSASAssetInfoToReauthForDownload : NSObject

{
    MSAsset *_asset;
    MSASAlbum *_album;
}

@property (retain, nonatomic) MSAsset *asset;
@property (retain, nonatomic) MSASAlbum *album;

@end
