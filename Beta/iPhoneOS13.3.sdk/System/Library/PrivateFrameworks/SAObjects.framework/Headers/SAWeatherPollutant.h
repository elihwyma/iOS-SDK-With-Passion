/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface SAWeatherPollutant : SADomainObject

@property (copy, nonatomic) NSNumber *amount;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *name;

+ (id)pollutant;
+ (id)pollutantWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
