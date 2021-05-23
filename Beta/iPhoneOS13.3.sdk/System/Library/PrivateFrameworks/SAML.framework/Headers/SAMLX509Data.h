/*
 Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

#import <SAML/SAMLBaseElement.h>

@class NSData, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SAMLX509Data : SAMLBaseElement

@property (nonatomic, readonly) NSString *issuerName;
@property (nonatomic, readonly) NSNumber *serialNumber;
@property (nonatomic, readonly) NSData *ski;
@property (nonatomic, readonly) NSString *subjectName;
@property (nonatomic, readonly) NSData *certificate;
@property (nonatomic, readonly) NSData *crl;

+ (id)createElement:(id *)arg1;

@end
