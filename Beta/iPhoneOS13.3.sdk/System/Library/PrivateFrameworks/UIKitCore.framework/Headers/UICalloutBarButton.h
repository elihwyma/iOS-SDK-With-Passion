/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIButton.h>

@class UITextReplacement;

__attribute__((visibility("hidden")))
@interface UICalloutBarButton : UIButton

{
    SEL m_action;
    int m_position;
    int m_type;
    UITextReplacement *m_textReplacement;
    double m_contentWidth;
    double m_contentScale;
    double m_additionalContentHeight;
    double m_dividerOffset;
    double m_imageVerticalAdjust;
    long long m_page;
    _Bool m_isText;
    _Bool m_configured;
    _Bool m_single;
    _Bool m_padLeft;
    _Bool m_padRight;
    _Bool m_dontDismiss;
    _Bool forceFlash;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) double contentWidth;
@property (nonatomic, readonly) double contentScale;
@property (nonatomic, readonly) double additionalContentHeight;
@property (nonatomic, readonly) int type;
@property (nonatomic) _Bool forceFlash;
@property (nonatomic) long long page;
@property (nonatomic) double dividerOffset;
@property (nonatomic) double imageVerticalAdjust;
@property (nonatomic) _Bool dontDismiss;
@property (retain, nonatomic) UITextReplacement *textReplacement;

+ (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 action:(SEL)arg4 type:(int)arg5 inView:(id)arg6;
+ (id)buttonWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4;
+ (id)buttonWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4;

- (void)dealloc;
- (void)removeFromSuperview;
- (double)_scaleFactorForImage;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)setupWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 action:(SEL)arg4 type:(int)arg5;
- (void)setupWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3;
- (void)setupWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3;
- (void)flash;
- (void)_commonSetupWithAction:(SEL)arg1 type:(int)arg2;
- (void)cancelFlash;
- (void)configureLabel;
- (struct CGRect)adjustRectForPosition:(struct CGRect)arg1 scaleRect:(_Bool)arg2;
- (void)fadeAndSendAction;
- (void)configureForSingle:(int)arg1;
- (void)configureForLeftPosition:(int)arg1;
- (void)configureForMiddlePosition;
- (void)configureForRightPosition:(int)arg1;
- (void)setContentScale:(double)arg1;

@end
