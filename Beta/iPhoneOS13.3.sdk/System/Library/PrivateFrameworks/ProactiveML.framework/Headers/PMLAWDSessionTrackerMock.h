/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProactiveML/PMLAWDSessionTracker.h>

@class NSArray, NSMutableArray;

@interface PMLAWDSessionTrackerMock : PMLAWDSessionTracker

{
    NSMutableArray *_internalTrackedSessions;
    NSArray *_trackedSessions;
}

@property (readonly) NSArray *trackedSessions;

- (id)initWithModel:(id)arg1;
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;
- (void)clearTrackedSessions;

@end
