/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/CMStrideCalibrationEntry.h>

@interface CMStrideCalibrationEntryInternal : CMStrideCalibrationEntry

@property (nonatomic, readonly) unsigned int pacebin;
@property (nonatomic, readonly) double kvalue;
@property (nonatomic, readonly) double kvalueTrack;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) int session;

- (id)description;

@end
