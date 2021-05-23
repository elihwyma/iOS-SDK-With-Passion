/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSString, NSURL;

@interface SAClockSearch : SADomainCommand

@property (copy, nonatomic) NSNumber *alCityId;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSURL *identifier;
@property (copy, nonatomic) NSString *unlocalizedCityName;
@property (copy, nonatomic) NSString *unlocalizedCountryName;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
