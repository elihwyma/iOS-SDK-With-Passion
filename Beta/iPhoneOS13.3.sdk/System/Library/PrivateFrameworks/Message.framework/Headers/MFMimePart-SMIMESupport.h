/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <MIME/MFMimePart.h>

@class MFError;

@interface MFMimePart (SMIMESupport)

@property (nonatomic, readonly) MFError *SMIMEError;

- (id)newSignedPartWithData:(id)arg1 sender:(id)arg2 compositionSpecification:(id)arg3 signatureData:(id *)arg4;
- (id)newEncryptedPartWithData:(id)arg1 compositionSpecification:(id)arg2 encryptedData:(id *)arg3;
- (id)copySigners;
- (_Bool)_needsSignatureVerification:(id *)arg1;
- (void)_setSigners:(id)arg1;
- (void)_setSMIMEError:(id)arg1;
- (id)decodeMultipartSigned;
- (id)decodeApplicationPkcs7_mime;

@end
