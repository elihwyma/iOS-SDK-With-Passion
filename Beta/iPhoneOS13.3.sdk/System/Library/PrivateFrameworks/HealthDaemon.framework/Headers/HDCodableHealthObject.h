/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableMetadataDictionary, NSData, NSString;

@interface HDCodableHealthObject : PBCodable <Swift>

{
    double _creationDate;
    long long _externalSyncObjectCode;
    HDCodableMetadataDictionary *_metadataDictionary;
    NSString *_sourceBundleIdentifier;
    NSData *_uuid;
    struct {
        unsigned int creationDate:1;
        unsigned int externalSyncObjectCode:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic, readonly) _Bool hasMetadataDictionary;
@property (retain, nonatomic) HDCodableMetadataDictionary *metadataDictionary;
@property (nonatomic, readonly) _Bool hasSourceBundleIdentifier;
@property (retain, nonatomic) NSString *sourceBundleIdentifier;
@property (nonatomic) _Bool hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) _Bool hasExternalSyncObjectCode;
@property (nonatomic) long long externalSyncObjectCode;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)applyToObject:(id)arg1;
- (id)decodedMetadata;

@end
