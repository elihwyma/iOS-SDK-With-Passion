/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _DKPrivacyPolicyEnforcer, _DKQueryDispatcher, _DKRateLimitPolicyEnforcer;

@protocol OS_dispatch_queue, _DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting;

@interface _DKKnowledgeStore : NSObject

{
    NSObject<_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting> *_knowledgeStoreHandle;
    _DKQueryDispatcher *_queryDispatcher;
    _DKRateLimitPolicyEnforcer *_rateLimitEnforcer;
    _DKPrivacyPolicyEnforcer *_privacyEnforcer;
    NSObject<OS_dispatch_queue> *_defaultQueue;
}

@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting> *knowledgeStoreHandle;
@property (retain, nonatomic) _DKQueryDispatcher *queryDispatcher;
@property (readonly) _DKRateLimitPolicyEnforcer *rateLimitEnforcer;
@property (readonly) _DKPrivacyPolicyEnforcer *privacyEnforcer;
@property (retain) NSObject<OS_dispatch_queue> *defaultQueue;

+ (id)knowledgeStore;
+ (id)knowledgeStoreWithDirectReadOnlyAccessWithXPCStore:(id)arg1 storeDirectory:(id)arg2;
+ (id)_knowledgeStoreWithStoreDirectory:(id)arg1 readOnly:(_Bool)arg2;
+ (id)userKnowledgeStore;
+ (id)knowledgeStoreWithDirectReadOnlyAccess;
+ (id)userKnowledgeStoreWithDirectReadOnlyAccess;
+ (id)userKnowledgeStoreWithDirectReadWriteAccess;
+ (id)knowledgeStoreWithDirectReadWriteAccess;

- (id)init;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)executeQuery:(id)arg1 error:(id *)arg2;
- (id)deviceUUID;
- (_Bool)saveObjects:(id)arg1 error:(id *)arg2;
- (id)initWithKnowledgeStoreHandle:(id)arg1 readOnly:(_Bool)arg2;
- (id)_sanitizeObjectsBeforeSaving:(id)arg1;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)deleteObjects:(id)arg1 error:(id *)arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id *)arg2;
- (void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)synchronizeWithError:(id *)arg1;
- (_Bool)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id *)arg3;
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)deleteRemoteState:(id *)arg1;
- (id)sourceDeviceIdentityFromObject:(id)arg1 error:(id *)arg2;
- (id)sourceDeviceIdentityWithError:(id *)arg1;
- (id)knowledgeSynchronizingHandleWithError:(id *)arg1;

@end
