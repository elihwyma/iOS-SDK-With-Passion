/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBCodable.h>

@class ADAdVector, NSString;

@interface ADOdmlResponse : PBCodable

{
    double _obfuscatedpTTR;
    ADAdVector *_adVector;
    NSString *_obfuscationID;
    struct {
        unsigned int obfuscatedpTTR:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasAdVector;
@property (retain, nonatomic) ADAdVector *adVector;
@property (nonatomic) _Bool hasObfuscatedpTTR;
@property (nonatomic) double obfuscatedpTTR;
@property (nonatomic, readonly) _Bool hasObfuscationID;
@property (retain, nonatomic) NSString *obfuscationID;

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
