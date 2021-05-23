/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

__attribute__((visibility("hidden")))
@interface CKDFetchUserQuotaURLRequest : CKDURLRequest

{
    CDUnknownBlockType _quotaFetchedBlock;
}

@property (copy, nonatomic) CDUnknownBlockType quotaFetchedBlock;

- (int)operationType;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;

@end
