/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSMutableDictionary, NSSet, NSString, RBSProcessHandle;

@protocol OS_xpc_object;

@interface RBSProcessState : NSObject

{
    struct os_unfair_lock_s _lock;
    NSObject<OS_xpc_object> *_codedState;
    unsigned long long _codedValues;
    NSMutableDictionary *_codedStateCache;
    unsigned char _taskState;
    unsigned char _debugState;
    unsigned char _preventLaunchState;
    unsigned char _terminationResistance;
    RBSProcessHandle *_process;
    NSSet *_endowmentNamespaces;
    NSSet *_tags;
    NSSet *_legacyAssertions;
    NSSet *_primitiveAssertions;
}

@property (nonatomic) unsigned char taskState;
@property (nonatomic) unsigned char debugState;
@property (nonatomic) unsigned char terminationResistance;
@property (nonatomic) unsigned char preventLaunchState;
@property (copy, nonatomic) NSSet *endowmentNamespaces;
@property (copy, nonatomic) NSSet *tags;
@property (copy, nonatomic) NSSet *legacyAssertions;
@property (copy, nonatomic) NSSet *primitiveAssertions;
@property (nonatomic, readonly, getter=isEmptyState) _Bool emptyState;
@property (nonatomic, readonly) RBSProcessHandle *process;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (nonatomic, readonly, getter=isDebugging) _Bool debugging;
@property (nonatomic, readonly, getter=isPreventedFromLaunching) _Bool preventedFromLaunching;
@property (copy, nonatomic, readonly) NSSet *assertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsBSXPCSecureCoding;
+ (id)stateWithProcess:(id)arg1;
+ (void)setActiveStateDescriptor:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithProcess:(id)arg1;
- (void)_lock_finalizeCodingForValues:(unsigned long long)arg1;
- (_Bool)isDifferentFromState:(id)arg1 significantly:(out _Bool *)arg2;
- (id)_lock_encodedStateForDescriptor:(id)arg1;
- (void)encodeWithPreviousState:(id)arg1;

@end
