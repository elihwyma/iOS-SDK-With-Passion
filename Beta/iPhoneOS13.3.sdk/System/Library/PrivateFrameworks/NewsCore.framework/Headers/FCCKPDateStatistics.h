/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCKPDate;

@interface FCCKPDateStatistics : PBCodable <Swift>

{
    FCCKPDate *_creation;
    FCCKPDate *_modification;
}

@property (nonatomic, readonly) _Bool hasCreation;
@property (retain, nonatomic) FCCKPDate *creation;
@property (nonatomic, readonly) _Bool hasModification;
@property (retain, nonatomic) FCCKPDate *modification;

- (void)dealloc;
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
