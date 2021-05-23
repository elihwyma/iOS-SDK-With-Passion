/*
 Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSUUID;

@interface W5DiagnosticsTestRequest : NSObject

{
    NSUUID *_uuid;
    long long _testID;
    NSDictionary *_configuration;
}

@property (copy, nonatomic) NSUUID *uuid;
@property (nonatomic) long long testID;
@property (copy, nonatomic) NSDictionary *configuration;

+ (_Bool)supportsSecureCoding;
+ (id)requestWithTestID:(long long)arg1 configuration:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToDiagnosticsTestRequest:(id)arg1;

@end
