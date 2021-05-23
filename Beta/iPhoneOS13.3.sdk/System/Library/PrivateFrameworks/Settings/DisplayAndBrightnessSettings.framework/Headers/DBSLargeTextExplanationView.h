/*
 Image: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
 */

#import <UIKit/UIView.h>

@class UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface DBSLargeTextExplanationView : UIView

{
    UILabel *_bodyExampleLabel;
    UITextView *_bodyExampleTextView;
}

- (void)layoutSubviews;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)layoutForWidth:(double)arg1 inTableView:(id)arg2;

@end
