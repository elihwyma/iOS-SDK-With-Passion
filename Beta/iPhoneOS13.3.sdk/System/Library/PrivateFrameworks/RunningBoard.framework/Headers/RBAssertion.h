/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

#import <RunningBoard/Swift-Protocol.h>

@class NSArray, NSSet, NSString, RBAssertionIntransientState, RBAssertionTransientState, RBConcreteTarget, RBInheritanceCollection, RBProcessState, RBSAssertionIdentifier, RBSProcessAssertionInfo, RBSProcessIdentifier, RBSystemState;

@interface RBAssertion : NSObject <Swift>

{
    struct os_unfair_lock_s _lock;
    RBConcreteTarget *_target;
    RBSAssertionIdentifier *_identifier;
    NSString *_explanation;
    NSArray *_attributes;
    RBSystemState *_systemState;
    RBProcessState *_processState;
    RBAssertionTransientState *_transientState;
    RBAssertionIntransientState *_intransientState;
    double _creationTime;
    unsigned long long _invalidationReason;
    unsigned long long _acquisitionCompletionPolicy;
    NSSet *_originatorInheritances;
    RBSProcessAssertionInfo *_assertionInfo;
    _Bool _suspended;
    _Bool _persistent;
    _Bool _active;
    _Bool _resolvedState;
    RBSProcessIdentifier *_originator;
    NSString *_description;
    id _plugInHoldToken;
}

@property (copy, nonatomic, readonly) RBConcreteTarget *target;
@property (nonatomic, readonly) RBSProcessIdentifier *originator;
@property (copy, nonatomic, readonly) RBSAssertionIdentifier *identifier;
@property (copy, nonatomic, readonly) NSString *explanation;
@property (copy, nonatomic, readonly) NSArray *attributes;
@property (copy, nonatomic, readonly) RBInheritanceCollection *inheritances;
@property (copy, nonatomic, readonly) RBAssertionIntransientState *intransientState;
@property (copy, nonatomic, readonly) RBProcessState *processState;
@property (nonatomic, readonly) unsigned long long startPolicy;
@property (nonatomic, readonly) unsigned long long endPolicy;
@property (nonatomic, readonly, getter=isPersistent) _Bool persistent;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly, getter=isSuspended) _Bool suspended;
@property (nonatomic, readonly, getter=isValid) _Bool invalid;
@property (nonatomic, readonly) _Bool suspendsOnOriginatorSuspension;
@property (nonatomic, readonly) _Bool invalidatesSynchronously;
@property (nonatomic, readonly) double invalidationDuration;
@property (nonatomic, readonly) double warningDuration;
@property (nonatomic, readonly) double creationTime;
@property (nonatomic, readonly) unsigned long long legacyReason;
@property (nonatomic, readonly) _Bool definesRelativeStartTime;
@property (nonatomic, readonly) _Bool terminateTargetOnOriginatorExit;
@property (nonatomic, readonly) _Bool hasHereditaryGrant;
@property (nonatomic, readonly) _Bool hasDomainAttribute;
@property (nonatomic, readonly) NSSet *sourceEnvironments;
@property (nonatomic) unsigned long long invalidationReason;
@property (retain, nonatomic) id plugInHoldToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *stateCaptureTitle;

+ (id)assertionWithDescriptor:(id)arg1 target:(id)arg2 originator:(id)arg3 context:(id)arg4;
+ (id)assertionWithIdentifier:(id)arg1 target:(id)arg2 explanation:(id)arg3 attributes:(id)arg4 originator:(id)arg5 context:(id)arg6;

- (void)resume;
- (void)suspend;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)activate;
- (void)deactivate;
- (id)captureState;
- (unsigned long long)maxCPUUsageViolationPolicyForRole:(unsigned char)arg1;
- (id)updateProcessStateWithAttributeContext:(id)arg1;
- (id)_initWithTarget:(id)arg1 identifier:(id)arg2 explanation:(id)arg3 attributes:(id)arg4 originator:(id)arg5 context:(id)arg6;
- (_Bool)_lock_resolveStateWithContext:(id)arg1;
- (_Bool)resolveStateWithContext:(id)arg1;
- (void)applyToProcessState:(id)arg1 withAttributeContext:(id)arg2;
- (void)applyToAssertionTransientState:(id)arg1 withAttributeContext:(id)arg2;
- (void)applyToSystemState:(id)arg1 withAttributeContext:(id)arg2;

@end
