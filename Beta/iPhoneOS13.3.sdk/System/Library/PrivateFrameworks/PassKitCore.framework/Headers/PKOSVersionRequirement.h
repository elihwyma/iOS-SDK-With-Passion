/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKOSVersionRequirement : NSObject <Swift>

{
    NSString *_iphone;
    NSString *_ipad;
    NSString *_ipod;
    NSString *_appletv;
    NSString *_mac;
    NSString *_watch;
}

@property (nonatomic, readonly) NSString *iphone;
@property (nonatomic, readonly) NSString *ipad;
@property (nonatomic, readonly) NSString *ipod;
@property (nonatomic, readonly) NSString *appletv;
@property (nonatomic, readonly) NSString *mac;
@property (nonatomic, readonly) NSString *watch;

+ (_Bool)supportsSecureCoding;
+ (id)fromDeviceVersion;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (long long)compare:(id)arg1 deviceClass:(id)arg2;
- (id)versionForDeviceClass:(id)arg1;

@end
