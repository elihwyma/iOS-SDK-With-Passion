/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@protocol OS_dispatch_queue, VCAggregatorDelegate;

__attribute__((visibility("hidden")))
@interface VCAggregator : NSObject

{
    int _interval;
    int _frequency;
    NSString *_localInterfaceType;
    NSString *_connectionType;
    unsigned int _switchIntoDupCount;
    unsigned int _direction;
    NSNumber *_streamToken;
    NSString *_sessionID;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id <VCAggregatorDelegate> _delegate;
    CDUnknownBlockType _periodicAggregationOccuredHandler;
}

@property (readonly) id <VCAggregatorDelegate> delegate;
@property (readonly) unsigned int direction;
@property (readonly) NSNumber *streamToken;
@property (readonly) NSString *sessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;
- (unsigned int)RTPeriod;
- (int)initialSettledBitrate;
- (int)previousISBRForSegment:(id)arg1;
- (int)adaptiveLearningState;
- (void)updateSegment:(id)arg1 TBR:(int)arg2 ISBTR:(int)arg3 SATXBR:(int)arg4 SARBR:(int)arg5 BWE:(int)arg6;
- (int)shortTermAverageTBRForSegment:(id)arg1;
- (int)longTermAverageTBRForSegment:(id)arg1;
- (int)longTermAverageISBRForSegment:(id)arg1;
- (int)shortTermAverageISBRForSegment:(id)arg1;
- (int)longTermAverageSATXBRForSegment:(id)arg1;
- (int)shortTermAverageSATXBRForSegment:(id)arg1;
- (int)longTermAverageSARBRForSegment:(id)arg1;
- (int)shortTermAverageSARBRForSegment:(id)arg1;
- (int)longTermAverageBWEForSegment:(id)arg1;
- (int)shortTermAverageBWEForSegment:(id)arg1;
- (void)saveCallSegmentHistory;
- (id)aggregatedSegmentReport:(int)arg1;
- (id)aggregatedSegmentQRReport;
- (void)flushCurrentSegment;
- (_Bool)didUpdateStringFrom:(id *)arg1 toString:(id)arg2;
- (void)processEventWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3;
- (void)initAdaptiveLearningWithParameters:(id)arg1;
- (id)aggregatedCallReports;
- (id)aggregatedSessionReport;
- (void)setPeriodicAggregationOccuredHandler:(CDUnknownBlockType)arg1;

@end
