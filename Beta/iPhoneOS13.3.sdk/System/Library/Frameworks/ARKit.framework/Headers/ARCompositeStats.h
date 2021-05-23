/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARCompositeStats : NSObject

{
    unsigned long long _vsyncCount;
    double _vsyncStart;
    double _vsyncEnd;
    double _vsyncTime;
    double _vsyncTimeActual;
    double _compositeStart;
    double _compositeEndCPU;
    double _compositeTimeCPU;
    double _compositeEnd;
    double _compositeTime;
    double _compositeStartTarget;
    double _compositeStartTargetTimeBeforeVsyncEnd;
    double _compositePresent;
}

@property (nonatomic, readonly) unsigned long long vsyncCount;
@property (nonatomic, readonly) double vsyncStart;
@property (nonatomic, readonly) double vsyncEnd;
@property (nonatomic, readonly) double vsyncTime;
@property (nonatomic, readonly) double vsyncTimeActual;
@property (nonatomic, readonly) double compositeStart;
@property (nonatomic, readonly) double compositeEndCPU;
@property (nonatomic, readonly) double compositeTimeCPU;
@property (nonatomic, readonly) double compositeEnd;
@property (nonatomic, readonly) double compositeTime;
@property (nonatomic) double compositeStartTarget;
@property (nonatomic) double compositeStartTargetTimeBeforeVsyncEnd;
@property (nonatomic) double compositePresent;

- (id)description;
- (void)startComposite;
- (void)endComposite:(double)arg1;
- (void)endCompositeCPU;
- (void)tickComposite:(id)arg1 vsyncCounter:(unsigned long long)arg2;

@end
