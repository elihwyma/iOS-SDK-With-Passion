/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCKPOplockFailure, FCCKPUniqueFieldFailure;

@interface FCCKPResponseOperationResultErrorClient : PBCodable <Swift>

{
    FCCKPOplockFailure *_oplockFailure;
    int _type;
    FCCKPUniqueFieldFailure *_uniqueFieldFailure;
    CDStruct_f953fb60 _has;
}

@property (nonatomic, readonly) _Bool hasOplockFailure;
@property (retain, nonatomic) FCCKPOplockFailure *oplockFailure;
@property (nonatomic, readonly) _Bool hasUniqueFieldFailure;
@property (retain, nonatomic) FCCKPUniqueFieldFailure *uniqueFieldFailure;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;

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
