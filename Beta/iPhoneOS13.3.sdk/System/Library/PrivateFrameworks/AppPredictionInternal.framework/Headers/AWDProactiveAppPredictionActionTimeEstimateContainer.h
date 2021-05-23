/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface AWDProactiveAppPredictionActionTimeEstimateContainer : PBCodable

{
    CDStruct_95bda58d _launchReasons;
    CDStruct_95bda58d _sessionIndexs;
    CDStruct_95bda58d _sessionLengths;
    CDStruct_95bda58d _timeEstimates;
    NSString *_actionKey;
    int _actionType;
    int _noMatchCount;
    NSMutableArray *_parameters;
    struct {
        unsigned int actionType:1;
        unsigned int noMatchCount:1;
    } _has;
}

@property (retain, nonatomic) NSString *actionKey;
@property (nonatomic) _Bool hasActionType;
@property (nonatomic) int actionType;
@property (retain, nonatomic) NSMutableArray *parameters;
@property (nonatomic, readonly) unsigned long long timeEstimatesCount;
@property (nonatomic, readonly) int *timeEstimates;
@property (nonatomic, readonly) unsigned long long sessionLengthsCount;
@property (nonatomic, readonly) int *sessionLengths;
@property (nonatomic, readonly) unsigned long long sessionIndexsCount;
@property (nonatomic, readonly) int *sessionIndexs;
@property (nonatomic) _Bool hasNoMatchCount;
@property (nonatomic) int noMatchCount;
@property (nonatomic, readonly) unsigned long long launchReasonsCount;
@property (nonatomic, readonly) int *launchReasons;

+ (Class)parameterType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)parametersCount;
- (id)actionTypeAsString:(int)arg1;
- (int)StringAsActionType:(id)arg1;
- (void)clearParameters;
- (void)addParameter:(id)arg1;
- (id)parameterAtIndex:(unsigned long long)arg1;
- (void)clearTimeEstimates;
- (void)addTimeEstimate:(int)arg1;
- (int)timeEstimateAtIndex:(unsigned long long)arg1;
- (void)setTimeEstimates:(int *)arg1 count:(unsigned long long)arg2;
- (void)clearSessionLengths;
- (void)addSessionLength:(int)arg1;
- (int)sessionLengthAtIndex:(unsigned long long)arg1;
- (void)setSessionLengths:(int *)arg1 count:(unsigned long long)arg2;
- (void)clearSessionIndexs;
- (void)addSessionIndex:(int)arg1;
- (int)sessionIndexAtIndex:(unsigned long long)arg1;
- (void)setSessionIndexs:(int *)arg1 count:(unsigned long long)arg2;
- (void)clearLaunchReasons;
- (void)addLaunchReason:(int)arg1;
- (int)launchReasonAtIndex:(unsigned long long)arg1;
- (void)setLaunchReasons:(int *)arg1 count:(unsigned long long)arg2;
- (id)launchReasonsAsString:(int)arg1;
- (int)StringAsLaunchReasons:(id)arg1;

@end
