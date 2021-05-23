/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NWAWDNWL2Report;

__attribute__((visibility("hidden")))
@interface NWAWDNWActivity : PBCodable

{
    unsigned long long _activityDomain;
    unsigned long long _activityLabel;
    unsigned long long _timestamp;
    NSString *_activityUUID;
    NWAWDNWL2Report *_l2Report;
    NSString *_parentActivityUUID;
    _Bool _isRetry;
    struct {
        unsigned int activityDomain:1;
        unsigned int activityLabel:1;
        unsigned int timestamp:1;
        unsigned int isRetry:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasActivityDomain;
@property (nonatomic) unsigned long long activityDomain;
@property (nonatomic) _Bool hasActivityLabel;
@property (nonatomic) unsigned long long activityLabel;
@property (nonatomic, readonly) _Bool hasActivityUUID;
@property (retain, nonatomic) NSString *activityUUID;
@property (nonatomic, readonly) _Bool hasParentActivityUUID;
@property (retain, nonatomic) NSString *parentActivityUUID;
@property (nonatomic) _Bool hasIsRetry;
@property (nonatomic) _Bool isRetry;
@property (nonatomic, readonly) _Bool hasL2Report;
@property (retain, nonatomic) NWAWDNWL2Report *l2Report;

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
