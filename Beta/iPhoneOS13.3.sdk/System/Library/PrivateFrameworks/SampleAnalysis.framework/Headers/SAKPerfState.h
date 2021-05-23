/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class SATimestamp;

__attribute__((visibility("hidden")))
@interface SAKPerfState : NSObject

{
    unsigned long long _onCore;
    _Bool _mostRecentSampleIsPET;
    struct ktrace_session *_session;
    SATimestamp *_mostRecentSampleTimestamp;
}

@property (readonly) struct ktrace_session *session;
@property (retain) SATimestamp *mostRecentSampleTimestamp;
@property _Bool mostRecentSampleIsPET;

+ (id)kperfStateWithSession:(struct ktrace_session *)arg1;

- (id)initWithSession:(struct ktrace_session *)arg1;
- (void)nextSampleForCpu:(unsigned int)arg1 isOnCore:(_Bool)arg2;
- (_Bool)isNextSampleisOnCoreForCpu:(unsigned int)arg1;

@end
