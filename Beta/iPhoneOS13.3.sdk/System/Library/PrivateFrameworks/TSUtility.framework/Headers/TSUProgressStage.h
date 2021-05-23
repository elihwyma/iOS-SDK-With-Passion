/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class TSUProgressContext;

@interface TSUProgressStage : NSObject

{
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    double m_startInParent;
    double m_nextSubStageParentSize;
    TSUProgressStage *m_parentStage;
    TSUProgressContext *m_context;
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
