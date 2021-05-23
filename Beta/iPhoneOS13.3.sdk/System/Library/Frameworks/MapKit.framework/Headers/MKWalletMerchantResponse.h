/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOPDMerchantLookupResult, MKMapItem, MKWalletMerchantStylingInfo, NSString;

@protocol GEOMapItem;

@interface MKWalletMerchantResponse : NSObject

{
    id <GEOMapItem> _mapItem;
    GEOPDMerchantLookupResult *_merchantLookupResult;
}

@property (nonatomic, readonly) MKWalletMerchantStylingInfo *placeStyling;
@property (nonatomic, readonly) NSString *localizedPlaceName;
@property (nonatomic, readonly) NSString *localizedPlaceLanguage;
@property (nonatomic, readonly) MKWalletMerchantStylingInfo *walletCategoryStyling;
@property (nonatomic, readonly) NSString *localizedWalletCategoryName;
@property (nonatomic, readonly) NSString *localizedWalletCategoryLanguage;
@property (nonatomic, readonly) NSString *walletCategoryIdentifier;
@property (nonatomic, readonly) NSString *mapsCategoryIdentifier;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, readonly) NSString *heroImageProviderName;

- (id)initWithGEOMapItem:(id)arg1;
- (_Bool)_validHeroImageForPhoto:(id)arg1;
- (id)initWithMerchantLookupResult:(id)arg1;
- (id)bestHeroImageForSize:(struct CGSize)arg1 allowSmaller:(_Bool)arg2;

@end
