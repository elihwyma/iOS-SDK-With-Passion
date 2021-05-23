/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowTermsAndConditionsStepContext : PBCodable

{
    NSString *_termsURL;
    _Bool _allowNonSecureHTTP;
    struct {
        unsigned int allowNonSecureHTTP:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasTermsURL;
@property (retain, nonatomic) NSString *termsURL;
@property (nonatomic) _Bool hasAllowNonSecureHTTP;
@property (nonatomic) _Bool allowNonSecureHTTP;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
