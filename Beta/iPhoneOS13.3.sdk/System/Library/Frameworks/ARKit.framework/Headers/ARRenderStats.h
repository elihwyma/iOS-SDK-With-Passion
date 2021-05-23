/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARRenderStats : NSObject

{
    _Bool _composited;
    unsigned long long _vsyncCount;
    double _vsyncStart;
    double _vsyncEnd;
    double _vsyncTime;
    double _vsyncTimeActual;
    double _renderStart;
    double _renderEndCPU;
    double _renderTimeCPU;
    double _renderEnd;
    double _renderTime;
    double _renderEndEstimate;
}

@property (nonatomic, readonly) unsigned long long vsyncCount;
@property (nonatomic, readonly) double vsyncStart;
@property (nonatomic, readonly) double vsyncEnd;
@property (nonatomic, readonly) double vsyncTime;
@property (nonatomic, readonly) double vsyncTimeActual;
@property (nonatomic, readonly) double renderStart;
@property (nonatomic, readonly) double renderEndCPU;
@property (nonatomic, readonly) double renderTimeCPU;
@property (nonatomic, readonly) double renderEnd;
@property (nonatomic, readonly) double renderTime;
@property (nonatomic, readonly, getter=isComposited) _Bool composited;
@property (nonatomic) double renderEndEstimate;

- (id)description;
- (void)renderComposited;
- (void)tickRender:(id)arg1;
- (void)startRender;
- (void)endRender;
- (void)endRenderCPU;

@end
