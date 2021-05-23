/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSOperation.h>

@class AMSBinaryPromise, NSError, NSLock, NSMutableSet;

@interface AMSOperation : NSOperation

{
    NSLock *_lock;
    NSMutableSet *_subOperations;
    _Bool _cancelled;
    _Bool _success;
    AMSOperation *_parentOperation;
    AMSBinaryPromise *_promise;
    NSError *_error;
}

@property (weak, nonatomic) AMSOperation *parentOperation;
@property (nonatomic, readonly) AMSBinaryPromise *promise;
@property (nonatomic) _Bool success;
@property (retain, nonatomic) NSError *error;

- (id)init;
- (void)run;
- (void)lock;
- (void)unlock;
- (void)cancel;
- (_Bool)isCancelled;
- (void)main;
- (void)runSubOperation:(id)arg1 onQueue:(id)arg2;
- (void)runSubOperation:(id)arg1;

@end
