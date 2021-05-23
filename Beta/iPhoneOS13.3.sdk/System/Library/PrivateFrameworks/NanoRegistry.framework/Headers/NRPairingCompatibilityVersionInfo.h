/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@interface NRPairingCompatibilityVersionInfo : NSObject

{
    _Bool _isOverrideActive;
    long long _pairingCompatibilityVersion;
    long long _maxPairingCompatibilityVersion;
    long long _minPairingCompatibilityVersion;
    long long _minPairingCompatibilityVersionWithChipID;
    long long _minQuickSwitchCompatibilityVersion;
}

@property (nonatomic) long long pairingCompatibilityVersion;
@property (nonatomic) long long maxPairingCompatibilityVersion;
@property (nonatomic) long long minPairingCompatibilityVersion;
@property (nonatomic) long long minPairingCompatibilityVersionWithChipID;
@property (nonatomic) long long minQuickSwitchCompatibilityVersion;
@property (nonatomic) _Bool isOverrideActive;

+ (id)systemVersions;
+ (unsigned long long)valueForToken:(int)arg1;
+ (id)numberFromCFPrefs:(id)arg1;
+ (id)stringFromCFPrefs:(id)arg1;

- (id)initInternal;
- (long long)minPairingCompatibilityVersionForChipID:(id)arg1;
- (long long)minQuickSwitchPairingCompatibilityVersionForChipID:(id)arg1;
- (long long)minPairingCompatibilityVersionForChipID:(id)arg1 name:(id)arg2 defaultVersion:(long long)arg3;

@end
