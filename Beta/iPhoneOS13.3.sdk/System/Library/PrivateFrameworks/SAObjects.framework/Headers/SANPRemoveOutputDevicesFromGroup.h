/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SANPRemoveOutputDevicesFromGroup : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)removeOutputDevicesFromGroup;
+ (id)removeOutputDevicesFromGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
