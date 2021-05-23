/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, NSURL, SKUIItemOffer, SKUIStoreIdentifier, UIImage;

@protocol SKUIArtworkProviding;

@interface SKUIItem : NSObject <Swift>

{
    struct _NSRange _ageBandRange;
    NSString *_artistName;
    NSString *_bundleID;
    NSString *_categoryName;
    NSString *_collectionName;
    unsigned long long _deviceFamilies;
    NSString *_editorialBage;
    NSString *_feedUrlString;
    long long _itemIdentifier;
    long long _itemKind;
    NSString *_itemKindString;
    SKUIItemOffer *_itemOffer;
    _Bool _newsstandApp;
    _Bool _hasInAppPurchases;
    long long _newsstandBindingEdge;
    long long _newsstandBindingType;
    long long _numberOfChildItems;
    long long _numberOfUserRatings;
    long long _parentalControlsRank;
    _Bool _prerenderedArtwork;
    NSString *_productPageURLString;
    NSArray *_requiredCapabilities;
    SKUIStoreIdentifier *_storeIdentifier;
    NSString *_title;
    float _userRating;
    long long _versionIdentifier;
    NSString *_versionString;
    NSArray *_videos;
    _Bool _hasMessagesExtension;
    _Bool _isHiddenFromSpringBoard;
    _Bool _gameControllerSupported;
    _Bool _requiresGameController;
    id <SKUIArtworkProviding> _artworksProvider;
    NSString *_editorialBadge;
    id <SKUIArtworkProviding> _newsstandArtworks;
}

@property (nonatomic, readonly) NSString *_downloadKind;
@property (nonatomic, readonly) struct _NSRange ageBandRange;
@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSURL *largestArtworkURL;
@property (nonatomic, readonly) id <SKUIArtworkProviding> artworksProvider;
@property (nonatomic, readonly) UIImage *artworkImage;
@property (nonatomic, readonly) NSArray *childItemIdentifiers;
@property (nonatomic, readonly) NSArray *loadedChildItems;
@property (nonatomic, readonly) long long numberOfChildItems;
@property (nonatomic, readonly) unsigned long long deviceFamilies;
@property (nonatomic, readonly, getter=hasPrerenderedArtwork) _Bool prerenderedArtwork;
@property (nonatomic, readonly) NSString *categoryName;
@property (nonatomic, readonly) NSString *collectionName;
@property (nonatomic, readonly) NSString *editorialBadge;
@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) long long itemKind;
@property (nonatomic, readonly) NSString *itemKindString;
@property (nonatomic, readonly) long long numberOfUserRatings;
@property (nonatomic, readonly) long long parentalControlsRank;
@property (nonatomic, readonly) SKUIItemOffer *primaryItemOffer;
@property (nonatomic, readonly) NSString *productPageURLString;
@property (nonatomic, readonly) NSArray *requiredCapabilities;
@property (copy, nonatomic) SKUIStoreIdentifier *storeIdentifier;
@property (nonatomic, readonly) float userRating;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long versionIdentifier;
@property (nonatomic, readonly) NSString *versionString;
@property (nonatomic, readonly) NSArray *videos;
@property (nonatomic, readonly) _Bool hasInAppPurchases;
@property (nonatomic, readonly) _Bool hasMessagesExtension;
@property (nonatomic, readonly) _Bool isHiddenFromSpringBoard;
@property (nonatomic, readonly) _Bool gameControllerSupported;
@property (nonatomic, readonly) _Bool requiresGameController;
@property (nonatomic, readonly, getter=isNewsstandApp) _Bool newsstandApp;
@property (nonatomic, readonly) long long newsstandBindingEdge;
@property (nonatomic, readonly) long long newsstandBindingType;
@property (nonatomic, readonly) id <SKUIArtworkProviding> newsstandArtworks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;

- (_Bool)isEqual:(id)arg1;
- (void)setItemIdentifier:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithLookupDictionary:(id)arg1;
- (id)lookupDictionary;
- (void)setItemKind:(long long)arg1;
- (id)valueForMetricsField:(id)arg1;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)artworkURLForSize:(long long)arg1;
- (id)initContainerItemWithItem:(id)arg1;
- (id)childItemForIdentifier:(id)arg1;
- (void)addItemOfferParameterWithName:(id)arg1 value:(id)arg2;
- (void)_setHasInAppPurchases:(_Bool)arg1;

@end
