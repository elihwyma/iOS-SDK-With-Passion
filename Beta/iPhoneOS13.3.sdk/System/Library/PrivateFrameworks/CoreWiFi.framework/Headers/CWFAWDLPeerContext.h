/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CWFAWDLPeerContext : NSObject

{
    NSString *_MACAddress;
    NSString *_interfaceName;
}

@property (copy, nonatomic) NSString *MACAddress;
@property (copy, nonatomic) NSString *interfaceName;

+ (_Bool)supportsSecureCoding;
+ (id)AWDLPeerContextWithMACAddress:(id)arg1 interfaceName:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToAWDLPeerContext:(id)arg1;

@end
