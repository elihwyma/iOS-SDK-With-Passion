/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class IDSService, NSMutableDictionary, NSString;

@protocol CRKIdentitySharingDelegate;

@interface CRKIdentitySharingFacade : NSObject

{
    NSObject<CRKIdentitySharingDelegate> *_delegate;
    NSMutableDictionary *_operationsByIDSIdentifier;
    IDSService *_service;
}

@property (retain, nonatomic) NSMutableDictionary *operationsByIDSIdentifier;
@property (nonatomic, readonly) IDSService *service;
@property (weak, nonatomic) NSObject<CRKIdentitySharingDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedFacade;

- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;
- (id)initWithServiceIdentifier:(id)arg1;
- (id)_operationToSendMessage:(id)arg1 toRecipients:(id)arg2;
- (void)_signalDelegateWithAdvertisingIdentifierAndCertificatesMessage:(id)arg1 sender:(id)arg2 device:(id)arg3;
- (void)_signalDelegateWithCertificatesMessage:(id)arg1 sender:(id)arg2 device:(id)arg3;
- (void)_signalDelegateWithCertificateRequestFromSender:(id)arg1 device:(id)arg2;
- (_Bool)_getActiveCertificate:(id *)arg1 stagedCertificate:(id *)arg2 fromMessage:(id)arg3;
- (void)identitySharingOperation:(id)arg1 sentMessageWithIdentifier:(id)arg2;
- (id)operationToSendAdvertisingIdentifier:(id)arg1 activeCertificate:(id)arg2 stagedCertificate:(id)arg3 toRecipients:(id)arg4 fromDevice:(id)arg5;
- (id)operationToSendActiveCertificate:(id)arg1 stagedCertificate:(id)arg2 toRecipients:(id)arg3 fromDevice:(id)arg4;
- (id)operationToRequestCertificateFromClassMember:(id)arg1 fromDevice:(id)arg2;

@end
