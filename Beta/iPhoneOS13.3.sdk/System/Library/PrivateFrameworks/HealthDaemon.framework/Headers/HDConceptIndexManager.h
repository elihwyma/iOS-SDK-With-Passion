/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDConceptIndexer, HDProfile, HKObserverSet, NSMutableArray, NSString;

@protocol HDBlockDispatcher;

@interface HDConceptIndexManager : NSObject

{
    id <HDBlockDispatcher> _dispatcher;
    unsigned long long _batchSize;
    HDProfile *_profile;
    _Bool _isEnabled;
    HKObserverSet *_observerSet;
    NSMutableArray *_completionBlocks;
    struct os_unfair_lock_s _executionStateLock;
    unsigned long long _executionState;
    HDConceptIndexer *_conceptIndexer;
}

@property (nonatomic, readonly) HDConceptIndexer *conceptIndexer;
@property (readonly) unsigned long long currentExecutionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_updateConceptIndexWithBlockDispatcher:(id)arg1 conceptIndexer:(id)arg2 batchSize:(long long)arg3 initialCount:(long long)arg4 completion:(CDUnknownBlockType)arg5;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)updateWithDescription:(id)arg1;
- (void)invalidateAndWait;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)updateConceptIndexWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopWithDescription:(id)arg1;
- (void)setEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithBlockDispatcher:(id)arg1 batchSize:(unsigned long long)arg2 profile:(id)arg3;
- (void)resetWithReindex:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startWithDescription:(id)arg1;

@end
