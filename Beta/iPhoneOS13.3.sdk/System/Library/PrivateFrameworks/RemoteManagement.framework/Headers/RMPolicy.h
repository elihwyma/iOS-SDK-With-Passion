/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <NSObject.h>

@class NSString, RMConfiguration;

@interface RMPolicy : NSObject

{
    RMConfiguration *_configuration;
}

@property (retain, nonatomic) RMConfiguration *configuration;
@property (nonatomic, readonly) NSString *policyKey;

+ (_Bool)supportsSecureCoding;
+ (id)policyKeyForConfiguration:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (_Bool)isEqualToPolicy:(id)arg1;

@end
