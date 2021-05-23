/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSUUID;

@interface CWFXPCParameters : NSObject

{
    unsigned int _QOS;
    NSUUID *_UUID;
    NSString *_interfaceName;
    unsigned long long _timeout;
    NSData *_authorizationExternalFormData;
}

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) unsigned long long timeout;
@property (nonatomic) unsigned int QOS;
@property (copy, nonatomic) NSData *authorizationExternalFormData;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToXPCParameters:(id)arg1;

@end
