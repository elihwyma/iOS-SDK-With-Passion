/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class IMRuntimeTestRun;

@interface IMRuntimeTest : NSObject

{
    IMRuntimeTestRun *_testRun;
    CDUnknownBlockType _completion;
}

@property (retain) IMRuntimeTestRun *testRun;
@property (copy) CDUnknownBlockType completion;

+ (id)testName;
+ (id)logHandle;
+ (void)testLog:(id)arg1;

- (id)testName;
- (void)tearDown;
- (void)setUp;
- (void)dispatchAfter:(double)arg1 block:(CDUnknownBlockType)arg2;
- (Class)testRunClass;
- (id)logHandle;
- (void)testLog:(id)arg1;
- (void)startTest;
- (void)finishTest;
- (void)runTest:(CDUnknownBlockType)arg1;
- (void)finishTestAfterInterval:(double)arg1;

@end
