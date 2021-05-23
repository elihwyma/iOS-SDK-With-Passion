/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NPKProtoStandalonePaymentSetupProductPaymentOption : PBCodable

{
    long long _cardType;
    unsigned long long _priority;
    long long _supportedProtocols;
    struct {
        unsigned int cardType:1;
        unsigned int priority:1;
        unsigned int supportedProtocols:1;
    } _has;
}

@property (nonatomic) _Bool hasPriority;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) _Bool hasCardType;
@property (nonatomic) long long cardType;
@property (nonatomic) _Bool hasSupportedProtocols;
@property (nonatomic) long long supportedProtocols;

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
