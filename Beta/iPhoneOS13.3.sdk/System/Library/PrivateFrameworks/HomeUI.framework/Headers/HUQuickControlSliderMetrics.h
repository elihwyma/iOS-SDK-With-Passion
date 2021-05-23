/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HUIntrinsicSizeDescriptor;

@interface HUQuickControlSliderMetrics : NSObject

{
    HUIntrinsicSizeDescriptor *_sizeDescriptor;
    double _cornerRadius;
    double _widthToCornerRadiusRatio;
}

@property (nonatomic, readonly) HUIntrinsicSizeDescriptor *sizeDescriptor;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) double widthToCornerRadiusRatio;

- (id)initWithSizeDescriptor:(id)arg1 cornerRadius:(double)arg2 widthToCornerRadiusRatio:(double)arg3;

@end
