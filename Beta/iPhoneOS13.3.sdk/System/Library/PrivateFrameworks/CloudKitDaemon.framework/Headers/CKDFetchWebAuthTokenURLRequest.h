/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest

{
    NSString *_APIToken;
    CDUnknownBlockType _tokenFetchedBlock;
}

@property (copy, nonatomic) NSString *APIToken;
@property (copy, nonatomic) CDUnknownBlockType tokenFetchedBlock;

- (int)operationType;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;

@end
