/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SignpostFrameLatencyInterval, SignpostHIDLatencyInterval, SignpostRenderServerRenderInterval;

@interface SignpostFrameAccumulatedState : NSObject

{
    unsigned int _frameSeed;
    NSMutableDictionary *_contextIDtoContextInfoDict;
    SignpostRenderServerRenderInterval *_renderInterval;
    NSMutableDictionary *_frameSeedToSkippedRenderIntervals;
    SignpostHIDLatencyInterval *_hidLatency;
    SignpostFrameLatencyInterval *_frameLatency;
}

@property (nonatomic, readonly) unsigned int frameSeed;
@property (retain, nonatomic) NSMutableDictionary *contextIDtoContextInfoDict;
@property (retain, nonatomic) SignpostRenderServerRenderInterval *renderInterval;
@property (retain, nonatomic) NSMutableDictionary *frameSeedToSkippedRenderIntervals;
@property (retain, nonatomic) SignpostHIDLatencyInterval *hidLatency;
@property (retain, nonatomic) SignpostFrameLatencyInterval *frameLatency;

- (id)initWithFrameSeed:(unsigned int)arg1;
- (void)_addSkippedRender:(id)arg1;

@end
