/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol HKPPTInterface, OS_dispatch_queue;

@interface HKPPT : NSObject

{
    id <HKPPTInterface> _pptInterface;
    NSObject<OS_dispatch_queue> *_pptQueue;
    NSMutableDictionary *_activeTestsByName;
}

- (id)init;
- (void)dealloc;
- (void)startedTest:(id)arg1;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (id)builtinTests;
- (void)failedTest:(id)arg1 results:(id)arg2 error:(id)arg3;
- (id)_testNameForDriver:(id)arg1;
- (void)_startedTest:(id)arg1;
- (void)_failedTest:(id)arg1 withResults:(id)arg2;
- (void)_failedTest:(id)arg1;
- (void)_finishedTest:(id)arg1 extraResults:(id)arg2;
- (void)_finishedTest:(id)arg1;
- (void)invalidConfigurationForTest:(id)arg1 error:(id)arg2;
- (id)initWithHKPPTInterface:(id)arg1 usingQueue:(id)arg2;

@end
