/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <PowerlogFullOperators/PLAWDAuxMetrics.h>

@class NSDate, PLEntryNotificationOperatorComposition;

@interface PLAWDAudio : PLAWDAuxMetrics

{
    PLEntryNotificationOperatorComposition *_audioRailCallback;
    NSDate *_startTime;
}

@property (retain) PLEntryNotificationOperatorComposition *audioRailCallback;
@property (retain) NSDate *startTime;

+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;
+ (id)entryAggregateDefinitionAwdAudio;

- (void)startMetricCollection:(id)arg1;
- (void)stopMetricCollection:(id)arg1;
- (_Bool)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (void)resetAudioTable;
- (void)finalizeAudioTable;
- (void)handleAudioRailCallback:(id)arg1;

@end
