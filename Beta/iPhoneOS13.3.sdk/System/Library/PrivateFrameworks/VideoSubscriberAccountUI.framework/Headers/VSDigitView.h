/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface VSDigitView : UIView

{
    UILabel *_label;
}

@property (retain, nonatomic) UILabel *label;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end
