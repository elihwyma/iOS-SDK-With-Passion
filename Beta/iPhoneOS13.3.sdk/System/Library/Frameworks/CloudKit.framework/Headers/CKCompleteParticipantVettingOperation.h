/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperation.h>

@class CKShareMetadata, NSData, NSError, NSString, NSURL;

@interface CKCompleteParticipantVettingOperation : CKOperation

{
    CDUnknownBlockType _completeParticipantVettingCompletionBlock;
    NSError *_verificationError;
    NSString *_vettingToken;
    NSString *_vettingEmail;
    NSString *_vettingPhone;
    NSString *_routingKey;
    NSData *_encryptedKey;
    NSString *_baseToken;
    NSString *_displayedHostname;
    NSURL *_reconstructedShareURL;
    CKShareMetadata *_shareMetadata;
}

@property (retain, nonatomic) NSError *verificationError;
@property (copy, nonatomic) NSString *vettingToken;
@property (copy, nonatomic) NSString *vettingEmail;
@property (copy, nonatomic) NSString *vettingPhone;
@property (copy, nonatomic) NSString *routingKey;
@property (copy, nonatomic) NSData *encryptedKey;
@property (copy, nonatomic) NSString *baseToken;
@property (copy, nonatomic) NSString *displayedHostname;
@property (copy, nonatomic) NSURL *reconstructedShareURL;
@property (retain, nonatomic) CKShareMetadata *shareMetadata;
@property (copy, nonatomic) CDUnknownBlockType completeParticipantVettingCompletionBlock;

- (id)init;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (id)initWithVettingToken:(id)arg1 vettingRecord:(id)arg2 displayedHostname:(id)arg3;

@end
