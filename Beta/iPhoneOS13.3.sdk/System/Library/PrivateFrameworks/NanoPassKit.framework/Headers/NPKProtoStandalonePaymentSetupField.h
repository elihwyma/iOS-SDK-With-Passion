/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NPKProtoStandalonePaymentSetupField : PBCodable

{
    NSString *_currentValue;
    int _fieldType;
    NSString *_identifier;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) int fieldType;
@property (nonatomic, readonly) _Bool hasCurrentValue;
@property (retain, nonatomic) NSString *currentValue;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)fieldTypeAsString:(int)arg1;
- (int)StringAsFieldType:(id)arg1;

@end
