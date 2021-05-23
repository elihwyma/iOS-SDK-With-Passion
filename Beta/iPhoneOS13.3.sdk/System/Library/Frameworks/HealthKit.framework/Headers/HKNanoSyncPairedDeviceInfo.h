/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSString;

@interface HKNanoSyncPairedDeviceInfo : NSObject <Swift>

{
    NSString *_sourceBundleIdentifier;
    NSString *_systemBuildVersion;
    NSString *_productType;
    unsigned long long _state;
    int _protocolVersion;
}

@property (copy, readonly) NSString *sourceBundleIdentifier;
@property (copy, readonly) NSString *systemBuildVersion;
@property (copy, readonly) NSString *productType;
@property (readonly, getter=isActive) _Bool active;
@property (readonly, getter=isRestoreComplete) _Bool restoreComplete;
@property (readonly) int protocolVersion;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceBundleIdentifier:(id)arg1 systemBuildVersion:(id)arg2 productType:(id)arg3 active:(_Bool)arg4 restoreComplete:(_Bool)arg5 protocolVersion:(int)arg6;

@end
