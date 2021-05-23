/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@interface _HDWorkoutCondenserBufferDatum : NSObject

{
    unsigned char _UUIDBytes[16];
    _Bool _isSeries;
    double _startTime;
    double _endTime;
    double _value;
}

@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) double value;
@property (nonatomic, readonly) _Bool isSeries;

- (id)init;
- (id)description;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2 value:(double)arg3 UUIDBytes:(unsigned char [16])arg4 series:(_Bool)arg5;
- (_Bool)shouldReplaceDatum:(id)arg1;

@end
