/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class ICStoreHLSAssetInfo, NSURL;

@interface MPStoreHLSAssetInfo : NSObject

{
    ICStoreHLSAssetInfo *_internalInfo;
}

@property (copy, nonatomic, readonly) NSURL *playlistURL;
@property (copy, nonatomic, readonly) NSURL *keyCertificateURL;
@property (copy, nonatomic, readonly) NSURL *keyServerURL;
@property (copy, nonatomic, readonly) NSURL *alternatePlaylistURL;
@property (copy, nonatomic, readonly) NSURL *alternateKeyCertificateURL;
@property (copy, nonatomic, readonly) NSURL *alternateKeyServerURL;
@property (nonatomic, readonly, getter=isiTunesStoreStream) _Bool iTunesStoreStream;

- (id)initWithiTunesCloudStoreHLSAssetInfo:(id)arg1;

@end
