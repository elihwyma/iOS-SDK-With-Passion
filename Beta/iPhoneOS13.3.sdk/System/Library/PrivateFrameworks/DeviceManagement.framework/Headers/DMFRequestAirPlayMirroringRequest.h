/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@class NSString;

@interface DMFRequestAirPlayMirroringRequest

{
    _Bool _force;
    NSString *_destinationName;
    NSString *_destinationDeviceID;
    NSString *_password;
    double _scanWaitInterval;
}

@property (copy, nonatomic) NSString *destinationName;
@property (copy, nonatomic) NSString *destinationDeviceID;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) _Bool force;
@property (nonatomic) double scanWaitInterval;

+ (_Bool)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (_Bool)isPermittedOnSystemConnection;
+ (_Bool)isPermittedOnUserConnection;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
