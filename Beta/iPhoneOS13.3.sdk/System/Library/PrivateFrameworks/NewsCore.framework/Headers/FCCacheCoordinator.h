/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCacheCoordinatorFlushPolicy, FCThreadSafeMutableDictionary, NFUnfairLock, NSArray, NSCountedSet, NSMutableSet, NSString;

@protocol FCCacheCoordinatorDelegate, FCCacheCoordinatorLocking, FCOperationThrottler;

@interface FCCacheCoordinator : NSObject <Swift>

{
    _Bool _flushingEnabled;
    id <FCCacheCoordinatorDelegate> _delegate;
    NSMutableSet *_storedKeys;
    NSCountedSet *_interestedKeys;
    FCThreadSafeMutableDictionary *_cacheHintsByKey;
    NFUnfairLock *_interestLock;
    id <FCCacheCoordinatorLocking> _underlyingLock;
    id <FCOperationThrottler> _flushThrottler;
    FCCacheCoordinatorFlushPolicy *_flushPolicy;
}

@property (retain, nonatomic) NSMutableSet *storedKeys;
@property (retain, nonatomic) NSCountedSet *interestedKeys;
@property (retain, nonatomic) FCThreadSafeMutableDictionary *cacheHintsByKey;
@property (retain, nonatomic) NFUnfairLock *interestLock;
@property (retain, nonatomic) id <FCCacheCoordinatorLocking> underlyingLock;
@property (retain, nonatomic) id <FCOperationThrottler> flushThrottler;
@property (retain) FCCacheCoordinatorFlushPolicy *flushPolicy;
@property (getter=isFlushingEnabled) _Bool flushingEnabled;
@property (weak, nonatomic) id <FCCacheCoordinatorDelegate> delegate;
@property (nonatomic, readonly) NSArray *keysWithZeroInterest;
@property (nonatomic, readonly) NSArray *keysWithNonZeroInterest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)performWriteSync:(CDUnknownBlockType)arg1;
- (void)performReadSync:(CDUnknownBlockType)arg1;
- (id)holdTokensForKeys:(id)arg1;
- (_Bool)cacheContainsKey:(id)arg1;
- (void)performCacheRead:(CDUnknownBlockType)arg1;
- (void)performCacheWrite:(CDUnknownBlockType)arg1;
- (void)enableFlushingWithPolicy:(id)arg1;
- (void)setupWithInitialKeys:(id)arg1 persistedHints:(id)arg2;
- (void)didInsertKeysIntoCache:(id)arg1 withLifetimeHints:(id)arg2;
- (id)persistableHints;
- (id)holdTokenForKeys:(id)arg1;
- (void)addInterestInKeys:(id)arg1;
- (void)removeInterestInKeys:(id)arg1;
- (void)_modifyCacheHintForKeys:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)filterKeysForPreemptiveFlush:(id)arg1 cacheHints:(id)arg2;
- (void)didAccessKeys:(id)arg1;
- (void)setupWithInitialKeys:(id)arg1;
- (id)holdTokenForKey:(id)arg1;
- (void)didInsertKeyIntoCache:(id)arg1 withLifetimeHint:(long long)arg2;
- (void)didRemoveKeysFromCache:(id)arg1;

@end
