/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface LargerSizesHelpTextView : UIView

{
    UILabel *_helpLabel;
}

- (void)layoutSubviews;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)layoutForWidth:(double)arg1 inTableView:(id)arg2;

@end
