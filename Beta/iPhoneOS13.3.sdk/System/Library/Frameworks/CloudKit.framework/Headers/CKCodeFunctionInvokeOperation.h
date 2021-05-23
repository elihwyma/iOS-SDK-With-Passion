/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class NSData, NSError, NSString, NSURL;

@interface CKCodeFunctionInvokeOperation : CKDatabaseOperation

{
    _Bool _local;
    _Bool _shouldFetchAssetContentInMemory;
    CDUnknownBlockType _functionInvokeCompletionBlock;
    CDUnknownBlockType _perRecordProgressBlock;
    NSString *_serviceName;
    NSString *_functionName;
    NSData *_serializedRequest;
    NSURL *_explicitBaseURL;
    NSData *_serializedResponse;
    NSError *_responseError;
}

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSData *serializedRequest;
@property (nonatomic) _Bool local;
@property (copy, nonatomic) NSURL *explicitBaseURL;
@property (nonatomic) _Bool shouldFetchAssetContentInMemory;
@property (copy, nonatomic) NSData *serializedResponse;
@property (retain, nonatomic) NSError *responseError;
@property (copy, nonatomic) CDUnknownBlockType functionInvokeCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType perRecordProgressBlock;

- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedRequest:(id)arg3 local:(_Bool)arg4;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedRequest:(id)arg3;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 local:(_Bool)arg4;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3;

@end
