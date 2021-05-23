/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@class DMFApplicationPolicyMonitor, NSArray, NSDictionary, NSUUID;

@interface DMFCommunicationPolicyMonitor : NSObject

{
    _Bool _didFetchInitialPolicies;
    NSDictionary *_policiesByBundleIdentifier;
    DMFApplicationPolicyMonitor *_applicationPolicyMonitor;
    NSArray *_policyTypes;
    NSUUID *_identifier;
}

@property (copy, nonatomic) NSDictionary *policiesByBundleIdentifier;
@property (nonatomic, readonly) DMFApplicationPolicyMonitor *applicationPolicyMonitor;
@property (nonatomic) _Bool didFetchInitialPolicies;
@property (copy, nonatomic, readonly) NSArray *policyTypes;
@property (nonatomic, readonly) NSUUID *identifier;

+ (id)_transformEffectivePoliciesIntoCommunicationPolicies:(id)arg1;
+ (id)communicationBundleIdentifiers;
+ (id)_equivalentCommunicationBundleIdentifiersForCommunicationBundleIdentifier:(id)arg1;
+ (id)_categoryForCommunicationBundleIdentifier:(id)arg1;
+ (id)_calculateCommunicationPoliciesWithApplicationPoliciesByBundleIdentifier:(id)arg1 categoryEffectivePolicy:(id)arg2;
+ (unsigned long long)communicationPolicyForApplicationPolicy:(id)arg1 downtimeEnforced:(_Bool)arg2 communicationLimitsEnabled:(_Bool)arg3;

- (id)init;
- (void)dealloc;
- (id)initWithPolicyChangeHandler:(CDUnknownBlockType)arg1;
- (void)_updatePoliciesByBundleIdentifier;
- (void)_updateWithPoliciesByBundleIdentifier:(id)arg1 categoryEffectivePolicy:(id)arg2;
- (id)requestPoliciesByBundleIdentifierWithError:(id *)arg1;
- (void)requestPoliciesByBundleIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
