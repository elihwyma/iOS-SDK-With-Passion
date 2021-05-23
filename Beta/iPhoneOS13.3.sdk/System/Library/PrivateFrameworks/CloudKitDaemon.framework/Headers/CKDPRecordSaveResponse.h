/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPDateStatistics, CKDPRecord, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordSaveResponse : PBCodable

{
    NSString *_etag;
    CKDPRecord *_serverFields;
    CKDPDateStatistics *_timeStatistics;
}

@property (nonatomic, readonly) _Bool hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (nonatomic, readonly) _Bool hasTimeStatistics;
@property (retain, nonatomic) CKDPDateStatistics *timeStatistics;
@property (nonatomic, readonly) _Bool hasServerFields;
@property (retain, nonatomic) CKDPRecord *serverFields;

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
