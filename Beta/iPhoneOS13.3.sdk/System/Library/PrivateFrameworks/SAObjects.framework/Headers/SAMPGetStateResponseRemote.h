/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SAMPGetState;

@interface SAMPGetStateResponseRemote : SABaseClientBoundCommand

@property (retain, nonatomic) SAMPGetState *getState;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) double routeTimeout;

+ (id)getStateResponseRemote;
+ (id)getStateResponseRemoteWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
