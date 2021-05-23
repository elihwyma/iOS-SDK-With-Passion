/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIButton.h>

@class NSParagraphStyle, NSString, UIFont;

@interface MiroTwoLabelButton : UIButton

{
    _Bool _titleIsDirty;
    NSString *_primaryLabelText;
    NSString *_secondaryLabelText;
    UIFont *_secondaryLabelFont;
    NSParagraphStyle *_defaultParagraphStyle;
}

@property (nonatomic) _Bool titleIsDirty;
@property (retain, nonatomic) NSParagraphStyle *defaultParagraphStyle;
@property (retain, nonatomic) NSString *primaryLabelText;
@property (retain, nonatomic) NSString *secondaryLabelText;
@property (retain, nonatomic) UIFont *primaryLabelFont;
@property (retain, nonatomic) UIFont *secondaryLabelFont;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)awakeFromNib;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_syncButtonState;
- (void)_updateAttributedTitle;

@end
