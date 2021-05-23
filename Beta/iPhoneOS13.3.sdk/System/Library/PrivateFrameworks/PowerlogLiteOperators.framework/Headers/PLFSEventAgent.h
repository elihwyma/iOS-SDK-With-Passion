/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class PLXPCResponderOperatorComposition;

@interface PLFSEventAgent : PLAgent

{
    PLXPCResponderOperatorComposition *_fileListResponder;
    struct __FSEventStream *_stream;
}

@property (retain) PLXPCResponderOperatorComposition *fileListResponder;
@property struct __FSEventStream *stream;

+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;

- (id)init;
- (void)dealloc;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)initOperatorDependancies;
- (void)registerforFSEventNotification;
- (void)addLogFileNameEntry:(_Bool)arg1 withType:(id)arg2 withName:(id)arg3;
- (void)logLogFileName:(id)arg1 withName:(id)arg2;

@end
