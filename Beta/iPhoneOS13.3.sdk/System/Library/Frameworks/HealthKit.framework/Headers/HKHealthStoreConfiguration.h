/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKProfileIdentifier, NSString;

@interface HKHealthStoreConfiguration : NSObject <Swift>

{
    unsigned int _applicationSDKVersion;
    NSString *_sourceBundleIdentifier;
    NSString *_debugIdentifier;
    HKProfileIdentifier *_profileIdentifier;
}

@property (copy, nonatomic, readonly) NSString *sourceBundleIdentifier;
@property (copy, nonatomic, readonly) NSString *debugIdentifier;
@property (copy, nonatomic, readonly) HKProfileIdentifier *profileIdentifier;
@property (nonatomic, readonly) unsigned int applicationSDKVersion;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceBundleIdentifier:(id)arg1 debugIdentifier:(id)arg2 profileIdentifier:(id)arg3 applicationSDKVersion:(unsigned int)arg4;

@end
