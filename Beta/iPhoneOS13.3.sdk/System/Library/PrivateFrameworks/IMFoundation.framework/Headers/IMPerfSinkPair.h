/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@protocol IMPerfProfilerBehavior, IMPerfProfilerSink;

@interface IMPerfSinkPair : NSObject

{
    id <IMPerfProfilerBehavior> _behavior;
    id <IMPerfProfilerSink> _sink;
}

@property (nonatomic, readonly) id <IMPerfProfilerBehavior> behavior;
@property (nonatomic, readonly) id <IMPerfProfilerSink> sink;

- (void)dealloc;
- (id)initWithBehavior:(id)arg1 sink:(id)arg2;

@end
