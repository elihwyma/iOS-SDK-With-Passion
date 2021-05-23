/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSLazyPromise, NSLock, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMSPurchaseBatch : NSObject

{
    _Bool _isComplete;
    NSMutableArray *_contexts;
    NSLock *_lock;
    NSMutableDictionary *_contextMap;
    NSMutableArray *_results;
    AMSLazyPromise *_promise;
}

@property (nonatomic, readonly) NSMutableArray *contexts;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic, readonly) NSMutableDictionary *contextMap;
@property (nonatomic) _Bool isComplete;
@property (nonatomic, readonly) NSMutableArray *results;
@property (nonatomic, readonly) AMSLazyPromise *promise;

- (id)contextForPurchaseId:(id)arg1;
- (id)initWithContexts:(id)arg1 weakPromise:(id)arg2;
- (_Bool)finishContext:(id)arg1 withError:(id)arg2;
- (id)nextPurchaseContext;
- (_Bool)finishContext:(id)arg1 withResult:(id)arg2;

@end
