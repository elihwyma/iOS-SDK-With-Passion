/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSURL;

@interface SSVPlaybackItem : NSObject

{
    NSDictionary *_itemDictionary;
    NSURL *_fallbackStreamingKeyServerURL;
    NSURL *_fallbackStreamingKeyCertificateURL;
}

@property (copy, nonatomic) NSURL *fallbackStreamingKeyServerURL;
@property (copy, nonatomic) NSURL *fallbackStreamingKeyCertificateURL;
@property (copy, nonatomic, readonly) NSDictionary *itemDictionary;
@property (copy, nonatomic, readonly) id itemIdentifier;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) NSURL *HLSPlaylistURL;
@property (nonatomic, readonly) NSURL *HLSKeyCertificateURL;
@property (nonatomic, readonly) NSURL *HLSKeyServerURL;
@property (nonatomic, readonly, getter=isiTunesStoreStream) _Bool iTunesStoreStream;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)assetForFlavor:(id)arg1;
- (id)initWithItemDictionary:(id)arg1;
- (void)_enumerateAssetsUsingBlock:(CDUnknownBlockType)arg1;

@end
