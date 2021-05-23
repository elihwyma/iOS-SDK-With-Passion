/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SANPMoveOutputGroupToDevices : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)moveOutputGroupToDevices;
+ (id)moveOutputGroupToDevicesWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
