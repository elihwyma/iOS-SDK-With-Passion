/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSError, NSString;

@interface _MRPlaybackSessionMigrateRequestEventProtobuf : PBCodable

{
    double _duration;
    double _endTimestamp;
    long long _errorCode;
    double _startTimestamp;
    NSString *_errorDescription;
    NSString *_name;
    struct {
        unsigned int duration:1;
        unsigned int endTimestamp:1;
        unsigned int errorCode:1;
        unsigned int startTimestamp:1;
    } _has;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) _Bool hasStartTimestamp;
@property (nonatomic) double startTimestamp;
@property (nonatomic) _Bool hasEndTimestamp;
@property (nonatomic) double endTimestamp;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) long long errorCode;
@property (nonatomic, readonly) _Bool hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;

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
