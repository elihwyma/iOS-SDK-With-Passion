/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNCache, CNContactStore;

__attribute__((visibility("hidden")))
@interface CNContactViewCache : NSObject

{
    CNCache *_cachedContainers;
    CNCache *_cachedPolicies;
    CNCache *_cachedAccounts;
    CNContactStore *_contactStore;
}

@property (retain, nonatomic) CNCache *cachedContainers;
@property (retain, nonatomic) CNCache *cachedPolicies;
@property (retain, nonatomic) CNCache *cachedAccounts;
@property (retain, nonatomic) CNContactStore *contactStore;

+ (_Bool)shouldIgnorePolicyOfContactInGuarianRestrictedContainer:(id)arg1;
+ (_Bool)isCandidatePolicy:(id)arg1 ofContactInCandidateContainerWithType:(long long)arg2 preferredOverPolicy:(id)arg3 ofContactInContainerWithType:(long long)arg4;

- (id)nts_lazyContactStore;
- (id)policyForContact:(id)arg1;
- (id)policyForDefaultContainer;
- (id)accountForContact:(id)arg1;
- (void)resetCache;
- (id)containerForContact:(id)arg1;
- (id)_policyForContact:(id)arg1;
- (id)defaultContainerPolicy;
- (id)bestPolicyForContact:(id)arg1;
- (id)_accountForContact:(id)arg1;

@end
