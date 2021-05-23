/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol OS_dispatch_queue;

@interface NPKAssertionManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_acquiredAssertions;
}

@property (retain) NSHashTable *acquiredAssertions;

+ (id)sharedManager;

- (id)init;
- (void)addAssertion:(id)arg1;
- (void)removeAssertion:(id)arg1;
- (id)_errorWithUnderlyingError:(id)arg1;
- (id)acquiredAssertionWithType:(unsigned long long)arg1;
- (void)_queue_acquireAssertionWithType:(unsigned long long)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_invalidateAssertionWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)containsAssertionWithType:(unsigned long long)arg1;
- (void)acquireAssertionWithType:(unsigned long long)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidateAssertionWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
