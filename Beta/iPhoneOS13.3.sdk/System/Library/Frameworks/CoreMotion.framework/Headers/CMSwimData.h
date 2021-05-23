/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSUUID;

@interface CMSwimData : NSObject

{
    unsigned long long fRecordId;
    NSUUID *fSourceId;
    NSUUID *fSessionId;
    NSDate *fStartDate;
    NSDate *fEndDate;
    unsigned long long fStrokeCount;
    double fDistance;
    double fAvgPace;
    unsigned long long fLapCount;
    long long fStrokeType;
    unsigned long long fSegment;
}

@property (nonatomic, readonly) unsigned long long recordId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSUUID *sessionId;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long strokeCount;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) double avgPace;
@property (nonatomic, readonly) unsigned long long lapCount;
@property (nonatomic, readonly) long long strokeType;
@property (nonatomic, readonly) unsigned long long segment;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)maxSwimDataEntries;
+ (id)strokeTypeName:(long long)arg1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 sessionId:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 strokeCount:(unsigned long long)arg6 distance:(double)arg7 avgPace:(double)arg8 lapCount:(unsigned long long)arg9 strokeType:(long long)arg10 segment:(unsigned long long)arg11;
- (void)convertToSwimEntry:(struct CLSwimEntry *)arg1;
- (id)initWithSwimEntry:(const struct CLSwimEntry *)arg1;

@end
