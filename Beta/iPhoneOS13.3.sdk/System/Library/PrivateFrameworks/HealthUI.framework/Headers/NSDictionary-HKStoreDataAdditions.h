/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSDictionary.h>

@class NSArray, NSNumber, NSString;

@interface NSDictionary (HKStoreDataAdditions)

@property (nonatomic, readonly) NSString *hk_title;
@property (nonatomic, readonly) NSString *hk_bundleId;
@property (nonatomic, readonly) NSString *hk_priceFormatted;
@property (nonatomic, readonly) NSArray *hk_categories;
@property (nonatomic, readonly) NSNumber *hk_storeID;
@property (nonatomic, readonly) _Bool hk_isInstalled;

- (id)hk_bestImageURLForWidth:(double)arg1;
- (id)_hk_lookupItem;
- (id)_hk_defaultOffer;
- (id)_hk_circularArtwork;
- (id)_hk_bestImageURLForWidth:(double)arg1 fromArtworkArray:(id)arg2;
- (id)_hk_artwork;
- (id)hk_bestCircularImageURLForWidth:(double)arg1;

@end
