/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSString, SALocation;

@interface SALocalSearchVehicleEventCreate : SADomainCommand

@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSString *notes;

+ (id)vehicleEventCreate;
+ (id)vehicleEventCreateWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
