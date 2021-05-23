/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, _CDInteractionPolicy;

@interface _CDInteractionPolicies : NSObject

{
    unsigned long long _maxNumberOfInteractions;
    unsigned long long _maxNumberOfInteractionsDeletedInBatch;
    double _maxLifespanInSeconds;
    NSDictionary *_specialPoliciesForBundleIds;
    NSDictionary *_specialPoliciesForMechanisms;
    _CDInteractionPolicy *_defaultPolicy;
}

@property (readonly) unsigned long long maxNumberOfInteractionsStored;
@property (readonly) unsigned long long maxNumberOfInteractionsDeleted;
@property (readonly) NSDate *dateOfOldestAllowedInteraction;

+ (id)interactionPolicies;
+ (id)modifyDate:(id)arg1 usingPolicy:(id)arg2;
+ (id)limitArray:(id)arg1 toMaxCount:(unsigned long long)arg2;

- (id)init;
- (id)description;
- (id)dateOfOldestAllowedInteractionForMechanism:(long long)arg1;
- (void)setupDefaultHardcodedPolicies;
- (id)policyForMechanism:(long long)arg1;
- (id)whitelistedFirstPartyBundleIds;
- (id)dateOfOldestAllowedInteractionForWhitelistedFirstPartyBundleIds;
- (id)filterAndModifyInteractionsWithPolicies:(id)arg1 enforceDataLimits:(_Bool)arg2 enforcePrivacy:(_Bool)arg3;
- (void)readConfigurationPlist;

@end
