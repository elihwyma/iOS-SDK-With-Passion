/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, TCProgressContext;

__attribute__((visibility("hidden")))
@interface TCProgressStage : NSObject

{
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    NSString *m_name;
    TCProgressStage *m_parentStage;
    TCProgressContext *m_context;
}

- (void)dealloc;
- (void)end;
- (void)setProgress:(double)arg1;
- (double)currentPosition;
- (id)initRootStageInContext:(id)arg1;
- (id)parentStage;
- (void)advanceProgress:(double)arg1;
- (id)initWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4;
- (id)initBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4;

@end
