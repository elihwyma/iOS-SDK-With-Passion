/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@interface IDSRegisteredDevice : NSObject <Swift>

{
    NSString *_name;
    NSString *_hardwareVersion;
    NSData *_pushToken;
    NSArray *_URIs;
    NSData *_publicDeviceIdentity;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *hardwareVersion;
@property (nonatomic, readonly) NSData *pushToken;
@property (nonatomic, readonly) NSArray *URIs;
@property (nonatomic, readonly) NSData *publicDeviceIdentity;

+ (_Bool)supportsSecureCoding;
+ (id)registeredDeviceFromDependentRegistrationDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 hardwareVersion:(id)arg2 pushToken:(id)arg3 URIs:(id)arg4 publicDeviceIdentity:(id)arg5;
- (_Bool)isEqualToRegisteredDevice:(id)arg1;

@end
