/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMDiagnostics.h>

@interface AXMInertDiagnostics : AXMDiagnostics

+ (id)sharedInstance;
+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)metrics;
- (id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(CDUnknownBlockType)arg3;
- (void)setDiagnosticsEnabled:(_Bool)arg1;
- (_Bool)diagnosticsEnabled;
- (void)addMetric:(id)arg1;
- (void)clearMetrics;
- (id)startMeasurement:(long long)arg1 name:(id)arg2;
- (void)appendVisionObservations:(id)arg1;
- (id)visionObservations;

@end
