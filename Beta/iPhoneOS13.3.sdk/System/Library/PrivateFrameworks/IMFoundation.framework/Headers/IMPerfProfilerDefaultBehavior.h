/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IMPerfProfilerDefaultBehavior : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)instance;

- (void)perfProfiler:(id)arg1 measurementDidFinish:(struct IMPerfMeasurement_t *)arg2 withSink:(id)arg3;

@end
