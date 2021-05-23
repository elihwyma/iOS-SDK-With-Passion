/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface CTServiceDescriptor : NSObject

{
    NSString *_identifier;
    long long _domain;
    NSNumber *_instance;
}

@property (nonatomic) long long domain;
@property (retain, nonatomic) NSNumber *instance;
@property (nonatomic, readonly) NSString *identifier;

+ (_Bool)supportsSecureCoding;
+ (id)telephonyDescriptorWithInstance:(id)arg1;
+ (id)descriptorWithSubscriptionContext:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(long long)arg1 instance:(id)arg2;

@end
