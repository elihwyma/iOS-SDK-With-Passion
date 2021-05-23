/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDAWDHealthKitCloudSyncEvent, NSString;

@interface HDAWDHealthKitCloudSyncEndEvent : PBCodable <Swift>

{
    unsigned long long _countSinceLastSuccess;
    unsigned long long _duration;
    unsigned long long _errorCode;
    unsigned long long _timeSinceLastSuccess;
    unsigned long long _timestamp;
    unsigned long long _underlyingErrorCode;
    NSString *_errorDomain;
    HDAWDHealthKitCloudSyncEvent *_event;
    int _result;
    NSString *_underlyingErrorDomain;
    struct {
        unsigned int countSinceLastSuccess:1;
        unsigned int duration:1;
        unsigned int errorCode:1;
        unsigned int timeSinceLastSuccess:1;
        unsigned int timestamp:1;
        unsigned int underlyingErrorCode:1;
        unsigned int result:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasEvent;
@property (retain, nonatomic) HDAWDHealthKitCloudSyncEvent *event;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) _Bool hasResult;
@property (nonatomic) int result;
@property (nonatomic) _Bool hasCountSinceLastSuccess;
@property (nonatomic) unsigned long long countSinceLastSuccess;
@property (nonatomic) _Bool hasTimeSinceLastSuccess;
@property (nonatomic) unsigned long long timeSinceLastSuccess;
@property (nonatomic, readonly) _Bool hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) unsigned long long errorCode;
@property (nonatomic, readonly) _Bool hasUnderlyingErrorDomain;
@property (retain, nonatomic) NSString *underlyingErrorDomain;
@property (nonatomic) _Bool hasUnderlyingErrorCode;
@property (nonatomic) unsigned long long underlyingErrorCode;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)resultAsString:(int)arg1;
- (int)StringAsResult:(id)arg1;

@end
