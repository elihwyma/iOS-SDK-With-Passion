/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@class NSData, NSString;

@interface DMFCertificate : NSObject

{
    _Bool _isIdentity;
    NSString *_commonName;
    NSData *_data;
}

@property (copy, nonatomic, readonly) NSString *commonName;
@property (copy, nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) _Bool isIdentity;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommonName:(id)arg1 data:(id)arg2 isIdentity:(_Bool)arg3;

@end
