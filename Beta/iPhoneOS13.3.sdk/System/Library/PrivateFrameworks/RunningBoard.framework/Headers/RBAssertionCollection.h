/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface RBAssertionCollection : NSObject

{
    struct os_unfair_recursive_lock_s _lock;
    NSMutableDictionary *_assertionsByIdentifier;
    NSMutableSet *_processAssertions;
    NSMutableSet *_systemAssertions;
    NSMutableDictionary *_assertionsByOriginator;
    NSMutableDictionary *_assertionsByTargetProcessIdentity;
    NSMutableSet *_resolvedIdentifiers;
}

- (id)init;
- (unsigned long long)count;
- (void)addAssertion:(id)arg1;
- (id)assertionWithIdentifier:(id)arg1;
- (void)removeAssertion:(id)arg1;
- (_Bool)hasAssertionsForOriginator:(id)arg1 exceedingCount:(unsigned long long)arg2;
- (id)assertionsForTargetIdentity:(id)arg1;
- (id)assertionsForOriginator:(id)arg1;
- (void)enumerateAssertionsForTargetProcessIdentity:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)hasAssertion:(id)arg1;
- (_Bool)hasAssertionsForOriginator:(id)arg1;
- (unsigned long long)assertionCountForTargetProcessIdentity:(id)arg1;
- (void)enumerateAssertionsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAssertionsForSystemTargetWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAssertionsForProcessTargetsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAssertionsForOriginator:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)assertionsForTarget:(id)arg1;
- (unsigned long long)assertionCountForOriginator:(id)arg1;
- (void)noteResolvedAssertion:(id)arg1;
- (_Bool)hasResolvedAssertion:(id)arg1;

@end
