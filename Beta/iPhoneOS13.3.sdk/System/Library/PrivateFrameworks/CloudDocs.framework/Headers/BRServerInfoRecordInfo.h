/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface BRServerInfoRecordInfo : PBCodable

{
    unsigned long long _bounceNo;
    NSData *_encryptedBasename;
    NSString *_etag;
    NSString *_extension;
    NSString *_recordID;
    NSData *_recordProtectionInfo;
    NSString *_zoneName;
    NSData *_zoneProtectionInfo;
    struct {
        unsigned int bounceNo:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasRecordID;
@property (retain, nonatomic) NSString *recordID;
@property (nonatomic, readonly) _Bool hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (nonatomic, readonly) _Bool hasEncryptedBasename;
@property (retain, nonatomic) NSData *encryptedBasename;
@property (nonatomic) _Bool hasBounceNo;
@property (nonatomic) unsigned long long bounceNo;
@property (nonatomic, readonly) _Bool hasExtension;
@property (retain, nonatomic) NSString *extension;
@property (nonatomic, readonly) _Bool hasRecordProtectionInfo;
@property (retain, nonatomic) NSData *recordProtectionInfo;
@property (nonatomic, readonly) _Bool hasZoneName;
@property (retain, nonatomic) NSString *zoneName;
@property (nonatomic, readonly) _Bool hasZoneProtectionInfo;
@property (retain, nonatomic) NSData *zoneProtectionInfo;

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
