/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCKPDateStatistics, FCCKPIdentifier, FCCKPRecordIdentifier, FCCKPRecordType, NSMutableArray, NSString;

@interface FCCKPRecord : PBCodable <Swift>

{
    NSMutableArray *_conflictLoserEtags;
    FCCKPIdentifier *_createdBy;
    NSString *_etag;
    NSMutableArray *_fields;
    FCCKPIdentifier *_modifiedBy;
    NSString *_modifiedByDevice;
    FCCKPRecordIdentifier *_recordIdentifier;
    FCCKPDateStatistics *_timeStatistics;
    FCCKPRecordType *_type;
}

@property (nonatomic, readonly) _Bool hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (nonatomic, readonly) _Bool hasRecordIdentifier;
@property (retain, nonatomic) FCCKPRecordIdentifier *recordIdentifier;
@property (nonatomic, readonly) _Bool hasType;
@property (retain, nonatomic) FCCKPRecordType *type;
@property (nonatomic, readonly) _Bool hasCreatedBy;
@property (retain, nonatomic) FCCKPIdentifier *createdBy;
@property (nonatomic, readonly) _Bool hasTimeStatistics;
@property (retain, nonatomic) FCCKPDateStatistics *timeStatistics;
@property (retain, nonatomic) NSMutableArray *fields;
@property (nonatomic, readonly) _Bool hasModifiedBy;
@property (retain, nonatomic) FCCKPIdentifier *modifiedBy;
@property (retain, nonatomic) NSMutableArray *conflictLoserEtags;
@property (nonatomic, readonly) _Bool hasModifiedByDevice;
@property (retain, nonatomic) NSString *modifiedByDevice;

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
- (void)addFields:(id)arg1;
- (unsigned long long)fieldsCount;
- (void)clearFields;
- (id)fieldsAtIndex:(unsigned long long)arg1;
- (void)addConflictLoserEtags:(id)arg1;
- (unsigned long long)conflictLoserEtagsCount;
- (void)clearConflictLoserEtags;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)arg1;

@end
