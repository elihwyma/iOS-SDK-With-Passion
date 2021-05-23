/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@interface AXUpdateElementVisualsCoalescer : NSObject

{
    double _threshold;
    double _progressInterval;
    CDUnknownBlockType _updateVisualsSequenceDidBeginHandler;
    CDUnknownBlockType _updateVisualsSequenceDidFinishHandler;
    CDUnknownBlockType _updateVisualsSequenceInProgressHandler;
    NSTimer *_timer;
    double _lastProgressTime;
}

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double lastProgressTime;
@property (nonatomic) double threshold;
@property (nonatomic) double progressInterval;
@property (copy, nonatomic) CDUnknownBlockType updateVisualsSequenceDidBeginHandler;
@property (copy, nonatomic) CDUnknownBlockType updateVisualsSequenceDidFinishHandler;
@property (copy, nonatomic) CDUnknownBlockType updateVisualsSequenceInProgressHandler;

- (id)init;
- (void)dealloc;
- (void)_timerDidFire:(id)arg1;
- (void)notifyUpdateElementVisualsEventDidOccur;

@end
