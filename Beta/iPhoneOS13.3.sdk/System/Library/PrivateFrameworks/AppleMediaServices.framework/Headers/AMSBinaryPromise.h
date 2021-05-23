/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSPromise;

@interface AMSBinaryPromise : NSObject

{
    AMSPromise *_backingPromise;
}

@property (retain, nonatomic) AMSPromise *backingPromise;

+ (id)promiseWithSuccess;
+ (id)promiseWithError:(id)arg1;
+ (id)promiseWithAll:(id)arg1;
+ (id)promiseWithAny:(id)arg1;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)_globalPromiseStorage;
+ (id)promiseWithFlattenedPromises:(id)arg1;
+ (id)promiseWithPromise:(id)arg1;

- (id)init;
- (void)waitUntilFinished;
- (_Bool)cancel;
- (_Bool)resultWithError:(id *)arg1;
- (_Bool)finishWithError:(id)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)completionHandlerAdapter;
- (_Bool)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (void)addFinishBlock:(CDUnknownBlockType)arg1;
- (_Bool)finishWithSuccess;
- (void)addErrorBlock:(CDUnknownBlockType)arg1;
- (_Bool)finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)thenWithBlock:(CDUnknownBlockType)arg1;
- (id)continueWithBlock:(CDUnknownBlockType)arg1;
- (void)waitUntilFinishedWithTimeout:(double)arg1;
- (id)catchWithBlock:(CDUnknownBlockType)arg1;
- (id)promiseAdapter;
- (void)_removeFromGlobalPromiseStorage;
- (_Bool)finishWithPromise:(id)arg1;

@end
