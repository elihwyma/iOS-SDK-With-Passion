/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class RBAssertion, RBConcreteTarget, RBInheritanceCollection, RBProcess, RBProcessState, RBSAssertionIdentifier, RBSProcessIdentity;

@protocol RBBundlePropertiesManaging, RBDomainAttributeManaging, RBEntitlementManaging;

@interface RBAttributeContext : NSObject

{
    unsigned long long _activeDueToInheritedEndowmentCount;
    _Bool _targetIsSystem;
    RBAssertion *_assertion;
    RBSAssertionIdentifier *_assertionID;
    RBConcreteTarget *_target;
    RBProcess *_targetProcess;
    RBSProcessIdentity *_targetIdentity;
    RBProcessState *_initialProcessState;
    RBInheritanceCollection *_availableInheritances;
    id <RBDomainAttributeManaging> _domainAttributeManager;
    id <RBBundlePropertiesManaging> _bundlePropertiesManager;
    id <RBEntitlementManaging> _entitlementManager;
}

@property (retain, nonatomic) RBAssertion *assertion;
@property (nonatomic, readonly) RBSAssertionIdentifier *assertionID;
@property (nonatomic, readonly) RBConcreteTarget *target;
@property (nonatomic, readonly) _Bool targetIsSystem;
@property (nonatomic, readonly) RBProcess *targetProcess;
@property (nonatomic, readonly) RBSProcessIdentity *targetIdentity;
@property (retain, nonatomic) RBProcessState *initialProcessState;
@property (retain, nonatomic) RBInheritanceCollection *availableInheritances;
@property (retain, nonatomic) id <RBDomainAttributeManaging> domainAttributeManager;
@property (retain, nonatomic) id <RBBundlePropertiesManaging> bundlePropertiesManager;
@property (retain, nonatomic) id <RBEntitlementManaging> entitlementManager;
@property (nonatomic, readonly) _Bool isActiveDueToInheritedEndowment;

- (void)pushActiveDueToInheritedEndowment;
- (void)popActiveDueToInheritedEndowment;

@end
