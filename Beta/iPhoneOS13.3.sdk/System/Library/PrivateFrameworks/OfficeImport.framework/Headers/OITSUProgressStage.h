/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OITSUProgressContext;

__attribute__((visibility("hidden")))
@interface OITSUProgressStage : NSObject

{
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    double m_startInParent;
    double m_nextSubStageParentSize;
    OITSUProgressStage *m_parentStage;
    OITSUProgressContext *m_context;
}

- (void)dealloc;
- (id)description;
- (void)end;
- (void)setProgress:(double)arg1;
- (double)currentPosition;
- (id)initRootStageInContext:(id)arg1;
- (id)initWithSteps:(double)arg1 takingSteps:(double)arg2 inContext:(id)arg3;
- (double)nextSubStageParentSize;
- (void)setNextSubStageParentSize:(double)arg1;
- (id)parentStage;
- (void)advanceProgress:(double)arg1;
- (void)setProgressPercentage:(double)arg1;
- (double)overallProgress;

@end
