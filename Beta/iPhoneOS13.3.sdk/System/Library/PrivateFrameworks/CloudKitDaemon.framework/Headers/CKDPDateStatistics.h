/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPDate;

@interface CKDPDateStatistics : PBCodable

{
    CKDPDate *_creation;
    CKDPDate *_modification;
}

@property (nonatomic, readonly) _Bool hasCreation;
@property (retain, nonatomic) CKDPDate *creation;
@property (nonatomic, readonly) _Bool hasModification;
@property (retain, nonatomic) CKDPDate *modification;

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
