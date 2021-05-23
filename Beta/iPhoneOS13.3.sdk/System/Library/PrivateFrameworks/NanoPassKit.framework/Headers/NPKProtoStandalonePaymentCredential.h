/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NPKProtoStandalonePaymentCredential : PBCodable

{
    NSString *_expiration;
    NSString *_longDescription;
    NSString *_sanitizedPrimaryAccountNumber;
}

@property (nonatomic, readonly) _Bool hasSanitizedPrimaryAccountNumber;
@property (retain, nonatomic) NSString *sanitizedPrimaryAccountNumber;
@property (nonatomic, readonly) _Bool hasExpiration;
@property (retain, nonatomic) NSString *expiration;
@property (nonatomic, readonly) _Bool hasLongDescription;
@property (retain, nonatomic) NSString *longDescription;

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
