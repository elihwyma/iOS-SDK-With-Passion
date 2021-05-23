/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NPKProtoRemoveExpressPassesWithCardTypeResponse : PBCodable

{
    NSMutableArray *_actualExpressPassInformations;
    _Bool _pending;
    _Bool _success;
    CDStruct_5ee4970e _has;
}

@property (nonatomic) _Bool hasPending;
@property (nonatomic) _Bool pending;
@property (nonatomic) _Bool hasSuccess;
@property (nonatomic) _Bool success;
@property (retain, nonatomic) NSMutableArray *actualExpressPassInformations;

+ (Class)actualExpressPassInformationType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addActualExpressPassInformation:(id)arg1;
- (unsigned long long)actualExpressPassInformationsCount;
- (void)clearActualExpressPassInformations;
- (id)actualExpressPassInformationAtIndex:(unsigned long long)arg1;

@end
