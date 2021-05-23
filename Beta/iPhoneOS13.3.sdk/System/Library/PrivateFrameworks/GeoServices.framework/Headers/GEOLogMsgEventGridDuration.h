/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOLogMsgEventGridDuration : PBCodable

{
    NSMutableArray *_endStateErrorReasons;
    int _displayType;
    unsigned int _durationMs;
    int _endState;
    int _previousState;
    struct {
        unsigned int has_displayType:1;
        unsigned int has_durationMs:1;
        unsigned int has_endState:1;
        unsigned int has_previousState:1;
    } _flags;
}

@property (nonatomic) _Bool hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) _Bool hasEndState;
@property (nonatomic) int endState;
@property (retain, nonatomic) NSMutableArray *endStateErrorReasons;
@property (nonatomic) _Bool hasPreviousState;
@property (nonatomic) int previousState;
@property (nonatomic) _Bool hasDisplayType;
@property (nonatomic) int displayType;

+ (_Bool)isValid:(id)arg1;
+ (Class)endStateErrorReasonType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)endStateAsString:(int)arg1;
- (int)StringAsEndState:(id)arg1;
- (void)addEndStateErrorReason:(id)arg1;
- (unsigned long long)endStateErrorReasonsCount;
- (void)clearEndStateErrorReasons;
- (id)endStateErrorReasonAtIndex:(unsigned long long)arg1;
- (id)previousStateAsString:(int)arg1;
- (int)StringAsPreviousState:(id)arg1;
- (id)displayTypeAsString:(int)arg1;
- (int)StringAsDisplayType:(id)arg1;

@end
