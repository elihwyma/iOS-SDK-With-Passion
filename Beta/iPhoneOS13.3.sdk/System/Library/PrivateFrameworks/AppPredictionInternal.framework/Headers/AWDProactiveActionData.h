/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class AWDProactiveAppPredictionSubscores, NSString;

@interface AWDProactiveActionData : PBCodable

{
    double _score;
    unsigned long long _timestamp;
    NSString *_actionKey;
    int _cacheRank;
    NSString *_engaged;
    NSString *_heuristicName;
    NSString *_sessionId;
    AWDProactiveAppPredictionSubscores *_subscores;
    _Bool _engagedAction;
    _Bool _futureMedia;
    _Bool _shown;
    struct {
        unsigned int score:1;
        unsigned int timestamp:1;
        unsigned int cacheRank:1;
        unsigned int engagedAction:1;
        unsigned int futureMedia:1;
        unsigned int shown:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasActionKey;
@property (retain, nonatomic) NSString *actionKey;
@property (nonatomic) _Bool hasCacheRank;
@property (nonatomic) int cacheRank;
@property (nonatomic) _Bool hasEngagedAction;
@property (nonatomic) _Bool engagedAction;
@property (nonatomic) _Bool hasFutureMedia;
@property (nonatomic) _Bool futureMedia;
@property (nonatomic) _Bool hasScore;
@property (nonatomic) double score;
@property (nonatomic) _Bool hasShown;
@property (nonatomic) _Bool shown;
@property (nonatomic, readonly) _Bool hasSubscores;
@property (retain, nonatomic) AWDProactiveAppPredictionSubscores *subscores;
@property (nonatomic, readonly) _Bool hasHeuristicName;
@property (retain, nonatomic) NSString *heuristicName;
@property (nonatomic, readonly) _Bool hasEngaged;
@property (retain, nonatomic) NSString *engaged;
@property (nonatomic, readonly) _Bool hasSessionId;
@property (retain, nonatomic) NSString *sessionId;

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
