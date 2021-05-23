/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <CoreMotion/CMNatalimeter.h>

@interface HDTMockCMNatalimeter : CMNatalimeter

{
    CDUnknownBlockType _handleQueryDataSinceRecord;
    CDUnknownBlockType _handleStartNatalimetryUpdates;
    CDUnknownBlockType _handleStopNatalimeteryUpdates;
}

@property (copy, nonatomic) CDUnknownBlockType handleQueryDataSinceRecord;
@property (copy, nonatomic) CDUnknownBlockType handleStartNatalimetryUpdates;
@property (copy, nonatomic) CDUnknownBlockType handleStopNatalimeteryUpdates;

- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)stopAbsoluteNatalimetryDataUpdates;

@end
