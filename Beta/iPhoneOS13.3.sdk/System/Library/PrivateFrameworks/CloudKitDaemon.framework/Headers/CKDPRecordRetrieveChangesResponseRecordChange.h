/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecord, CKDPRecordIdentifier, CKDPRecordType, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveChangesResponseRecordChange : PBCodable

{
    NSString *_etag;
    CKDPRecord *_record;
    CKDPRecordIdentifier *_recordIdentifier;
    CKDPRecordType *_recordType;
    int _type;
    CDStruct_f953fb60 _has;
}

@property (nonatomic, readonly) _Bool hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (nonatomic, readonly) _Bool hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (nonatomic, readonly) _Bool hasRecordType;
@property (retain, nonatomic) CKDPRecordType *recordType;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasRecord;
@property (retain, nonatomic) CKDPRecord *record;

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

@end
