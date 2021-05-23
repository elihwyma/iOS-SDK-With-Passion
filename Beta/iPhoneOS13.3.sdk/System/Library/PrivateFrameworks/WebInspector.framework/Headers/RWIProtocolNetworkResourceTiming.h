/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolNetworkResourceTiming : RWIProtocolJSONObject

@property (nonatomic) double startTime;
@property (nonatomic) double redirectStart;
@property (nonatomic) double redirectEnd;
@property (nonatomic) double fetchStart;
@property (nonatomic) double domainLookupStart;
@property (nonatomic) double domainLookupEnd;
@property (nonatomic) double connectStart;
@property (nonatomic) double connectEnd;
@property (nonatomic) double secureConnectionStart;
@property (nonatomic) double requestStart;
@property (nonatomic) double responseStart;
@property (nonatomic) double responseEnd;

- (id)initWithStartTime:(double)arg1 redirectStart:(double)arg2 redirectEnd:(double)arg3 fetchStart:(double)arg4 domainLookupStart:(double)arg5 domainLookupEnd:(double)arg6 connectStart:(double)arg7 connectEnd:(double)arg8 secureConnectionStart:(double)arg9 requestStart:(double)arg10 responseStart:(double)arg11 responseEnd:(double)arg12;

@end
