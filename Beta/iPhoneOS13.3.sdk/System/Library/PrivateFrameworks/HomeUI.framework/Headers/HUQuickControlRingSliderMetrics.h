/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HUIntrinsicSizeDescriptor;

@interface HUQuickControlRingSliderMetrics : NSObject

{
    HUIntrinsicSizeDescriptor *_sizeDescriptor;
    double _outerRadius;
}

@property (nonatomic, readonly) HUIntrinsicSizeDescriptor *sizeDescriptor;
@property (nonatomic, readonly) double outerRadius;

- (id)initWithSizeDescriptor:(id)arg1 outerRadius:(double)arg2;

@end
