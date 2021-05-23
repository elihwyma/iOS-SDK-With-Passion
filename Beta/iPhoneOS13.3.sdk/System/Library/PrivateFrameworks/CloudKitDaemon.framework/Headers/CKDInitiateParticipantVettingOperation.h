/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

@class CKShareMetadata, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDInitiateParticipantVettingOperation : CKDOperation

{
    CDUnknownBlockType _participantVettingProgressBlock;
    CKShareMetadata *_shareMetadata;
    NSData *_encryptedKey;
    NSString *_participantID;
    NSString *_address;
}

@property (retain, nonatomic) CKShareMetadata *shareMetadata;
@property (retain, nonatomic) NSData *encryptedKey;
@property (retain, nonatomic) NSString *participantID;
@property (retain, nonatomic) NSString *address;
@property (copy, nonatomic) CDUnknownBlockType participantVettingProgressBlock;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)_sendRequest:(_Bool)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)_addSelfIdentityToShareMetadataPublicPCS:(id)arg1 forShareWithURL:(id)arg2 error:(id *)arg3;
- (id)_encryptedKeyDataWithShareMetadata:(id)arg1 error:(id *)arg2;
- (void)_handleVettingInitiationProgress:(id)arg1;

@end
