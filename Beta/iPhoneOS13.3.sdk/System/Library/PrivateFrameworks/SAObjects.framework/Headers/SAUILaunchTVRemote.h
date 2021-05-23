/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUILaunchTVRemote : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *hashedRouteId;

+ (id)launchTVRemote;
+ (id)launchTVRemoteWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
