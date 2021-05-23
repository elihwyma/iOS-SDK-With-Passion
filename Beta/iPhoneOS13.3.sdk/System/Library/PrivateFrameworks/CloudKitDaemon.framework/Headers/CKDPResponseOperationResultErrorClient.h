/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPOplockFailure, CKDPUniqueFieldFailure;

@interface CKDPResponseOperationResultErrorClient : PBCodable

{
    CKDPOplockFailure *_oplockFailure;
    int _type;
    CKDPUniqueFieldFailure *_uniqueFieldFailure;
    CDStruct_f953fb60 _has;
}

@property (nonatomic, readonly) _Bool hasOplockFailure;
@property (retain, nonatomic) CKDPOplockFailure *oplockFailure;
@property (nonatomic, readonly) _Bool hasUniqueFieldFailure;
@property (retain, nonatomic) CKDPUniqueFieldFailure *uniqueFieldFailure;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (id)_typeCKLogValue;

@end
