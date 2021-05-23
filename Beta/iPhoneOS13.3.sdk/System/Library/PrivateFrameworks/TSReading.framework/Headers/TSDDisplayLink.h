/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class CADisplayLink;

@interface TSDDisplayLink : NSObject

{
    CADisplayLink *_displayLink;
    CDUnknownBlockType _tickBlock;
    CDUnknownBlockType _completionBlock;
    double _startTime;
    double _lastTime;
}

@property (nonatomic) double startTime;
@property (nonatomic) double lastTime;
@property (copy, nonatomic) CDUnknownBlockType tickBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;

- (void)dealloc;
- (void)start;
- (void)teardown;
- (void)p_handleDisplayLink:(id)arg1;

@end
