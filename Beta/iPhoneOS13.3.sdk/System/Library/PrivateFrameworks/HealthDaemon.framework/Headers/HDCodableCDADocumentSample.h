/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableSample, NSData, NSString;

@interface HDCodableCDADocumentSample : PBCodable <Swift>

{
    NSString *_authorName;
    NSString *_custodianName;
    NSData *_documentData;
    int _omittedContent;
    NSString *_patientName;
    HDCodableSample *_sample;
    NSString *_title;
    struct {
        unsigned int omittedContent:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) _Bool hasOmittedContent;
@property (nonatomic) int omittedContent;
@property (nonatomic, readonly) _Bool hasDocumentData;
@property (retain, nonatomic) NSData *documentData;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasPatientName;
@property (retain, nonatomic) NSString *patientName;
@property (nonatomic, readonly) _Bool hasAuthorName;
@property (retain, nonatomic) NSString *authorName;
@property (nonatomic, readonly) _Bool hasCustodianName;
@property (retain, nonatomic) NSString *custodianName;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)applyToObject:(id)arg1;
- (id)omittedContentAsString:(int)arg1;
- (int)StringAsOmittedContent:(id)arg1;

@end
