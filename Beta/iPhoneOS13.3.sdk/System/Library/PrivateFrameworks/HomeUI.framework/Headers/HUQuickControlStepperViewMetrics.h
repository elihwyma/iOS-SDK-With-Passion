/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HUIntrinsicSizeDescriptor;

@interface HUQuickControlStepperViewMetrics : NSObject

{
    HUIntrinsicSizeDescriptor *_sizeDescriptor;
    unsigned long long _orientation;
    double _cornerRadius;
}

@property (nonatomic, readonly) HUIntrinsicSizeDescriptor *sizeDescriptor;
@property (nonatomic, readonly) unsigned long long orientation;
@property (nonatomic, readonly) double cornerRadius;

- (id)initWithSizeDescriptor:(id)arg1 orientation:(unsigned long long)arg2 cornerRadius:(double)arg3;

@end
