/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UIView.h>

@class DOCTag, DOCTagCheckmarkView, DOCTagDotView, UILabel;

@interface DOCLargeTagView : UIView

{
    DOCTag *_tagValue;
    long long _style;
    DOCTagDotView *_tagDotView;
    UILabel *_tagNameLabel;
    DOCTagCheckmarkView *_checkmarkView;
}

@property (nonatomic, readonly) DOCTagDotView *tagDotView;
@property (nonatomic, readonly) UILabel *tagNameLabel;
@property (nonatomic, readonly) DOCTagCheckmarkView *checkmarkView;
@property (retain, nonatomic) DOCTag *tagValue;
@property (nonatomic) long long style;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateBackgroundColor;
- (void)updateBorder;

@end
