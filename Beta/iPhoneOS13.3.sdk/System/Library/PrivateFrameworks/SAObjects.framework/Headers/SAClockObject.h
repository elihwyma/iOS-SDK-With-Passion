/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface SAClockObject : SADomainObject

@property (copy, nonatomic) NSNumber *alCityId;
@property (copy, nonatomic) NSString *cityName;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *countryName;
@property (copy, nonatomic) NSString *timezoneId;
@property (copy, nonatomic) NSString *unlocalizedCityName;
@property (copy, nonatomic) NSString *unlocalizedCountryName;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
