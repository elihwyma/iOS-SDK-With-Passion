/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@class NSArray;

@protocol NURenderStatistics <Swift>

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
@property (readonly) double requestTime;
@property (readonly) double responseTime;
@property (copy, readonly) NSArray *dependencies;

@end
