/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class ARUIRingsView, HKActivitySummary, UIImageView;

@interface HKSingleRingView : UIView

{
    ARUIRingsView *_ringView;
    UIImageView *_imageView;
    unsigned long long _type;
    HKActivitySummary *_activitySummary;
}

@property (nonatomic, readonly) unsigned long long type;
@property (retain, nonatomic) HKActivitySummary *activitySummary;

- (id)initWithType:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)setActivitySummary:(id)arg1 animated:(_Bool)arg2;

@end
