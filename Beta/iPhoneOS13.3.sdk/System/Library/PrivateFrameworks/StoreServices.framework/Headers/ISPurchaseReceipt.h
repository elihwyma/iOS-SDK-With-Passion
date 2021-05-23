/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDate, NSString;

@interface ISPurchaseReceipt : NSObject

{
    NSString *_cancellationReason;
    NSDate *_expirationDate;
    NSDate *_receiptCreationDate;
    NSDate *_renewalDate;
}

@property (readonly) NSDate *expirationDate;
@property (readonly) _Bool isVPPLicensed;
@property (readonly) _Bool isRevoked;

+ (id)receiptWithContentsOfFile:(id)arg1;

- (id)initWithContentsOfFile:(id)arg1;
- (_Bool)_decodeReceiptData:(id)arg1 toDecodedMessage:(inout struct SecCmsMessageStr **)arg2;
- (_Bool)_parseReceiptFromMessage:(struct SecCmsMessageStr *)arg1;
- (struct SecCmsSignedDataStr *)_extractSignedDataFromMessage:(struct SecCmsMessageStr *)arg1;
- (long long)_verifySignatureForSignedData:(struct SecCmsSignedDataStr *)arg1 onDate:(id)arg2;
- (_Bool)_checkIfCertificate:(struct __SecCertificate *)arg1 containsOID:(struct __CFString *)arg2;
- (void)_parseTokens:(id)arg1;
- (struct __CFArray *)_copyCertificatesFromSignedData:(struct SecCmsSignedDataStr *)arg1;
- (_Bool)_checkArray:(struct __CFArray *)arg1 containsCertificateWithOID:(struct __CFString *)arg2;
- (_Bool)_setPoliciesForTrust:(struct __SecTrust *)arg1;
- (_Bool)_anchorTrust:(struct __SecTrust *)arg1 toRootCertificateIn:(struct __CFArray *)arg2;

@end
