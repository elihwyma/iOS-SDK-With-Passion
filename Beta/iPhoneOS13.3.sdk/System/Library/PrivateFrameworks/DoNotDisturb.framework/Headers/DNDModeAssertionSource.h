/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class NSString;

@interface DNDModeAssertionSource : NSObject

{
    NSString *_clientIdentifier;
    NSString *_deviceIdentifier;
}

@property (copy, nonatomic, readonly) NSString *clientIdentifier;
@property (copy, nonatomic, readonly) NSString *deviceIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1 deviceIdentifier:(id)arg2;

@end
