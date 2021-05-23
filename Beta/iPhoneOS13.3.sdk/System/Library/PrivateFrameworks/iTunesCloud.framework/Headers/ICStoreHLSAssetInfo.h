/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSDictionary, NSURL;

@interface ICStoreHLSAssetInfo : NSObject <Swift>

{
    NSDictionary *_itemResponseDictionary;
    _Bool _isiTunesStoreStream;
    NSURL *_keyCertificateURL;
    NSURL *_keyServerURL;
    NSURL *_playlistURL;
}

@property (copy, nonatomic) NSURL *playlistURL;
@property (copy, nonatomic) NSURL *keyCertificateURL;
@property (copy, nonatomic) NSURL *keyServerURL;
@property (nonatomic, getter=isiTunesStoreStream) _Bool iTunesStoreStream;
@property (copy, nonatomic, readonly) NSURL *alternatePlaylistURL;
@property (copy, nonatomic, readonly) NSURL *alternateKeyCertificateURL;
@property (copy, nonatomic, readonly) NSURL *alternateKeyServerURL;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItemResponseDictionary:(id)arg1;

@end
