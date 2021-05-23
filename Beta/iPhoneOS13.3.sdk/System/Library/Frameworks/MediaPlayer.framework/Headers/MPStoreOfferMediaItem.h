/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPNondurableMediaItem.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPStoreOfferContentRating, MPStoreOfferMediaItemArtworkDescriptor, NSDictionary, NSNumber;

@interface MPStoreOfferMediaItem : MPNondurableMediaItem <Swift>

{
    NSDictionary *_lookupCollectionPropertyValues;
    NSNumber *_itemID;
    long long _preferredStoreOfferVariant;
    MPStoreOfferContentRating *_contentRating;
    MPStoreOfferMediaItemArtworkDescriptor *_offerArtworkDescriptor;
    long long _offerArtworkDescriptorOnceToken;
    id _pid;
    id _discNumber;
    id _trackNumber;
    id _title;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)canFilterByProperty:(id)arg1;
+ (id)defaultPropertyValues;
+ (id)mediaItemsWithStoreLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(long long)arg2;
+ (_Bool)canMergeStoreOfferWithLocalMediaItems:(id)arg1;
+ (_Bool)canRequestStoreOfferForLocalMediaItems:(id)arg1;
+ (id)mediaItemsByMergingStoreOfferMediaItems:(id)arg1 localItems:(id)arg2;
+ (id)mediaItemsByRemovingRestrictedContentFromMediaItems:(id)arg1;
+ (id)collectionLookupKeyForMediaProperty:(id)arg1;
+ (id)itemLookupKeyForMediaProperty:(id)arg1;
+ (id)offerLookupKeyForItemMediaProperty:(id)arg1;
+ (id)offerDictionaryWithPreferredAssetDictionaryInItemResponseDictionary:(id)arg1;
+ (id)assetLookupKeyForItemMediaProperty:(id)arg1;
+ (id)preferredAssetDictionaryInOfferDictionary:(id)arg1;
+ (id)localRepresentativeItemPropertyForMediaProperty:(id)arg1;
+ (id)contentRatingForCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (_Bool)hasMediaItemValuesForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 mediaProperty:(id)arg3;
+ (id)offerArtworkDescriptorForLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2;
+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)title;
- (unsigned long long)persistentID;
- (id)valueForProperty:(id)arg1;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (unsigned long long)albumTrackNumber;
- (unsigned long long)discNumber;
- (id)screenshotArtworkCatalog;
- (id)mediaLibrary;
- (long long)preferredStoreOfferVariant;
- (id)initWithLookupLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(long long)arg2 itemID:(id)arg3;
- (_Bool)_offeredItemAlreadyExists;
- (_Bool)isDownloadable;
- (id)buyOfferForVariant:(long long)arg1;
- (id)offerArtworkDescriptor;
- (id)_lookupOfferDictionaries;

@end
