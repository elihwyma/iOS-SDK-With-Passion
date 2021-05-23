/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface _TVActivityView : UIView

{
    UIView *_activityView;
    UIView *_textView;
}

@property (retain, nonatomic) UIView *activityView;
@property (retain, nonatomic) UIView *textView;

- (void)layoutSubviews;

@end
