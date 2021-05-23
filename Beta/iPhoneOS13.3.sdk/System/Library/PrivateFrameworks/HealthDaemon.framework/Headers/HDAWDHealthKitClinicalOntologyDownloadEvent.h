/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDAWDHealthKitClinicalOntologyDownloadEvent : PBCodable <Swift>

{
    long long _currentOntologyVersion;
    long long _hoursSinceLastAssetDownload;
    unsigned long long _timestamp;
    int _downloadPhase;
    struct {
        unsigned int currentOntologyVersion:1;
        unsigned int hoursSinceLastAssetDownload:1;
        unsigned int timestamp:1;
        unsigned int downloadPhase:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasCurrentOntologyVersion;
@property (nonatomic) long long currentOntologyVersion;
@property (nonatomic) _Bool hasHoursSinceLastAssetDownload;
@property (nonatomic) long long hoursSinceLastAssetDownload;
@property (nonatomic) _Bool hasDownloadPhase;
@property (nonatomic) int downloadPhase;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)downloadPhaseAsString:(int)arg1;
- (int)StringAsDownloadPhase:(id)arg1;

@end
