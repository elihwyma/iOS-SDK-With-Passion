/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/IMRuntimeTest.h>

@class NSArray, NSMutableArray, NSTimer;

@interface IMRuntimeTestSuite : IMRuntimeTest

{
    NSMutableArray *_tests;
    double _testSuiteStartDelay;
    double _testStartDelay;
    NSMutableArray *_runningTests;
    IMRuntimeTest *_currentTest;
    NSTimer *_timer;
}

@property (retain) NSArray *tests;
@property (retain) NSMutableArray *runningTests;
@property (retain) IMRuntimeTest *currentTest;
@property (weak) NSTimer *timer;
@property double testSuiteStartDelay;
@property double testStartDelay;

+ (void)runTestsIfNeededWithRepeatCount:(long long)arg1 withCount:(long long)arg2;
+ (void)runTestsIfNeededWithRepeatCount:(long long)arg1;

- (id)init;
- (void)startTest;
- (void)currentTestDidFinish;
- (void)_startNextTest;
- (void)_cancelTimer;
- (void)_timerExpired:(id)arg1;
- (void)addTest:(id)arg1;
- (void)removeTest:(id)arg1;

@end
