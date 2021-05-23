/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSArray, NSString;

@interface GEOPOIEventCategory : NSObject <Swift>

{
    NSString *_category;
    NSArray *_localizedNames;
}

@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSArray *localizedNames;

+ (_Bool)supportsSecureCoding;
+ (id)poiEventCategoriesForEventCategories:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventCategory:(id)arg1;
- (id)parsePDCategories:(id)arg1;
- (_Bool)isEqualToPOIEventCategory:(id)arg1;
- (id)initWithCategory:(id)arg1 localizedNames:(id)arg2;

@end
