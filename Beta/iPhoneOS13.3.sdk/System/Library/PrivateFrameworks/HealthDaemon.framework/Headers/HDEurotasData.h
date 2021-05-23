/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@interface HDEurotasData : HDHealthServiceCharacteristic

{
    _Bool _hasHeartRate;
    _Bool _hasActiveEnergy;
    _Bool _hasTotalEnergy;
    _Bool _hasAverageHeartRate;
    unsigned short _heartRate;
    unsigned short _activeEnergy;
    unsigned short _totalEnergy;
    unsigned short _averageHeartRate;
}

@property (nonatomic, readonly) _Bool hasHeartRate;
@property (nonatomic, readonly) unsigned short heartRate;
@property (nonatomic, readonly) _Bool hasActiveEnergy;
@property (nonatomic, readonly) unsigned short activeEnergy;
@property (nonatomic, readonly) _Bool hasTotalEnergy;
@property (nonatomic, readonly) unsigned short totalEnergy;
@property (nonatomic, readonly) _Bool hasAverageHeartRate;
@property (nonatomic, readonly) unsigned short averageHeartRate;

+ (id)uuid;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)getBinaryValueWithError:(id *)arg1;
- (id)initForWriting;
- (void)addActiveEnergy:(unsigned short)arg1;
- (void)addTotalEnergy:(unsigned short)arg1;
- (void)addHeartRate:(unsigned short)arg1;
- (void)addAverageHeartRate:(unsigned short)arg1;
- (_Bool)_appendUInt16Value:(unsigned short)arg1 type:(unsigned char)arg2 toData:(char **)arg3 before:(const char *)arg4;

@end
