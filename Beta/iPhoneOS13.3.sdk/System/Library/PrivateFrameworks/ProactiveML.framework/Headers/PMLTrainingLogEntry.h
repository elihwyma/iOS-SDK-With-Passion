/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@interface PMLTrainingLogEntry : NSObject

{
    double _timestamp;
    unsigned long long _serverIteration;
}

@property (readonly) double timestamp;
@property (readonly) unsigned long long serverIteration;

- (id)initWithTimestamp:(double)arg1 serverIteration:(unsigned long long)arg2;

@end
