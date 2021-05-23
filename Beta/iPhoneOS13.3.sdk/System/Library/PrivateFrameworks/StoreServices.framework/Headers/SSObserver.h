/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@interface SSObserver : NSObject

{
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _resultBlock;
}

@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (copy, nonatomic) CDUnknownBlockType failureBlock;
@property (copy, nonatomic) CDUnknownBlockType resultBlock;

+ (id)observerWithResultBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (id)observerWithResultBlock:(CDUnknownBlockType)arg1;

- (void)_sendCompletionUsingQueue:(id)arg1;
- (void)_sendFailure:(id)arg1 usingQueue:(id)arg2;
- (void)_sendResult:(id)arg1 usingQueue:(id)arg2;

@end
