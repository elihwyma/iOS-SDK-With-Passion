/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, OITSUProgressContext, TCProgressStage;

__attribute__((visibility("hidden")))
@interface TCProgressContext : NSObject

{
    OITSUProgressContext *m_parentProgressContext;
    TCProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    NSMutableArray *m_stackOfBranches;
}

+ (void)setMessage:(id)arg1;
+ (void)setProgress:(double)arg1;
+ (void)removeProgressObserver:(id)arg1;
+ (double)currentPosition;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
+ (void)advanceProgress:(double)arg1;
+ (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
+ (void)endStage;
+ (void)removeContextForCurrentThread;
+ (id)contextForCurrentThread;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;
+ (id)stageForCurrentThread;
+ (void)createContextForCurrentThreadWithParentContext:(id)arg1;
+ (id)createBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;
+ (void)endBranch:(id)arg1;
+ (void)pushBranch:(id)arg1;
+ (void)popBranch;
+ (void)advanceProgressInContext:(id)arg1 progress:(double)arg2;

- (void)dealloc;
- (void)reportProgress:(double)arg1;
- (id)initWithParentContext:(id)arg1;
- (id)currentStage;
- (id)rootStage;

@end
