/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSData, NSString;

@interface SALocalSearchGeoServicesData : SADomainObject

@property (copy, nonatomic) NSArray *additionalEnabledTransitMarkets;
@property (copy, nonatomic) NSData *clientMetadata;
@property (copy, nonatomic) NSString *environment;

+ (id)geoServicesData;
+ (id)geoServicesDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
