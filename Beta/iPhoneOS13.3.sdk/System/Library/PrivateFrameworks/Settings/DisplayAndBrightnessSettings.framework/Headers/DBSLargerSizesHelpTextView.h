/*
 Image: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
 */

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface DBSLargerSizesHelpTextView : UIView

{
    UILabel *_helpLabel;
}

- (void)layoutSubviews;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)layoutForWidth:(double)arg1 inTableView:(id)arg2;

@end
