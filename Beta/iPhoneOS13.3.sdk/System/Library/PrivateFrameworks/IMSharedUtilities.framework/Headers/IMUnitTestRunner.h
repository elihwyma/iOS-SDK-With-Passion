/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class IMUnitTestBundleLoader, IMUnitTestFrameworkLoader, IMUnitTestLogger, NSArray, NSMutableArray, NSString;

@protocol IMUnitTestRunnerDelegate;

@interface IMUnitTestRunner : NSObject

{
    NSMutableArray *_failedTests;
    id <IMUnitTestRunnerDelegate> _delegate;
    IMUnitTestBundleLoader *_bundleLoader;
    IMUnitTestLogger *_logger;
    IMUnitTestFrameworkLoader *_frameworkLoader;
}

@property (weak) id <IMUnitTestRunnerDelegate> delegate;
@property (readonly) IMUnitTestBundleLoader *bundleLoader;
@property (readonly) IMUnitTestLogger *logger;
@property (readonly) IMUnitTestFrameworkLoader *frameworkLoader;
@property (readonly) NSArray *failedTests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)log:(id)arg1;
- (id)dateFormatter;
- (id)initWithLogger:(id)arg1 bundleLoader:(id)arg2;
- (id)initWithLogger:(id)arg1 bundleLoader:(id)arg2 frameworkLoader:(id)arg3;
- (void)testLogWithFormat:(id)arg1;
- (_Bool)_loadFrameworksIfNeeded:(id *)arg1;
- (id)descriptionFromResult:(id)arg1;
- (id)runTestsInBundleAtPath:(id)arg1 error:(id *)arg2;
- (void)logBanner:(id)arg1;
- (id)pathToPluginBundle:(id)arg1;
- (void)testSuiteWillStart:(id)arg1;
- (void)testSuite:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testSuiteDidFinish:(id)arg1;
- (void)testCaseWillStart:(id)arg1;
- (void)testCase:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testCaseDidFinish:(id)arg1;
- (long long)runTestsInBundleAtPath:(id)arg1;
- (id)runTestsInBundleNamed:(id)arg1 error:(id *)arg2;

@end
