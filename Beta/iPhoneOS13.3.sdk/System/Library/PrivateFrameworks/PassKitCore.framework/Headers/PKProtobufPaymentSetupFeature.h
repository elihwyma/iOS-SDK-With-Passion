/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBCodable.h>

@interface PKProtobufPaymentSetupFeature : PBCodable

{
    unsigned long long _state;
    unsigned long long _type;
    struct {
        unsigned int state:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) unsigned long long type;
@property (nonatomic) _Bool hasState;
@property (nonatomic) unsigned long long state;

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
