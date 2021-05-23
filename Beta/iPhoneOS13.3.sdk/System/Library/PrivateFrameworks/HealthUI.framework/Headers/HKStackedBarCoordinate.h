/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKMinMaxCoordinate.h>

@class NSArray;

@interface HKStackedBarCoordinate : HKMinMaxCoordinate

{
    NSArray *_stackPoints;
}

@property (copy, nonatomic) NSArray *stackPoints;

- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithStackPoints:(id)arg1 userInfo:(id)arg2;

@end
