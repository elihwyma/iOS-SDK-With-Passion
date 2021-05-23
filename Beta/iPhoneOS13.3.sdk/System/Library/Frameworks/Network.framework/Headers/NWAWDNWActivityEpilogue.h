/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NWAWDNWActivity, NWAWDNWL2Report;

__attribute__((visibility("hidden")))
@interface NWAWDNWActivityEpilogue : PBCodable

{
    unsigned long long _durationMsecs;
    unsigned long long _fragmentsQuenched;
    unsigned long long _timestamp;
    NWAWDNWActivity *_activity;
    int _completionReason;
    NWAWDNWL2Report *_l2Report;
    struct {
        unsigned int durationMsecs:1;
        unsigned int fragmentsQuenched:1;
        unsigned int timestamp:1;
        unsigned int completionReason:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasActivity;
@property (retain, nonatomic) NWAWDNWActivity *activity;
@property (nonatomic) _Bool hasDurationMsecs;
@property (nonatomic) unsigned long long durationMsecs;
@property (nonatomic) _Bool hasFragmentsQuenched;
@property (nonatomic) unsigned long long fragmentsQuenched;
@property (nonatomic) _Bool hasCompletionReason;
@property (nonatomic) int completionReason;
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
- (id)completionReasonAsString:(int)arg1;
- (int)StringAsCompletionReason:(id)arg1;

@end
