/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSData;

@interface PKAccountPaymentFundingDetails : NSObject <Swift>

{
    NSData *_encryptedData;
    NSData *_publicKeyHash;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (id)jsonString;
- (id)hashComponentWithCertificatesResponse:(id)arg1;
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1;
- (id)_encryptedDataWithCertificatesResponse:(id)arg1 publicKeyHash:(id *)arg2;
- (id)fundingDetailsUnencryptedDictionary;

@end
