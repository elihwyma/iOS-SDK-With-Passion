/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <UIKit/UIView.h>

@class REAccessoryDescription, UILabel, UIVisualEffectView;

@interface REUpNextAccessoryView : UIView

{
    REAccessoryDescription *_accessoryDescription;
    UILabel *_label;
    UIVisualEffectView *_labelEffectView;
}

+ (void)initialize;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTextColor:(id)arg1;
- (id)viewForLastBaselineLayout;
- (id)primaryEffectViews;
- (id)secondaryEffectViews;
- (void)configureWithDescription:(id)arg1;

@end
