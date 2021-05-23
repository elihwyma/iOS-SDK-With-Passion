/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalCodingListList, HDCodableMedicalRecord, HDCodableStringList, NSData, NSString;

@interface HDCodableProcedureRecord : PBCodable <Swift>

{
    HDCodableMedicalCodingListList *_bodySitesCodings;
    HDCodableMedicalCodingList *_categoryCodings;
    HDCodableMedicalCodingListList *_complicationsCodings;
    NSData *_executionEndDate;
    NSData *_executionStartDate;
    HDCodableMedicalCodingListList *_followUpsCodings;
    HDCodableMedicalRecord *_medicalRecord;
    HDCodableMedicalCodingList *_outcomeCodings;
    HDCodableStringList *_performers;
    HDCodableMedicalCodingList *_procedureCodings;
    HDCodableMedicalCodingList *_reasonCodings;
    HDCodableMedicalCodingListList *_reasonsNotPerformedCodings;
    HDCodableMedicalCoding *_statusCoding;
    _Bool _notPerformed;
    struct {
        unsigned int notPerformed:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic, readonly) _Bool hasProcedureCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *procedureCodings;
@property (nonatomic, readonly) _Bool hasPerformers;
@property (retain, nonatomic) HDCodableStringList *performers;
@property (nonatomic, readonly) _Bool hasExecutionStartDate;
@property (retain, nonatomic) NSData *executionStartDate;
@property (nonatomic, readonly) _Bool hasExecutionEndDate;
@property (retain, nonatomic) NSData *executionEndDate;
@property (nonatomic) _Bool hasNotPerformed;
@property (nonatomic) _Bool notPerformed;
@property (nonatomic, readonly) _Bool hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;
@property (nonatomic, readonly) _Bool hasCategoryCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *categoryCodings;
@property (nonatomic, readonly) _Bool hasReasonCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *reasonCodings;
@property (nonatomic, readonly) _Bool hasReasonsNotPerformedCodings;
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonsNotPerformedCodings;
@property (nonatomic, readonly) _Bool hasOutcomeCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *outcomeCodings;
@property (nonatomic, readonly) _Bool hasComplicationsCodings;
@property (retain, nonatomic) HDCodableMedicalCodingListList *complicationsCodings;
@property (nonatomic, readonly) _Bool hasFollowUpsCodings;
@property (retain, nonatomic) HDCodableMedicalCodingListList *followUpsCodings;
@property (nonatomic, readonly) _Bool hasBodySitesCodings;
@property (retain, nonatomic) HDCodableMedicalCodingListList *bodySitesCodings;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)applyToObject:(id)arg1;
- (_Bool)applyToObject:(id)arg1 error:(out id *)arg2;

@end
