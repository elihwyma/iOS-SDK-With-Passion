/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL, SSItemImageCollection, SSItemOffer, SUItemContentRating, SUItemLink, SUItemReviewStatistics;

@interface SUItem : NSObject

{
    NSString *_artistName;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_collectionName;
    SUItem *_containerItem;
    NSString *_containerName;
    SUItemContentRating *_contentRating;
    NSString *_copyrightString;
    SSItemOffer *_defaultStoreOffer;
    NSDictionary *_dictionary;
    NSString *_disclaimerString;
    _Bool _gameCenterEnabled;
    NSString *_genreName;
    NSString *_humanReadableDescription;
    BOOL _isInstalled;
    long long _itemDisplayType;
    unsigned long long _itemIdentifier;
    SSItemImageCollection *_itemImageCollection;
    NSArray *_itemLinks;
    NSString *_itemMediaKind;
    long long _itemType;
    NSDate *_releaseDate;
    NSString *_releaseDateString;
    long long _representedItemCount;
    SUItemReviewStatistics *_reviewStatistics;
    NSString *_secondaryTitle;
    NSString *_softwareType;
    NSArray *_storeOffers;
    NSDictionary *_tellAFriendDictionary;
    NSString *_title;
    NSDictionary *_tweetDictionary;
    NSString *_unmodifiedTitle;
    NSNumber *_versionIdentifier;
    NSArray *_versionOrdering;
}

@property (nonatomic, readonly) NSDictionary *itemDictionary;
@property (nonatomic, readonly) NSString *itemTypeString;
@property (copy, nonatomic) SSItemImageCollection *itemImageCollection;
@property (nonatomic, readonly) NSString *tellAFriendBody;
@property (nonatomic, readonly) NSString *tellAFriendBodyMIMEType;
@property (nonatomic, readonly) NSURL *tellAFriendBodyURL;
@property (nonatomic, readonly) NSString *tellAFriendSubject;
@property (nonatomic, readonly) NSString *tweetInitialText;
@property (nonatomic, readonly) NSURL *tweetURL;
@property (nonatomic, readonly) SSItemOffer *defaultStoreOffer;
@property (copy, nonatomic) NSArray *storeOffers;
@property (nonatomic, readonly) SUItemLink *externalArtistPageLink;
@property (copy, nonatomic) NSArray *itemLinks;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (nonatomic, readonly, getter=isInstalled) _Bool installed;
@property (nonatomic, getter=isGameCenterEnabled) _Bool gameCenterEnabled;
@property (copy, nonatomic) NSString *softwareType;
@property (retain, nonatomic) NSNumber *versionIdentifier;
@property (copy, nonatomic) NSArray *versionOrdering;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *collectionName;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *copyrightString;
@property (copy, nonatomic) NSString *disclaimerString;
@property (copy, nonatomic) NSString *genreName;
@property (nonatomic) long long representedItemCount;
@property (copy, nonatomic) SUItemContentRating *contentRating;
@property (retain, nonatomic) SUItem *containerItem;
@property (copy, nonatomic) NSString *humanReadableDescription;
@property (nonatomic, readonly, getter=isDownloadable) _Bool downloadable;
@property (nonatomic) long long itemDisplayType;
@property (nonatomic) unsigned long long itemIdentifier;
@property (copy, nonatomic) NSString *itemMediaKind;
@property (nonatomic) long long itemType;
@property (retain, nonatomic) NSDate *releaseDate;
@property (copy, nonatomic) SUItemReviewStatistics *reviewStatistics;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *unmodifiedTitle;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (void)_reloadProperties;
- (id)relatedItemsForRelationType:(id)arg1;
- (id)_valueForFirstAvailableKey:(id)arg1;
- (id)copyReleaseDateStringWithStyle:(long long)arg1;
- (id)itemLinksForType:(long long)arg1;
- (_Bool)boolValueForProperty:(id)arg1;
- (id)stringValueForProperty:(id)arg1;
- (id)dateValueForProperty:(id)arg1;
- (id)firstItemLinkForType:(long long)arg1;
- (_Bool)isDisplayable:(id *)arg1;
- (void)_reloadDefaultStoreOffer;
- (long long)_linkTargetForTargetString:(id)arg1 typeString:(id)arg2;
- (long long)_linkTypeForString:(id)arg1;
- (id)storeOfferForIdentifier:(id)arg1;
- (id)_squishImageForSquishDictionary:(id)arg1;
- (id)_newPrimaryItemLink;
- (id)_newItemLinkWithType:(long long)arg1 dictionary:(id)arg2;
- (id)_newItemLinkWithType:(long long)arg1 URLKey:(id)arg2 titleKey:(id)arg3;
- (void)_reloadStoreOffers;
- (void)_reloadImagesAndLinksFromSquishes:(id)arg1;
- (void)_reloadItemImages;
- (void)_reloadItemLinks;
- (long long)integerValueForProperty:(id)arg1;

@end
