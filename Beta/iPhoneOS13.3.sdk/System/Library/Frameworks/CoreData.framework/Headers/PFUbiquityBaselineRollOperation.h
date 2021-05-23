/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFUbiquityBaselineOperation.h>

@class NSObject, PFUbiquityBaselineHeuristics;

@protocol PFUbiquityBaselineRollOperationDelegate;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation

{
    PFUbiquityBaselineHeuristics *_heuristics;
}

@property NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)main;
- (id)retainedDelegate;
- (_Bool)haveConsistentStateForBaselineRoll;
- (_Bool)rollBaselineWithError:(id *)arg1;

@end
