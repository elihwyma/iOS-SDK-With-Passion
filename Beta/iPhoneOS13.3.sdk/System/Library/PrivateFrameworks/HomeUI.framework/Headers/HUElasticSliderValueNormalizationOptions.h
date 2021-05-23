/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@interface HUElasticSliderValueNormalizationOptions : NSObject

{
    _Bool _applyStepValue;
    _Bool _applyMinimumVisualRangeSpan;
    unsigned long long _boundingStrategy;
}

@property (nonatomic) unsigned long long boundingStrategy;
@property (nonatomic) _Bool applyStepValue;
@property (nonatomic) _Bool applyMinimumVisualRangeSpan;

- (id)init;

@end
