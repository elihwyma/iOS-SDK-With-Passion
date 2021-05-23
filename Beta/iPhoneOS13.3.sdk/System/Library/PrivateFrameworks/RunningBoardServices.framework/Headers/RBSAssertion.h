/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSArray, NSHashTable, NSString, RBSAssertionDescriptor, RBSAssertionIdentifier, RBSTarget;

@protocol RBSServiceLocalProtocol;

@interface RBSAssertion : NSObject

{
    NSHashTable *_observers;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _warningHandler;
    struct os_unfair_lock_s _lock;
    RBSAssertionDescriptor *_descriptor;
    unsigned long long _state;
    id <RBSServiceLocalProtocol> _service;
}

@property (copy, nonatomic, readonly) RBSAssertionIdentifier *identifier;
@property (copy, nonatomic, readonly) RBSAssertionDescriptor *descriptor;
@property (nonatomic, readonly) unsigned long long state;
@property (copy, nonatomic, readonly) NSString *explanation;
@property (nonatomic, readonly) RBSTarget *target;
@property (copy, nonatomic, readonly) NSArray *attributes;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (oneway void)invalidate;
- (id)_observers;
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_initWithDescriptor:(id)arg1 service:(id)arg2;
- (_Bool)acquireWithError:(out id *)arg1;
- (_Bool)_clientInvalidateWithError:(out id *)arg1;
- (id)initWithExplanation:(id)arg1 target:(id)arg2 attributes:(id)arg3;
- (oneway void)acquireWithInvalidationHandler:(CDUnknownBlockType)arg1;
- (_Bool)invalidateWithError:(out id *)arg1;
- (void)setExpirationWarningHandler:(CDUnknownBlockType)arg1;
- (id)_initWithServerValidatedDescriptor:(id)arg1;
- (void)_serverInvalidateWithError:(id)arg1;
- (void)_serverWillInvalidate;
- (void)_serverDidChangeIdentifier:(id)arg1;

@end
