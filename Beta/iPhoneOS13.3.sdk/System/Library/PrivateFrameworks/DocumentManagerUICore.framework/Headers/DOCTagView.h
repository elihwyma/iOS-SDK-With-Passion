/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UIView.h>

@class DOCTag, UIFont, UILabel;

@protocol DOCTagViewDelegate;

@interface DOCTagView : UIView

{
    DOCTag *_tagValue;
    double _maxWidth;
    id <DOCTagViewDelegate> _delegate;
    UILabel *_tagNameLabel;
}

@property (nonatomic, readonly) UILabel *tagNameLabel;
@property (copy, nonatomic) DOCTag *tagValue;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) _Bool adjustsFontForContentSizeCategory;
@property (nonatomic) double maxWidth;
@property (weak, nonatomic) id <DOCTagViewDelegate> delegate;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (id)viewForLastBaselineLayout;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)updateColors;
- (void)longPressGestureRecognizer:(id)arg1;
- (void)removeTag:(id)arg1;

@end
