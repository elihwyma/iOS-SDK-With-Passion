/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class BSAtomicSignal, NSString;

@protocol OS_dispatch_queue;

@interface BSSimpleAssertion : NSObject

{
    NSString *_identifier;
    NSString *_reason;
    BSAtomicSignal *_invalidated;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _invalidationBlock;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 invalidationBlock:(CDUnknownBlockType)arg3;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(CDUnknownBlockType)arg4;

@end
