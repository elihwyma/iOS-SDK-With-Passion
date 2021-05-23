/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSMutableArray, NSNumber, NSString, PBCodable, PLAgent;

@interface PLICEBBHardwareMessage : NSObject

{
    NSNumber *_metricId;
    NSString *_metricData;
    NSNumber *_triggerId;
    NSData *_data;
    PBCodable *_pbc;
    NSMutableArray *_metricIdArr;
    NSMutableArray *_metricDataArr;
    NSNumber *_triggerCnt;
    NSNumber *_bbtimestamp;
    NSDate *_bbMonotonic;
    PLAgent *_logAgent;
}

@property (retain) NSNumber *metricId;
@property (retain) NSString *metricData;
@property (retain) NSNumber *triggerId;
@property (retain) NSData *data;
@property (retain) PBCodable *pbc;
@property (retain) NSMutableArray *metricIdArr;
@property (retain) NSMutableArray *metricDataArr;
@property (retain) NSNumber *triggerCnt;
@property (retain) NSNumber *bbtimestamp;
@property (retain) NSDate *bbMonotonic;
@property (retain) PLAgent *logAgent;

+ (id)entryEventBackwardDefinitionBBIcePeriodicMetrics;
+ (id)entryEventBackwardDefinitionBBIceEventMetrics;

- (id)init;
- (void)logBBIcePeriodicMetrics;
- (id)decodePayload:(id)arg1 forMetricId:(id)arg2;
- (void)addToListMetric:(id)arg1 payload:(id)arg2;
- (id)initEntryWithBBTS:(id)arg1 triggerId:(id)arg2 seqnum:(id)arg3 payload:(id)arg4 logAgent:(id)arg5;
- (void)logBBIceAperiodicMetrics;
- (void)duplexModeForClass:(id)arg1 forEntry:(id)arg2;
- (void)componentCarrierForClass:(id)arg1 forEntry:(id)arg2;
- (void)pdcchStateStatsFor:(id)arg1 forEntry:(id)arg2;
- (void)rrcModeHistForClass:(id)arg1 forEntry:(id)arg2;
- (void)cpcStatsForClass:(id)arg1 forEntry:(id)arg2;
- (void)protocolHistForClass:(id)arg1 forEntry:(id)arg2;
- (void)protocolPerStateForClass:(id)arg1 forEntry:(id)arg2;
- (void)protocolHist2ForClass:(id)arg1 forEntry:(id)arg2;
- (id)decodeEventPayload:(id)arg1 forMetricId:(id)arg2;

@end
