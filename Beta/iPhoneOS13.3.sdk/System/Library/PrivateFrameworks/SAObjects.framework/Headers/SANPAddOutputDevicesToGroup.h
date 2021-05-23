/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SANPAddOutputDevicesToGroup : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)addOutputDevicesToGroup;
+ (id)addOutputDevicesToGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
