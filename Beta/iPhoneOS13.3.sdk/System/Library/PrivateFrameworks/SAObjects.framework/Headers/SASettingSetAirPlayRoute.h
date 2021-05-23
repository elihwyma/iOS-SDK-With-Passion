/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingCommand.h>

@class NSString;

@interface SASettingSetAirPlayRoute : SASettingCommand

@property (copy, nonatomic) NSString *hashedRouteId;
@property (copy, nonatomic) NSString *routeType;

+ (id)setAirPlayRoute;
+ (id)setAirPlayRouteWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
