/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBCodable.h>

@class NSString;

@interface PKProtobufShippingMethod : PBCodable

{
    long long _amount;
    NSString *_detail;
    NSString *_identifier;
    NSString *_label;
    unsigned int _type;
    CDStruct_9fb36b4c _has;
}

@property (nonatomic) _Bool hasAmount;
@property (nonatomic) long long amount;
@property (nonatomic, readonly) _Bool hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) _Bool hasType;
@property (nonatomic) unsigned int type;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasDetail;
@property (retain, nonatomic) NSString *detail;

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
