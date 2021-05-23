/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <ProtocolBuffer/PBCodable.h>

@interface WBSAnalyticsSafariTwoFingerTappedOnLinkEvent : PBCodable

{
    unsigned long long _timestamp;
    int _outcome;
    struct {
        unsigned int timestamp:1;
        unsigned int outcome:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasOutcome;
@property (nonatomic) int outcome;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)outcomeAsString:(int)arg1;
- (int)StringAsOutcome:(id)arg1;

@end
