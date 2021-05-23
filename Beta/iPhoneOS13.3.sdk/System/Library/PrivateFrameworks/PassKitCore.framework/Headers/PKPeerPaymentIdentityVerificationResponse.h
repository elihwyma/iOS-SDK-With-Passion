/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSArray, NSString, PKPeerPaymentAccount;

@interface PKPeerPaymentIdentityVerificationResponse : PKPeerPaymentWebServiceResponse

{
    _Bool _complete;
    _Bool _manuallyTriggered;
    PKPeerPaymentAccount *_account;
    NSString *_title;
    NSString *_subtitle;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
    NSArray *_requiredFieldsByPage;
    NSArray *_acceptableDocuments;
    NSArray *_encryptionCertificates;
    NSString *_encryptionVersion;
}

@property (nonatomic, readonly) _Bool complete;
@property (nonatomic, readonly) PKPeerPaymentAccount *account;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) NSString *localizedTitle;
@property (copy, nonatomic, readonly) NSString *localizedDescription;
@property (copy, nonatomic, readonly) NSArray *requiredFieldsByPage;
@property (nonatomic, readonly) NSArray *acceptableDocuments;
@property (copy, nonatomic, readonly) NSArray *encryptionCertificates;
@property (copy, nonatomic, readonly) NSString *encryptionVersion;
@property (nonatomic) _Bool manuallyTriggered;

- (id)initWithData:(id)arg1;

@end
