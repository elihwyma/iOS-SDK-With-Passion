/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableAllergyReactionList, HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalRecord, NSData, NSString;

@interface HDCodableAllergyRecord : PBCodable <Swift>

{
    HDCodableMedicalCodingList *_allergyCodings;
    NSString *_asserter;
    HDCodableMedicalCoding *_criticalityCoding;
    NSData *_lastOccurenceDate;
    HDCodableMedicalRecord *_medicalRecord;
    NSData *_onsetDate;
    HDCodableAllergyReactionList *_reactions;
    NSData *_recordedDate;
    HDCodableMedicalCoding *_statusCoding;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic, readonly) _Bool hasAllergyCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *allergyCodings;
@property (nonatomic, readonly) _Bool hasOnsetDate;
@property (retain, nonatomic) NSData *onsetDate;
@property (nonatomic, readonly) _Bool hasAsserter;
@property (retain, nonatomic) NSString *asserter;
@property (nonatomic, readonly) _Bool hasReactions;
@property (retain, nonatomic) HDCodableAllergyReactionList *reactions;
@property (nonatomic, readonly) _Bool hasCriticalityCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *criticalityCoding;
@property (nonatomic, readonly) _Bool hasLastOccurenceDate;
@property (retain, nonatomic) NSData *lastOccurenceDate;
@property (nonatomic, readonly) _Bool hasRecordedDate;
@property (retain, nonatomic) NSData *recordedDate;
@property (nonatomic, readonly) _Bool hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;

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
