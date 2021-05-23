/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface TRILogTreatment : PBCodable

{
    struct {
        unsigned int *list;
        unsigned long long count;
        unsigned long long size;
    } _namespaceIds;
    NSString *_experimentId;
    NSString *_treatmentId;
}

@property (nonatomic, readonly) _Bool hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (nonatomic, readonly) _Bool hasTreatmentId;
@property (retain, nonatomic) NSString *treatmentId;
@property (nonatomic, readonly) unsigned long long namespaceIdsCount;
@property (nonatomic, readonly) unsigned int *namespaceIds;

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
- (void)clearNamespaceIds;
- (unsigned int)namespaceIdAtIndex:(unsigned long long)arg1;
- (void)addNamespaceId:(unsigned int)arg1;
- (void)setNamespaceIds:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
