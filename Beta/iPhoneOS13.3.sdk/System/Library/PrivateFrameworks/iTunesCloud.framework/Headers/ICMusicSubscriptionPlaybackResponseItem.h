/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICStoreHLSAssetInfo, ICURLBag, NSArray, NSDate, NSDictionary;

@interface ICMusicSubscriptionPlaybackResponseItem : NSObject <Swift>

{
    NSDictionary *_itemResponseDictionary;
    ICURLBag *_urlBag;
    NSDate *_assetExpirationDate;
}

@property (copy, nonatomic) NSDate *assetExpirationDate;
@property (nonatomic, readonly) long long storeAdamID;
@property (copy, nonatomic, readonly) NSArray *fileAssets;
@property (copy, nonatomic, readonly) ICStoreHLSAssetInfo *hlsAsset;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fileAssetWithFlavorType:(long long)arg1;
- (id)initWithItemResponseDictionary:(id)arg1 urlBag:(id)arg2;

@end
