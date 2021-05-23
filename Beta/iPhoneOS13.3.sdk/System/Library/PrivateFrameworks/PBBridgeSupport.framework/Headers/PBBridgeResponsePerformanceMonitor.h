/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableString;

@interface PBBridgeResponsePerformanceMonitor : NSObject

{
    NSMutableArray *_measurements;
    NSMutableDictionary *_milestones;
    NSMutableDictionary *_macroActivities;
    NSArray *_remoteMeasurements;
    NSDictionary *_remoteMilestones;
    NSDictionary *_remoteMacroActivities;
    NSMutableString *_logBuffer;
}

@property (retain, nonatomic) NSMutableString *logBuffer;
@property (nonatomic, readonly) NSMutableArray *measurements;
@property (nonatomic, readonly) NSMutableDictionary *milestones;
@property (nonatomic, readonly) NSMutableDictionary *macroActivities;
@property (retain, nonatomic) NSArray *remoteMeasurements;
@property (retain, nonatomic) NSDictionary *remoteMilestones;
@property (retain, nonatomic) NSDictionary *remoteMacroActivities;

+ (id)shareMonitor;

- (void)_logMeasurements;
- (void)_logMacroActivitiesLocal:(_Bool)arg1;
- (void)_logMilestones;
- (void)_logLocalMeasurements:(_Bool)arg1;
- (void)beginMonitorTransaction;
- (void)endMonitorTransaction;
- (void)addMeasurement:(double)arg1 timeSent:(double)arg2 activityType:(id)arg3 activityIdentifier:(id)arg4;
- (void)addMilestone:(double)arg1 activityType:(id)arg2 activityIdentifier:(id)arg3;
- (void)beginMacroActivity:(id)arg1 beginTime:(double)arg2;
- (double)endMacroActivity:(id)arg1 beginTime:(double)arg2;

@end
