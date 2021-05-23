/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIKBTutorialSinglePageView : UIView

{
    _Bool _useAlertStyle;
    UIView *_visualDisplayView;
    UILabel *_textTitle;
    UILabel *_textBody;
}

@property (retain, nonatomic) UIView *visualDisplayView;
@property (retain, nonatomic) UILabel *textTitle;
@property (retain, nonatomic) UILabel *textBody;
@property (nonatomic) _Bool useAlertStyle;

- (void)layoutSubviews;
- (void)configPageView;
- (id)initWithImageView:(id)arg1;

@end
