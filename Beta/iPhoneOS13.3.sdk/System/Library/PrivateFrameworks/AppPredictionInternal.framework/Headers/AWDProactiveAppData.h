/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class AWDProactiveAppPredictionSubscores, NSString;

@interface AWDProactiveAppData : PBCodable

{
    double _score;
    unsigned long long _timestamp;
    NSString *_bundleId;
    NSString *_sessionId;
    AWDProactiveAppPredictionSubscores *_subscores;
    _Bool _engagedApp;
    struct {
        unsigned int score:1;
        unsigned int timestamp:1;
        unsigned int engagedApp:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasEngagedApp;
@property (nonatomic) _Bool engagedApp;
@property (nonatomic) _Bool hasScore;
@property (nonatomic) double score;
@property (nonatomic, readonly) _Bool hasSubscores;
@property (retain, nonatomic) AWDProactiveAppPredictionSubscores *subscores;
@property (nonatomic, readonly) _Bool hasSessionId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic, readonly) _Bool hasBundleId;
@property (retain, nonatomic) NSString *bundleId;

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
