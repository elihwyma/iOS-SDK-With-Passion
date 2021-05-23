/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICStoreFinanceItemMetadata, ICStoreHLSAssetInfo, ICURLBag, NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface ICStoreMediaResponseItem : NSObject <Swift>

{
    NSDictionary *_itemResponseDictionary;
    ICURLBag *_urlBag;
    NSDate *_assetExpirationDate;
}

@property (copy, nonatomic) NSDate *assetExpirationDate;
@property (nonatomic, readonly) long long storeAdamID;
@property (copy, nonatomic, readonly) NSURL *artworkURL;
@property (copy, nonatomic, readonly) NSURL *cancelDownloadURL;
@property (copy, nonatomic, readonly) NSString *downloadIdentifier;
@property (nonatomic, readonly) _Bool isPurchasedRedownload;
@property (copy, nonatomic, readonly) ICStoreFinanceItemMetadata *metadata;
@property (copy, nonatomic, readonly) NSDate *purchaseDate;
@property (copy, nonatomic, readonly) NSString *redownloadParameters;
@property (copy, nonatomic, readonly) NSArray *fileAssets;
@property (copy, nonatomic, readonly) ICStoreHLSAssetInfo *hlsAsset;
@property (nonatomic, readonly) id suzeLeaseID;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItemResponseDictionary:(id)arg1 urlBag:(id)arg2;
- (id)downloadableAsset;
- (id)downloadableAssetMatchingFlavorType:(long long)arg1;

@end
