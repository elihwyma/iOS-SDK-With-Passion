/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSNumber, NSString;

@interface GEOUserSessionEntity : NSObject

{
    struct GEOSessionID _sessionID;
    unsigned int _sequenceNumber;
    double _sessionCreationTime;
    double _sessionRelativeTimestamp;
}

@property (nonatomic, readonly) struct GEOSessionID sessionID;
@property (nonatomic, readonly) unsigned int sequenceNumber;
@property (nonatomic) double sessionCreationTime;
@property (nonatomic, readonly) double sessionRelativeTimestamp;
@property (nonatomic, readonly) NSString *sessionEntityString;
@property (nonatomic, readonly) NSString *sessionIDString;
@property (nonatomic, readonly) NSString *sessionUUIDString;
@property (nonatomic, readonly) NSNumber *sessionIDLow;
@property (nonatomic, readonly) NSNumber *sessionIDHigh;
@property (nonatomic, readonly) NSString *sessionIDLowString;
@property (nonatomic, readonly) NSString *sessionIDHighString;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithSessionEntityString:(id)arg1;
- (id)initWithSessionID:(struct GEOSessionID)arg1 sessionCreationTime:(double)arg2 sequenceNumber:(unsigned int)arg3;
- (id)initWithSessionEntityString:(id)arg1;
- (double)sessionRelativeTimestampForEventTime:(double)arg1;
- (_Bool)_isValidSessionIDHighOrLowString:(id)arg1;
- (void)updateSessionIDFromUUIDString:(id)arg1;

@end
