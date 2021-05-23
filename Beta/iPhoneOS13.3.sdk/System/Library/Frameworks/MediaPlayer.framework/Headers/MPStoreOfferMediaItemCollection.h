/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPMediaItemCollection.h>

@class MPMediaQuery, MPStoreCompletionOfferResponse, MPStoreOfferContentRating, NSArray;

@interface MPStoreOfferMediaItemCollection : MPMediaItemCollection

{
    MPStoreCompletionOfferResponse *_storeOfferResponse;
    NSArray *_unmergedStoreMediaItems;
    MPMediaQuery *_localItemsQuery;
    MPMediaItemCollection *_localCollection;
    _Bool _hasHiddenRestrictedContent;
    long long _preferredStoreOfferVariant;
    MPStoreOfferContentRating *_collectionContentRating;
}

@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSArray *itemsByRemovingStoreOffers;
@property (nonatomic, readonly) NSArray *itemsByRemovingLocalItems;
@property (nonatomic, readonly) _Bool isCollectionOfferPresentable;

+ (_Bool)supportsSecureCoding;
+ (id)defaultPropertyValues;
+ (id)collectionLookupKeyForMediaProperty:(id)arg1;
+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 mediaProperty:(id)arg2;
+ (id)contentRatingForCollectionPropertyValues:(id)arg1;
+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1;
+ (long long)offerPassTypeForLookupCollectionPropertyValues:(id)arg1;
+ (id)albumOrderedChildItemIDsForLookupCollectionPropertyValues:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)title;
- (unsigned long long)persistentID;
- (id)valueForProperty:(id)arg1;
- (id)mediaLibrary;
- (id)valuesForProperties:(id)arg1;
- (long long)preferredStoreOfferVariant;
- (_Bool)_offeredItemAlreadyExists;
- (_Bool)isDownloadable;
- (id)buyOfferForVariant:(long long)arg1;
- (id)_lookupOfferDictionaries;
- (_Bool)_checkIsUsableOffer;
- (id)initWithStoreOfferResponse:(id)arg1 preferredStoreOfferVariant:(long long)arg2 offerMediaItems:(id)arg3 localItemsQuery:(id)arg4;
- (id)initWithStoreOfferResponse:(id)arg1 preferredStoreOfferVariant:(long long)arg2;
- (id)copyByOverlayingMediaItemsWithItemsQuery:(id)arg1 preferredStoreOfferVariant:(long long)arg2;
- (long long)countOfItemsByRemovingLocalItems;
- (_Bool)isCheaperToPurchaseIndividualItems;
- (_Bool)_hasRestrictedContent;
- (_Bool)hasDownloadableStoreOfferItemsForVariant:(long long)arg1;
- (_Bool)hasPurchasableStoreOfferItemsForVariant:(long long)arg1;
- (void)_loadLocalCollection;

@end
