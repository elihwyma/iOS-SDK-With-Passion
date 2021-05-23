/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDAWDHealthKitWorkoutCondenserEvent : PBCodable <Swift>

{
    long long _batchSize;
    long long _condensedWorkouts;
    long long _createdSeries;
    long long _deletedSamples;
    unsigned long long _duration;
    unsigned long long _errorCode;
    long long _processedWorkouts;
    unsigned long long _timestamp;
    unsigned long long _underlyingErrorCode;
    long long _workoutsToCondense;
    long long _workoutsToRecondense;
    NSString *_errorDomain;
    int _reason;
    NSString *_underlyingErrorDomain;
    _Bool _hasWatchSource;
    _Bool _success;
    struct {
        unsigned int batchSize:1;
        unsigned int condensedWorkouts:1;
        unsigned int createdSeries:1;
        unsigned int deletedSamples:1;
        unsigned int duration:1;
        unsigned int errorCode:1;
        unsigned int processedWorkouts:1;
        unsigned int timestamp:1;
        unsigned int underlyingErrorCode:1;
        unsigned int workoutsToCondense:1;
        unsigned int workoutsToRecondense:1;
        unsigned int reason:1;
        unsigned int hasWatchSource:1;
        unsigned int success:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasReason;
@property (nonatomic) int reason;
@property (nonatomic) _Bool hasBatchSize;
@property (nonatomic) long long batchSize;
@property (nonatomic) _Bool hasHasWatchSource;
@property (nonatomic) _Bool hasWatchSource;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) _Bool hasSuccess;
@property (nonatomic) _Bool success;
@property (nonatomic, readonly) _Bool hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) unsigned long long errorCode;
@property (nonatomic, readonly) _Bool hasUnderlyingErrorDomain;
@property (retain, nonatomic) NSString *underlyingErrorDomain;
@property (nonatomic) _Bool hasUnderlyingErrorCode;
@property (nonatomic) unsigned long long underlyingErrorCode;
@property (nonatomic) _Bool hasWorkoutsToCondense;
@property (nonatomic) long long workoutsToCondense;
@property (nonatomic) _Bool hasWorkoutsToRecondense;
@property (nonatomic) long long workoutsToRecondense;
@property (nonatomic) _Bool hasCondensedWorkouts;
@property (nonatomic) long long condensedWorkouts;
@property (nonatomic) _Bool hasProcessedWorkouts;
@property (nonatomic) long long processedWorkouts;
@property (nonatomic) _Bool hasCreatedSeries;
@property (nonatomic) long long createdSeries;
@property (nonatomic) _Bool hasDeletedSamples;
@property (nonatomic) long long deletedSamples;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)reasonAsString:(int)arg1;
- (int)StringAsReason:(id)arg1;

@end
