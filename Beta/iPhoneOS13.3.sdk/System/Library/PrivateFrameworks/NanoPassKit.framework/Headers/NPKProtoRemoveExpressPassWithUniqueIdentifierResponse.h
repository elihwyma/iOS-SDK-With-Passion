/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface NPKProtoRemoveExpressPassWithUniqueIdentifierResponse : PBCodable

{
    NSData *_actualExpressPassInformation;
    NSMutableArray *_currentExpressPassesInformations;
    _Bool _pending;
    _Bool _success;
    CDStruct_5ee4970e _has;
}

@property (nonatomic) _Bool hasPending;
@property (nonatomic) _Bool pending;
@property (nonatomic) _Bool hasSuccess;
@property (nonatomic) _Bool success;
@property (nonatomic, readonly) _Bool hasActualExpressPassInformation;
@property (retain, nonatomic) NSData *actualExpressPassInformation;
@property (retain, nonatomic) NSMutableArray *currentExpressPassesInformations;

+ (Class)currentExpressPassesInformationType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addCurrentExpressPassesInformation:(id)arg1;
- (unsigned long long)currentExpressPassesInformationsCount;
- (void)clearCurrentExpressPassesInformations;
- (id)currentExpressPassesInformationAtIndex:(unsigned long long)arg1;

@end
