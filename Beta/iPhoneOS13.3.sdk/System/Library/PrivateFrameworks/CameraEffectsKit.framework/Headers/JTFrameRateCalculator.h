/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@protocol OS_dispatch_queue;

@interface JTFrameRateCalculator : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    unsigned long long _receivedRenderCount;
    unsigned long long _droppedRenderCount;
    unsigned long long _receivedDisplayFrameCount;
    unsigned long long _droppedDisplayFrameCount;
    double _windowSize;
    NSDate *_stateDate;
}

@property (nonatomic) unsigned long long receivedRenderCount;
@property (nonatomic) unsigned long long droppedRenderCount;
@property (nonatomic) unsigned long long receivedDisplayFrameCount;
@property (nonatomic) unsigned long long droppedDisplayFrameCount;
@property (nonatomic) double windowSize;
@property (retain, nonatomic) NSDate *stateDate;
@property (copy, nonatomic) NSString *name;

- (void)log:(CDUnknownBlockType)arg1;
- (id)initWithWindowSize:(double)arg1;
- (void)JT_restart;
- (void)tickReceived;
- (void)tickDropped;
- (void)tickFrameReceived;
- (void)tickDroppedDisplay;

@end
