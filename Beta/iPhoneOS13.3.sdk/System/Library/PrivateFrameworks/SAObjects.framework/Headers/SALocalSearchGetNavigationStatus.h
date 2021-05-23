/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSNumber;

@interface SALocalSearchGetNavigationStatus : SADomainCommand

@property (copy, nonatomic) NSNumber *getRoute;

+ (id)getNavigationStatus;
+ (id)getNavigationStatusWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
