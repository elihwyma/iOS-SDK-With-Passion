/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKAcceptSharesOperation : CKOperation

{
    CDUnknownBlockType _perShareCompletionBlock;
    CDUnknownBlockType _acceptSharesCompletionBlock;
    NSArray *_shareMetadatas;
    NSMutableDictionary *_errorsByShareURL;
    NSMutableDictionary *_shareMetadatasByShareURL;
}

@property (retain, nonatomic) NSMutableDictionary *errorsByShareURL;
@property (retain, nonatomic) NSMutableDictionary *shareMetadatasByShareURL;
@property (copy, nonatomic) NSArray *shareMetadatas;
@property (copy, nonatomic) CDUnknownBlockType perShareCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType acceptSharesCompletionBlock;

- (id)init;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (id)initWithShareMetadatas:(id)arg1;

@end
