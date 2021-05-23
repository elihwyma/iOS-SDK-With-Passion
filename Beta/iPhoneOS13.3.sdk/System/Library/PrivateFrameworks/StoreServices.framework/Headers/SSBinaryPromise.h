/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSPromise;

@interface SSBinaryPromise : NSObject

{
    SSPromise *_backingPromise;
}

@property (retain, nonatomic) SSPromise *backingPromise;

+ (id)promiseWithSuccess;
+ (id)promiseWithError:(id)arg1;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)_globalPromiseStorage;
+ (id)promiseWithPromise:(id)arg1;

- (id)init;
- (void)waitUntilFinished;
- (_Bool)resultWithError:(id *)arg1;
- (_Bool)finishWithError:(id)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)completionHandlerAdapter;
- (_Bool)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (void)addFinishBlock:(CDUnknownBlockType)arg1;
- (_Bool)finishWithSuccess;
- (void)addErrorBlock:(CDUnknownBlockType)arg1;
- (void)waitUntilFinishedWithTimeout:(double)arg1;
- (id)promiseAdapter;
- (void)_removeFromGlobalPromiseStorage;

@end
