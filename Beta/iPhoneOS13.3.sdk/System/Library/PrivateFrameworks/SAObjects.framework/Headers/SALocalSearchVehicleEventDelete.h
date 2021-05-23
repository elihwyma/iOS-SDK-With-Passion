/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SALocalSearchVehicleEventDelete : SADomainCommand

@property (copy, nonatomic) NSArray *eventIds;

+ (id)vehicleEventDelete;
+ (id)vehicleEventDeleteWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
