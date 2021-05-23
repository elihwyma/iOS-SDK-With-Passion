/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSDictionary.h>

@class NSArray, NSNumber, NSString;

@interface NSDictionary (MKAppStoreDictionary)

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *creator;
@property (nonatomic, readonly) float averageRating;
@property (nonatomic, readonly) unsigned long long ratingCount;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) NSString *priceFormatted;
@property (nonatomic, readonly) NSArray *transitModeKeys;
@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) NSNumber *storeID;
@property (nonatomic, readonly) _Bool isOfficialApp;
@property (nonatomic, readonly) _Bool isInstalled;

- (id)_ratingData;
- (id)_defaultOffer;
- (id)bestImageURLForWidth:(double)arg1;
- (_Bool)_mapkit_writeBinaryPlist:(id)arg1 atomically:(_Bool)arg2;

@end
