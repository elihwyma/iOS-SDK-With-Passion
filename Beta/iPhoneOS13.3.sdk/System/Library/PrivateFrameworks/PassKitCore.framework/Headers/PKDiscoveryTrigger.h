/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@interface PKDiscoveryTrigger : NSObject <Swift>

{
    long long _type;
    long long _maxActivationCount;
}

@property (nonatomic) long long type;
@property (nonatomic) long long maxActivationCount;

+ (_Bool)supportsSecureCoding;
+ (id)discoveryTriggerWithDictionary:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
