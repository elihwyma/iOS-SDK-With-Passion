/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKAxisLabel, UIColor;

@interface HKAxisAnnotation : NSObject

{
    UIColor *_textColor;
    HKAxisLabel *_axisLabel;
}

@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) HKAxisLabel *axisLabel;

- (id)initWithAnnotation:(id)arg1 color:(id)arg2 position:(id)arg3;

@end
