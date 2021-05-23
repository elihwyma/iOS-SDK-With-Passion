/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class AWDLibnetcoreStatsReport, NSString, NWStatisticsManager, mbufRecord;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface KernelStatisticsHandler : NSObject

{
    unsigned int _coalescedReportPending;
    NWStatisticsManager *_nwStatManager;
    NSObject<OS_dispatch_queue> *_queue;
    AWDLibnetcoreStatsReport *_kernelStatisticsReport;
    mbufRecord *_lastReport;
}

@property (retain) NWStatisticsManager *nwStatManager;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) AWDLibnetcoreStatsReport *kernelStatisticsReport;
@property (retain) mbufRecord *lastReport;
@property unsigned int coalescedReportPending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)arg1;

- (id)init;
- (void)statisticsManager:(id)arg1 didReceiveDirectSystemInformation:(id)arg2;
- (int)configureInstance:(id)arg1;
- (int)read:(id)arg1 returnedValues:(id)arg2;
- (void)coalescedReport;

@end
