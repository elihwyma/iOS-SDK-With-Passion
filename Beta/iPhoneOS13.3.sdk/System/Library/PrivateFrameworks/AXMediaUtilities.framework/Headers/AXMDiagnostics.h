/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@protocol OS_dispatch_queue;

@interface AXMDiagnostics : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_diagnosticMetrics;
    NSMutableArray *_queue_visionObservations;
    _Bool _diagnosticsEnabled;
}

@property (nonatomic) _Bool diagnosticsEnabled;
@property (copy, nonatomic, readonly) NSArray *metrics;
@property (copy, nonatomic, readonly) NSArray *visionObservations;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(CDUnknownBlockType)arg3;
- (void)addMetric:(id)arg1;
- (id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(CDUnknownBlockType)arg3 signpostStartBlock:(CDUnknownBlockType)arg4 signpostEndBlock:(CDUnknownBlockType)arg5;
- (void)clearMetrics;
- (id)startMeasurement:(long long)arg1 name:(id)arg2;
- (void)appendVisionObservations:(id)arg1;

@end
