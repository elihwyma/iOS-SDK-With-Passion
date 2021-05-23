/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIItem.h>

@class NSArray, NSMutableDictionary, NSString, NSURL, SKUIDeveloperInfo, SKUIItemContentRating, SKUIStoreNotes;

@interface SKUIProductPageItem : SKUIItem

{
    NSURL *_artistPageURL;
    NSArray *_childItemIdentifiers;
    SKUIItemContentRating *_contentRating;
    NSString *_copyrightString;
    SKUIDeveloperInfo *_developerInfo;
    NSArray *_inAppPurchases;
    NSString *_installationRequirementsDescription;
    NSString *_itemDescription;
    NSString *_lastUpdateDateString;
    NSString *_licenseAgreementURLString;
    NSMutableDictionary *_loadedChildItems;
    NSArray *_parentBundleItemIdentifiers;
    NSString *_privacyPolicyURLString;
    NSString *_regularPriceString;
    NSArray *_releaseNotes;
    NSString *_reviewsURLString;
    NSArray *_screenshots;
    NSArray *_secondaryContentRatings;
    NSString *_sellerName;
    NSString *_shortenedProductPageURLString;
    SKUIStoreNotes *_storeNotes;
    long long _supportedFeatures;
    unsigned long long _supportedGameCenterFeatures;
    NSString *_supportURLString;
    NSString *_updateDescription;
}

@property (nonatomic, readonly) NSURL *artistPageURL;
@property (nonatomic, readonly) SKUIItemContentRating *contentRating;
@property (nonatomic, readonly) NSString *copyrightString;
@property (nonatomic, readonly) SKUIDeveloperInfo *developerInfo;
@property (nonatomic, readonly) NSArray *inAppPurchases;
@property (nonatomic, readonly) NSString *installationRequirementsDescription;
@property (nonatomic, readonly) NSString *itemDescription;
@property (nonatomic, readonly) NSString *lastUpdateDateString;
@property (nonatomic, readonly) NSString *licenseAgreementURLString;
@property (nonatomic, readonly) NSArray *parentBundleItemIdentifiers;
@property (nonatomic, readonly) NSString *privacyPolicyURLString;
@property (nonatomic, readonly) NSString *regularPriceString;
@property (nonatomic, readonly) NSArray *releaseNotes;
@property (nonatomic, readonly) NSString *reviewsURLString;
@property (nonatomic, readonly) NSArray *screenshots;
@property (nonatomic, readonly) NSArray *secondaryContentRatings;
@property (nonatomic, readonly) NSString *sellerName;
@property (nonatomic, readonly) NSString *shortenedProductPageURLString;
@property (nonatomic, readonly) SKUIStoreNotes *storeNotes;
@property (nonatomic, readonly) long long supportedFeatures;
@property (nonatomic, readonly) unsigned long long supportedGameCenterFeatures;
@property (nonatomic, readonly) NSString *supportURLString;
@property (nonatomic, readonly) NSString *updateDescription;

- (id)initWithLookupDictionary:(id)arg1;
- (id)childItemIdentifiers;
- (id)loadedChildItems;
- (long long)numberOfChildItems;
- (id)childItemForIdentifier:(id)arg1;
- (void)_setVersionHistory:(id)arg1;
- (void)_setInAppPurchases:(id)arg1;

@end
