/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SANPSkipTimeInterval : SADomainCommand

@property (copy, nonatomic) NSNumber *adjustmentInMilliseconds;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)skipTimeInterval;
+ (id)skipTimeIntervalWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
