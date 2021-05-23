/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class AXMDiagnosticMetric, AXMDiagnostics;

@interface AXMDiagnosticMetricToken : NSObject

{
    AXMDiagnostics *_diagnostics;
    AXMDiagnosticMetric *_metric;
}

- (void)finish;

@end
