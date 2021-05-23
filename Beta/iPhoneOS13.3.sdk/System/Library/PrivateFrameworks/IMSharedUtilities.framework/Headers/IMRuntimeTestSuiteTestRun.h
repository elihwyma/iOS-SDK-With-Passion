/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/IMRuntimeTestRun.h>

@class NSArray, NSMutableArray;

@interface IMRuntimeTestSuiteTestRun : IMRuntimeTestRun

{
    NSMutableArray *_testRuns;
    NSArray *_testRun;
}

@property (copy, readonly) NSArray *testRuns;

- (id)init;
- (void)addTestRun:(id)arg1;

@end
