/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoPass, NSData, NSMutableArray;

@interface NPKProtoRemotePassUpdateResponse : PBCodable

{
    NSData *_errorData;
    NSMutableArray *_expressPassInformations;
    NPKProtoPass *_pass;
    int _upgradeStatus;
    _Bool _pending;
    struct {
        unsigned int upgradeStatus:1;
        unsigned int pending:1;
    } _has;
}

@property (nonatomic) _Bool hasPending;
@property (nonatomic) _Bool pending;
@property (nonatomic, readonly) _Bool hasPass;
@property (retain, nonatomic) NPKProtoPass *pass;
@property (nonatomic, readonly) _Bool hasErrorData;
@property (retain, nonatomic) NSData *errorData;
@property (nonatomic) _Bool hasUpgradeStatus;
@property (nonatomic) int upgradeStatus;
@property (retain, nonatomic) NSMutableArray *expressPassInformations;

+ (Class)expressPassInformationType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addExpressPassInformation:(id)arg1;
- (unsigned long long)expressPassInformationsCount;
- (void)clearExpressPassInformations;
- (id)expressPassInformationAtIndex:(unsigned long long)arg1;
- (id)upgradeStatusAsString:(int)arg1;
- (int)StringAsUpgradeStatus:(id)arg1;

@end
