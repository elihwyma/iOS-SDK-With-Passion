/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NURenderJobStatistics : NSObject

{
    double _requestTime;
    double _willPrepareTime;
    double _didPrepareTime;
    double _willRenderTime;
    double _didRenderTime;
    double _willCompleteTime;
    double _didCompleteTime;
    double _responseTime;
    NSArray *_dependencies;
}

@property double requestTime;
@property double willPrepareTime;
@property double didPrepareTime;
@property double willRenderTime;
@property double didRenderTime;
@property double willCompleteTime;
@property double didCompleteTime;
@property double responseTime;
@property (copy) NSArray *dependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) double latency;
@property (readonly) double duration;
@property (readonly) double totalDuration;
@property (readonly) double prepareLatency;
@property (readonly) double prepareDuration;
@property (readonly) double renderLatency;
@property (readonly) double renderDuration;
@property (readonly) double completeLatency;
@property (readonly) double completeDuration;
@property (readonly) double replyLatency;

+ (id)aggregateStatistics:(id)arg1;

- (void)renderJob:(id)arg1 didRunStage:(long long)arg2;
- (void)renderJob:(id)arg1 willRunStage:(long long)arg2;

@end
