/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

#import <NSObject.h>

@class NSString;

@interface RMConfigurationAccount : NSObject

{
    long long _type;
    NSString *_identifier;
}

@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *identifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToAccount:(id)arg1;
- (id)initWithType:(long long)arg1 identifier:(id)arg2;

@end
