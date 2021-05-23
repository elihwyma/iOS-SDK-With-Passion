/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IMPerfProfiler : NSObject

{
    NSMutableArray *_sinks;
}

+ (id)instance;

- (id)init;
- (void)dealloc;
- (void)addSink:(id)arg1 withBehavior:(id)arg2;
- (void)logMeasurement:(struct IMPerfMeasurement_t *)arg1;

@end
