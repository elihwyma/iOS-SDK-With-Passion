/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSString, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface _UIPrintMessageAndSpinnerView : UIView

{
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
    NSArray *_currentHorizontalConstraints;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) NSArray *currentHorizontalConstraints;
@property (retain, nonatomic) NSString *messageText;
@property (nonatomic) _Bool spinSpinner;
@property (nonatomic) _Bool spinnerHidden;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)updateFont;

@end
