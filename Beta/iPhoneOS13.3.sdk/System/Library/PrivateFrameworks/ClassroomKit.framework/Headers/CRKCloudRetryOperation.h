/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class CATOperationQueue, CRKCloudOperation;

@protocol CRKCloudResetable;

@interface CRKCloudRetryOperation : CATOperation

{
    unsigned long long mAttempts;
    CRKCloudOperation<CRKCloudResetable> *_cloudOperation;
    CATOperationQueue *_operationQueue;
}

@property (nonatomic, readonly) CRKCloudOperation<CRKCloudResetable> *cloudOperation;
@property (nonatomic, readonly) CATOperationQueue *operationQueue;

- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithOperationQueue:(id)arg1 cloudOperation:(id)arg2;
- (void)cloudOperationDidFinish:(id)arg1;
- (void)performRetry:(id)arg1;

@end
