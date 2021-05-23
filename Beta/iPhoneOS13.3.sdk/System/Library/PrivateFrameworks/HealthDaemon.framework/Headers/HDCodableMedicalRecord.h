/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableFHIRIdentifier, HDCodableSample, HDCodableSemanticDate, NSString;

@interface HDCodableMedicalRecord : PBCodable <Swift>

{
    long long _extractionVersion;
    double _modifiedDate;
    HDCodableFHIRIdentifier *_fHIRIdentifier;
    NSString *_locale;
    NSString *_note;
    HDCodableSample *_sample;
    HDCodableSemanticDate *_sortDate;
    _Bool _enteredInError;
    struct {
        unsigned int extractionVersion:1;
        unsigned int modifiedDate:1;
        unsigned int enteredInError:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic, readonly) _Bool hasNote;
@property (retain, nonatomic) NSString *note;
@property (nonatomic) _Bool hasEnteredInError;
@property (nonatomic) _Bool enteredInError;
@property (nonatomic) _Bool hasModifiedDate;
@property (nonatomic) double modifiedDate;
@property (nonatomic, readonly) _Bool hasFHIRIdentifier;
@property (retain, nonatomic) HDCodableFHIRIdentifier *fHIRIdentifier;
@property (nonatomic, readonly) _Bool hasSortDate;
@property (retain, nonatomic) HDCodableSemanticDate *sortDate;
@property (nonatomic) _Bool hasExtractionVersion;
@property (nonatomic) long long extractionVersion;
@property (nonatomic, readonly) _Bool hasLocale;
@property (retain, nonatomic) NSString *locale;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)applyToObject:(id)arg1;

@end
