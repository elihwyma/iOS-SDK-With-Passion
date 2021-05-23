/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperation.h>

@class CKShareMetadata, NSString;

@interface CKInitiateParticipantVettingOperation : CKOperation

{
    CDUnknownBlockType _participantVettingInitiatedBlock;
    CDUnknownBlockType _participantVettingInitiationCompletionBlock;
    CKShareMetadata *_shareMetadata;
    NSString *_participantID;
    NSString *_address;
}

@property (retain, nonatomic) CKShareMetadata *shareMetadata;
@property (copy, nonatomic) NSString *participantID;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) CDUnknownBlockType participantVettingInitiatedBlock;
@property (copy, nonatomic) CDUnknownBlockType participantVettingInitiationCompletionBlock;

- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (Class)operationInfoClass;
- (id)initWithShareMetadata:(id)arg1 participantID:(id)arg2 address:(id)arg3;
- (void)retryTimes:(unsigned long long)arg1 container:(id)arg2 participantVettingInitiatedBlock:(CDUnknownBlockType)arg3 participantVettingInitiationCompletionBlock:(CDUnknownBlockType)arg4;

@end
