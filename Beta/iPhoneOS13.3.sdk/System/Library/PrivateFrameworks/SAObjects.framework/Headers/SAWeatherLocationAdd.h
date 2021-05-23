/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class SAWeatherLocation;

@interface SAWeatherLocationAdd : SADomainCommand

@property (retain, nonatomic) SAWeatherLocation *weatherLocation;

+ (id)locationAdd;
+ (id)locationAddWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
