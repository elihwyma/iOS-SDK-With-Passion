/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPStoreRedownloadProductItemAsset, NSArray, NSDictionary, NSString, NSURL;

@interface MPStoreRedownloadProductItem : NSObject

{
    NSDictionary *_responseDictionary;
    _Bool _usesCurrentAccountIfAvailable;
    NSURL *_fallbackStreamingKeyServerURL;
    NSURL *_fallbackStreamingKeyCertificateURL;
}

@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (copy, nonatomic) NSURL *fallbackStreamingKeyServerURL;
@property (copy, nonatomic) NSURL *fallbackStreamingKeyCertificateURL;
@property (nonatomic) _Bool usesCurrentAccountIfAvailable;
@property (copy, nonatomic, readonly) NSArray *allFlavors;
@property (nonatomic, readonly) MPStoreRedownloadProductItemAsset *asset;
@property (nonatomic, readonly) MPStoreRedownloadProductItemAsset *firstAsset;
@property (nonatomic, readonly, getter=isiTunesStoreStream) _Bool iTunesStoreStream;
@property (copy, nonatomic, readonly) NSString *fileExtension;
@property (nonatomic, readonly) NSURL *HLSPlaylistURL;
@property (nonatomic, readonly) NSURL *HLSKeyCertificateURL;
@property (nonatomic, readonly) NSURL *HLSKeyServerURL;
@property (nonatomic, readonly) NSURL *alternateHLSPlaylistURL;
@property (nonatomic, readonly) NSURL *alternateHLSKeyServerURL;
@property (nonatomic, readonly) NSURL *alternateHLSKeyCertificateURL;

- (id)_initWithResponseDictionary:(id)arg1;
- (id)assetForFlavor:(id)arg1;
- (void)_enumerateAssetDictionariesWithBlock:(CDUnknownBlockType)arg1;

@end
