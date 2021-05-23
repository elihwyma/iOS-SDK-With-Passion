/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class RBAssertionAcquisitionContext, RBAssertionDescriptorValidator, RBConcreteTarget, RBProcess, RBProcessState, RBSAssertionDescriptor, RBSProcessIdentifier, RBSProcessIdentity;

@protocol RBBundleProperties, RBBundlePropertiesManaging, RBDomainAttributeManaging, RBEntitlementManaging, RBEntitlementPossessing;

@interface RBAssertionDescriptorValidatorContext : NSObject

{
    id <RBBundleProperties> _targetProperties;
    id <RBEntitlementPossessing> _originatorEntitlements;
    unsigned long long _ignoreEntitlementViolationsCount;
    unsigned long long _ignoreTargetPropertyViolationsCount;
    _Bool _targetIsSystem;
    RBAssertionDescriptorValidator *_assertionDescriptionValidator;
    RBSAssertionDescriptor *_assertionDescriptor;
    RBProcess *_originatorProcess;
    RBProcessState *_originatorState;
    RBConcreteTarget *_target;
    RBProcess *_targetProcess;
    RBSProcessIdentity *_targetIdentity;
    RBSProcessIdentifier *_targetIdentifier;
    RBProcessState *_targetState;
    RBAssertionAcquisitionContext *_acquisitionContext;
    id <RBEntitlementManaging> _entitlementManager;
    id <RBBundlePropertiesManaging> _bundlePropertiesManager;
    id <RBDomainAttributeManaging> _domainAttributeManager;
}

@property (retain, nonatomic) RBAssertionDescriptorValidator *assertionDescriptionValidator;
@property (retain, nonatomic) RBSAssertionDescriptor *assertionDescriptor;
@property (retain, nonatomic) RBProcess *originatorProcess;
@property (retain, nonatomic) RBProcessState *originatorState;
@property (retain, nonatomic) RBConcreteTarget *target;
@property (retain, nonatomic) RBProcess *targetProcess;
@property (retain, nonatomic) RBSProcessIdentity *targetIdentity;
@property (retain, nonatomic) RBSProcessIdentifier *targetIdentifier;
@property (retain, nonatomic) RBProcessState *targetState;
@property (retain, nonatomic) RBAssertionAcquisitionContext *acquisitionContext;
@property (retain, nonatomic) id <RBEntitlementManaging> entitlementManager;
@property (retain, nonatomic) id <RBBundlePropertiesManaging> bundlePropertiesManager;
@property (retain, nonatomic) id <RBDomainAttributeManaging> domainAttributeManager;
@property (nonatomic, readonly) RBSProcessIdentity *originatorIdentity;
@property (nonatomic, readonly) id <RBEntitlementPossessing> originatorEntitlements;
@property (nonatomic, readonly) id <RBBundleProperties> targetProperties;
@property (nonatomic, readonly) _Bool ignoreEntitlementViolations;
@property (nonatomic, readonly) _Bool ignoreTargetPropertyViolations;
@property (nonatomic, readonly) _Bool targetIsSystem;

+ (id)context;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)pushIgnoreEntitlementViolations;
- (void)popIgnoreEntitlementViolations;
- (void)pushIgnoreTargetPropertyViolations;
- (void)popIgnoreTargetPropertyViolations;

@end
