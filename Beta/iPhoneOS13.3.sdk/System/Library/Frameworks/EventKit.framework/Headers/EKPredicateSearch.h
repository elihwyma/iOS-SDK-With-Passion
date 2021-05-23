/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class EKEventStore, NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface EKPredicateSearch : NSObject

{
    CDUnknownBlockType _callback;
    Class _entityClass;
    NSPredicate *_predicate;
    EKEventStore *_store;
    id _cancellationToken;
    _Bool _finished;
    _Bool _isCancelled;
    int _retryCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)signpostHandle;
+ (id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;

- (void)cancel;
- (void)terminate;
- (void)disconnect;
- (id)startWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;
- (id)_createOSActivity;
- (void)signpostStart;
- (void)_startActualWithCompletion:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;
- (void)_fetchObjectIDsActualWithCompletion:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;
- (void)_startProcessingWithCompletion:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2 processor:(CDUnknownBlockType)arg3;
- (void)signpostEndWithError:(int)arg1 count:(unsigned long long)arg2;
- (void)_startActivityWithCompletion:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;
- (void)_startFetchObjectIDsActivityWithCompletion:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;
- (id)runSynchronously;
- (id)fetchObjectIDs;

@end
