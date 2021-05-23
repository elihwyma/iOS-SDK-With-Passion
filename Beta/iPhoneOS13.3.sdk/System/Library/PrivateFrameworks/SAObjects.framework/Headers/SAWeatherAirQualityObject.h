/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SAWeatherLocation;

@interface SAWeatherAirQualityObject : SADomainObject

@property (nonatomic) long long airQualityIndex;
@property (retain, nonatomic) SAWeatherLocation *airQualityLocation;
@property (copy, nonatomic) NSString *airQualityRatingCategory;
@property (copy, nonatomic) NSString *localizedCategoryName;
@property (copy, nonatomic) NSArray *pollutants;

+ (id)airQualityObject;
+ (id)airQualityObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
