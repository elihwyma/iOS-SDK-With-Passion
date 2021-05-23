/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKInlineNotificationView.h>

@class NSString, UIButton, UIImage, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface CKTwoButtonInlineNotificationView : CKInlineNotificationView

{
    UIView *_contentView;
    UIButton *_failureButton;
    UILabel *_headerLabel;
    UILabel *_descriptionLabel;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIView *_horizontalDivider;
    UIView *_verticalDivider;
    UIView *_leftGrayoutView;
    UIView *_rightGrayoutView;
}

@property (retain, nonatomic) UIButton *failureButton;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIView *horizontalDivider;
@property (retain, nonatomic) UIView *verticalDivider;
@property (retain, nonatomic) UIView *leftGrayoutView;
@property (retain, nonatomic) UIView *rightGrayoutView;
@property (nonatomic) _Bool leftButtonIsGrayedOut;
@property (nonatomic) _Bool rightButtonIsGrayedOut;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *headerText;
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) NSString *leftButtonText;
@property (retain, nonatomic) NSString *rightButtonText;

- (void)dealloc;
- (id)contentView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateFonts;
- (struct CGSize)contentViewSizeThatFits:(struct CGSize)arg1;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)_handleTouchDown:(id)arg1;
- (void)_handleTouchUpInside:(id)arg1;
- (void)_handleTouchUpOutside:(id)arg1;
- (double)_heightForTopBoxWithContainerWidth:(double)arg1 failureButtonFrame:(struct CGRect *)arg2 labelFrame:(struct CGRect *)arg3 descriptionFrame:(struct CGRect *)arg4;
- (double)_heightForBottomBoxWithContainerWidth:(double)arg1 startingYOffset:(double)arg2 leftButtonFrame:(struct CGRect *)arg3 rightButtonFrame:(struct CGRect *)arg4 dividerFrame:(struct CGRect *)arg5 leftGrayoutViewFrame:(struct CGRect *)arg6 rightGrayoutViewFrame:(struct CGRect *)arg7;

@end
