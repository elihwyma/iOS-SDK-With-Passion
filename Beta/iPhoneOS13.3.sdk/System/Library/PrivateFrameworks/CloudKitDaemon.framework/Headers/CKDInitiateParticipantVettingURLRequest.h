/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecordID, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDInitiateParticipantVettingURLRequest : CKDURLRequest

{
    CDUnknownBlockType _vettingInitiationRequestCompletionBlock;
    CKRecordID *_shareRecordID;
    NSData *_encryptedKey;
    NSString *_participantID;
    NSString *_baseToken;
}

@property (copy, nonatomic) CKRecordID *shareRecordID;
@property (copy, nonatomic) NSData *encryptedKey;
@property (copy, nonatomic) NSString *participantID;
@property (copy, nonatomic) NSString *baseToken;
@property (copy, nonatomic) CDUnknownBlockType vettingInitiationRequestCompletionBlock;

- (int)operationType;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestOperationClasses;
- (id)initWithShareRecordID:(id)arg1 encryptedKey:(id)arg2 participantID:(id)arg3 baseToken:(id)arg4;

@end
