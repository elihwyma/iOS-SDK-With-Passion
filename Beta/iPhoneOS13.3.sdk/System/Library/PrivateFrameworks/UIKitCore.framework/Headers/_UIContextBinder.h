/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSPointerArray, NSString;

@protocol _UIContextBinderContextCreationPolicyHolding, _UIContextBinding;

@interface _UIContextBinder : NSObject

{
    NSPointerArray *_enrolledBindables;
    NSPointerArray *_attachedBindables;
    NSMutableOrderedSet *_contexts;
    _Bool __registeredPreCommitHandler;
    NSMutableArray *__preCommitHandlers;
    CDUnknownBlockType __realPreCommitHandler;
    CDUnknownBlockType __realPostCommitHandler;
    id <_UIContextBinding> _substrate;
    long long _contextManagementPolicy;
    id <_UIContextBinderContextCreationPolicyHolding> _contextCreationPolicyHolder;
}

@property (nonatomic, readonly) id <_UIContextBinding> substrate;
@property (nonatomic) long long contextManagementPolicy;
@property (weak, nonatomic) id <_UIContextBinderContextCreationPolicyHolding> contextCreationPolicyHolder;
@property (nonatomic, readonly) NSArray *enrolledBindables;
@property (nonatomic, readonly) NSArray *attachedBindables;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)createContextForBindable:(id)arg1 withSubstrate:(id)arg2;

- (id)_synchronizedDrawingFence;
- (void)_synchronizeDrawingWithFence:(id)arg1 preCommitHandler:(CDUnknownBlockType)arg2;
- (void)_synchronizeDrawingWithFence:(id)arg1;
- (void)expellBindable:(id)arg1;
- (void)detachBindable:(id)arg1;
- (void)purgeContextsWithPurgeAction:(CDUnknownBlockType)arg1;
- (void)createContextsWithTest:(CDUnknownBlockType)arg1 creationAction:(CDUnknownBlockType)arg2;
- (void)updateBindableOrderWithTest:(CDUnknownBlockType)arg1;
- (void)updateBindableOrderWithTest:(CDUnknownBlockType)arg1 force:(_Bool)arg2;
- (_Bool)bindableEnrolled:(id)arg1;
- (void)_synchronizeDrawingWithPreCommitHandler:(CDUnknownBlockType)arg1;
- (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1 withPreCommitHandler:(CDUnknownBlockType)arg2;
- (void)_synchronizeDrawing;
- (id)initWithSubstrate:(id)arg1;
- (void)enrollBindable:(id)arg1;
- (void)attachBindable:(id)arg1;
- (void)updateBindable:(id)arg1;
- (id)_attachedBindablePointersAsCopy:(_Bool)arg1;
- (id)_enrolledBindablePointersAsCopy:(_Bool)arg1;
- (_Bool)bindableIsTopmostAttached:(id)arg1;
- (void)recreateContextForBindable:(id)arg1;
- (_Bool)permitContextCreationForBindable:(id)arg1;
- (id)_contextForBindable:(id)arg1;
- (unsigned int)_synchronizeDrawingAcrossProcesses;
- (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1;

@end
