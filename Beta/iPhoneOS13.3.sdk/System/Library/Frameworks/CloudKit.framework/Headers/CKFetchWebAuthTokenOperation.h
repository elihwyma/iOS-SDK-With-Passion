/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSString;

@interface CKFetchWebAuthTokenOperation : CKDatabaseOperation

{
    CDUnknownBlockType _fetchWebAuthTokenCompletionBlock;
    NSString *_APIToken;
    NSString *_webAuthToken;
}

@property (copy, nonatomic) NSString *webAuthToken;
@property (copy, nonatomic) NSString *APIToken;
@property (copy, nonatomic) CDUnknownBlockType fetchWebAuthTokenCompletionBlock;

- (id)init;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (Class)operationInfoClass;
- (void)_handleCompletionCallback:(id)arg1;
- (id)initWithAPIToken:(id)arg1;

@end
