/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSString, NSURL;

@interface SAWeatherLocationSearch : SADomainCommand

@property (copy, nonatomic) NSURL *identifier;
@property (copy, nonatomic) NSString *locationId;

+ (id)locationSearch;
+ (id)locationSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
