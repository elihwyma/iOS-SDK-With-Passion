/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

@class CKShareMetadata, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDCompleteParticipantVettingOperation : CKDOperation

{
    CDUnknownBlockType _verifyProgressURLReconstructedBlock;
    CDUnknownBlockType _verifyProgressShareMetadataFetchedBlock;
    CDUnknownBlockType _verifyCompletionBlock;
    NSString *_vettingToken;
    NSString *_vettingEmail;
    NSString *_vettingPhone;
    NSString *_routingKey;
    NSData *_encryptedKey;
    NSString *_baseToken;
    NSString *_displayedHostname;
    struct _OpaquePCSShareProtection *_protectionInfo;
    NSString *_shortToken;
    CKShareMetadata *_shareMetadata;
}

@property (nonatomic, readonly) NSString *vettingToken;
@property (nonatomic, readonly) NSString *vettingEmail;
@property (nonatomic, readonly) NSString *vettingPhone;
@property (nonatomic, readonly) NSString *routingKey;
@property (nonatomic, readonly) NSData *encryptedKey;
@property (nonatomic, readonly) NSString *baseToken;
@property (nonatomic, readonly) NSString *displayedHostname;
@property (nonatomic) struct _OpaquePCSShareProtection *protectionInfo;
@property (retain, nonatomic) NSString *shortToken;
@property (retain, nonatomic) CKShareMetadata *shareMetadata;
@property (copy, nonatomic) CDUnknownBlockType verifyProgressURLReconstructedBlock;
@property (copy, nonatomic) CDUnknownBlockType verifyProgressShareMetadataFetchedBlock;
@property (copy, nonatomic) CDUnknownBlockType verifyCompletionBlock;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (void)_reconstructShortToken;
- (void)_performAuthKitVerification;
- (void)_forceFetchShareMetadata;
- (void)_reconstructShareURL;
- (void)_verifyOONParticipant;
- (id)shortSharingTokenFromFullToken:(id)arg1;
- (id)shortSharingTokenFromData:(id)arg1;

@end
