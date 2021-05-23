/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <WebInspector/RWIProtocolNetworkResourceTiming.h>

@interface RWIProtocolNetworkResourceTiming (IKJSInspector)

+ (id)safe_initWithStartTime:(double)arg1 redirectStart:(double)arg2 redirectEnd:(double)arg3 fetchStart:(double)arg4 domainLookupStart:(double)arg5 domainLookupEnd:(double)arg6 connectStart:(double)arg7 connectEnd:(double)arg8 secureConnectionStart:(double)arg9 requestStart:(double)arg10 responseStart:(double)arg11 responseEnd:(double)arg12;
+ (id)ik_networkResourceTimingFromData:(id)arg1 referenceStartDate:(id)arg2;

@end
