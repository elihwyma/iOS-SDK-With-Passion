/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SRApplicationUsage : NSObject

{
    NSString *_bundleIdentifier;
    double _usageTime;
    double _totalUsageTime;
}

@property (copy) NSString *bundleIdentifier;
@property double totalUsageTime;
@property (readonly) double usageTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)applicationUsageWithBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sr_dictionaryRepresentation;

@end
