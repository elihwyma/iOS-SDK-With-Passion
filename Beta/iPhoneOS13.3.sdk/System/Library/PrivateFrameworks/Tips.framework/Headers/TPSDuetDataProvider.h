/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, _CDClientContext;

@protocol OS_dispatch_queue, _DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying;

@interface TPSDuetDataProvider : NSObject

{
    id <_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> _store;
    _CDClientContext *_context;
    NSMutableDictionary *_contextualRegistrations;
    NSObject<OS_dispatch_queue> *_registrationQueue;
}

- (id)init;
- (id)_initWithStore:(id)arg1 context:(id)arg2;
- (void)_executeQueryWithPredicate:(id)arg1 streams:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)_executeHistogramQueryWithPredicate:(id)arg1 stream:(id)arg2 interval:(id)arg3 groupByKeyPaths:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_deregisterWakingDuetRegistration:(id)arg1;
- (void)deleteEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_initWithDirectory:(id)arg1;
- (void)observationDatesForPredicate:(id)arg1 streams:(id)arg2 limit:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)countsForPredicate:(id)arg1 stream:(id)arg2 interval:(id)arg3 groupByKeyPaths:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)registerWakingForPredicate:(id)arg1 registrationID:(id)arg2 clientIdentifier:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (_Bool)deregisterWakingForRegistrationID:(id)arg1;
- (void)saveEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteEventsWithPredicate:(id)arg1 streams:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_executeQueryWithPredicate:(id)arg1 streams:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 error:(id *)arg5;

@end
