/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CAMPerformanceTestHarness : NSObject

{
    NSString *_testName;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic, readonly) NSString *testName;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly, getter=isRunningTest) _Bool runningTest;

- (void)startTesting;
- (void)stopTesting;
- (void)startSubtestWithName:(id)arg1;
- (void)stopSubtestWithName:(id)arg1;
- (id)initWithTestName:(id)arg1;
- (void)failedTestwithReason:(id)arg1;

@end
