/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFMACAddress, NSArray, NSString;

@interface HMFWiFiNetworkInfo

{
    HMFMACAddress *_MACAddress;
    NSString *_SSID;
}

@property (copy, readonly) HMFMACAddress *MACAddress;
@property (copy, readonly) NSString *SSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *shortDescription;
@property (copy, readonly) NSString *privateDescription;
@property (copy, readonly) NSString *propertyDescription;
@property (copy, nonatomic, readonly) NSArray *attributeDescriptions;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToNetworkInfo:(id)arg1;
- (id)initWithMACAddress:(id)arg1 SSID:(id)arg2;

@end
