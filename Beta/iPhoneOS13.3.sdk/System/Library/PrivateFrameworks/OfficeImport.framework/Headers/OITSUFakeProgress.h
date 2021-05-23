/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OITSUBasicProgress.h>

@class NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUFakeProgress : OITSUBasicProgress

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _currentStage;
    unsigned long long _numberOfStages;
    _Bool _stopped;
}

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)p_slowlyAdvanceToNextStage;
- (id)initWithMaxValue:(double)arg1 numberOfStages:(unsigned long long)arg2;
- (void)advanceToStage:(unsigned long long)arg1;

@end
