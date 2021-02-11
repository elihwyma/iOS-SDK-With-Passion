/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARRenderStats : NSObject {
    bool  _composited;
    double  _renderEnd;
    double  _renderEndCPU;
    double  _renderEndEstimate;
    double  _renderStart;
    double  _renderTime;
    double  _renderTimeCPU;
    unsigned long long  _vsyncCount;
    double  _vsyncEnd;
    double  _vsyncStart;
    double  _vsyncTime;
    double  _vsyncTimeActual;
}

@property (getter=isComposited, nonatomic, readonly) bool composited;
@property (nonatomic, readonly) double renderEnd;
@property (nonatomic, readonly) double renderEndCPU;
@property (nonatomic) double renderEndEstimate;
@property (nonatomic, readonly) double renderStart;
@property (nonatomic, readonly) double renderTime;
@property (nonatomic, readonly) double renderTimeCPU;
@property (nonatomic, readonly) unsigned long long vsyncCount;
@property (nonatomic, readonly) double vsyncEnd;
@property (nonatomic, readonly) double vsyncStart;
@property (nonatomic, readonly) double vsyncTime;
@property (nonatomic, readonly) double vsyncTimeActual;

- (id)description;
- (void)endRender;
- (void)endRenderCPU;
- (bool)isComposited;
- (void)renderComposited;
- (double)renderEnd;
- (double)renderEndCPU;
- (double)renderEndEstimate;
- (double)renderStart;
- (double)renderTime;
- (double)renderTimeCPU;
- (void)setRenderEndEstimate:(double)arg1;
- (void)startRender;
- (void)tickRender:(id)arg1;
- (unsigned long long)vsyncCount;
- (double)vsyncEnd;
- (double)vsyncStart;
- (double)vsyncTime;
- (double)vsyncTimeActual;

@end