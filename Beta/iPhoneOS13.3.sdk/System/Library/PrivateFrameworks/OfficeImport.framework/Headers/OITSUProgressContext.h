/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDate, OITSUProgressStage;

__attribute__((visibility("hidden")))
@interface OITSUProgressContext : NSObject

{
    OITSUProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    double m_lastProgressReport;
    double m_lastOverallProgress;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (void)reset;
- (void)setMessage:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)removeProgressObserver:(id)arg1;
- (double)currentPosition;
- (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
- (id)currentStage;
- (void)advanceProgress:(double)arg1;
- (double)overallProgress;
- (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
- (id)addProgressObserverBlock:(CDUnknownBlockType)arg1;
- (void)createStageWithSteps:(double)arg1;
- (void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1;
- (void)endStage;
- (void)setPercentageProgressFromTCProgressContext:(double)arg1;
- (void)reportProgress:(double)arg1 overallProgress:(double)arg2;

@end
