/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@interface HDBatchedQueryServer : HDQueryServer

{
    CDUnknownBlockType _unitTest_queryServerObjectEnumerationHandler;
    CDUnknownBlockType _unitTest_queryServerWillSendBatchHandler;
}

@property (copy, nonatomic) CDUnknownBlockType unitTest_queryServerObjectEnumerationHandler;
@property (copy, nonatomic) CDUnknownBlockType unitTest_queryServerWillSendBatchHandler;

- (long long)batchObjectsWithEnumerator:(id)arg1 includeDeletedObjects:(_Bool)arg2 error:(id *)arg3 batchHandler:(CDUnknownBlockType)arg4;
- (long long)batchObjectsWithEnumerator:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;

@end
