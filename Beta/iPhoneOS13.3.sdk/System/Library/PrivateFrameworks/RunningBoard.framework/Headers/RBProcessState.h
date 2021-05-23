/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString, RBInheritanceCollection, RBSProcessIdentity;

@interface RBProcessState : NSObject

{
    RBSProcessIdentity *_identity;
    RBInheritanceCollection *_inheritances;
    NSMutableDictionary *_maxCPULimitsByRole;
    NSMutableDictionary *_minCPULimitsByRole;
    NSMutableDictionary *_jetsamLenientModeByRole;
    NSMutableSet *_preventIdleSleepIdentifiers;
    NSMutableSet *_tags;
    NSMutableSet *_legacyAssertions;
    NSMutableSet *_primitiveAssertions;
    unsigned long long _legacyFinishTaskReason;
    unsigned char _terminationResistance;
    unsigned char _jetsamBand;
    unsigned char _role;
    unsigned char _flags;
    NSSet *_preventLaunchReasons;
}

@property (retain, nonatomic) NSMutableDictionary *maxCPULimitsByRole;
@property (retain, nonatomic) NSMutableDictionary *minCPULimitsByRole;
@property (copy, nonatomic) NSSet *tags;
@property (copy, nonatomic) NSSet *legacyAssertions;
@property (copy, nonatomic) NSSet *primitiveAssertions;
@property (copy, nonatomic, readonly) RBSProcessIdentity *identity;
@property (nonatomic, readonly) unsigned char role;
@property (nonatomic, readonly) _Bool GPUAllowed;
@property (nonatomic, readonly) unsigned char terminationResistance;
@property (nonatomic, readonly) unsigned char jetsamBand;
@property (nonatomic, readonly) _Bool isBeingDebugged;
@property (nonatomic, readonly) _Bool preventIdleSleep;
@property (nonatomic, readonly) _Bool preventLaunch;
@property (nonatomic, readonly) _Bool jetsamLenientMode;
@property (nonatomic, readonly) _Bool throttleBestEffortNetworking;
@property (nonatomic, readonly) _Bool effectiveJetsamLenientMode;
@property (nonatomic, readonly) unsigned long long effectiveMaxCPUPercentage;
@property (nonatomic, readonly) unsigned long long effectiveMaxCPUDuration;
@property (nonatomic, readonly) unsigned long long effectiveMaxCPUUsageViolationPolicy;
@property (nonatomic, readonly) unsigned long long effectiveMinCPUPercentage;
@property (nonatomic, readonly) unsigned long long effectiveMinCPUDuration;
@property (nonatomic, readonly) unsigned long long legacyFinishTaskReason;
@property (nonatomic, readonly) NSSet *preventIdleSleepIdentifiers;
@property (nonatomic, readonly) RBInheritanceCollection *inheritances;
@property (nonatomic, readonly) NSSet *preventLaunchReasons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentity:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)inheritancesForEnvironment:(id)arg1;
- (_Bool)_isEqualToProcessStateIgnoringIdentityAndInheritances:(id)arg1;
- (id)_initWithProcessState:(id)arg1;
- (id)maxCPUUsageLimitsForRole:(unsigned char)arg1;
- (id)minCPUUsageLimitsForRole:(unsigned char)arg1;
- (_Bool)isEqualToProcessStateIgnoringIdentity:(id)arg1;
- (_Bool)isEqualToProcessStateIgnoringInheritances:(id)arg1;

@end
