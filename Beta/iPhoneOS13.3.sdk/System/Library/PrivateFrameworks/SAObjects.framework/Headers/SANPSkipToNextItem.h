/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SANPSkipToNextItem : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)skipToNextItem;
+ (id)skipToNextItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
