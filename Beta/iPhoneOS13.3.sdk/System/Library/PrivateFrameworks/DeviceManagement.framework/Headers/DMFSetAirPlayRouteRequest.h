/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSString;

@interface DMFSetAirPlayRouteRequest

{
    _Bool _suppressPasscodePrompt;
    NSString *_routeUID;
    NSString *_password;
}

@property (copy, nonatomic) NSString *routeUID;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) _Bool suppressPasscodePrompt;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
