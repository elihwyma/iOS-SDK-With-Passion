/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIView.h>

@class NUErrorMessage, NUTrait, UILabel;

@interface NUErrorView : UIView

{
    NUErrorMessage *_errorMessage;
    long long _textAlignment;
    unsigned long long _verticalAlignment;
    UILabel *_label;
    NUTrait *_labelMaxWidthTrait;
}

@property (nonatomic, readonly) UILabel *label;
@property (retain, nonatomic) NUTrait *labelMaxWidthTrait;
@property (retain, nonatomic) NUErrorMessage *errorMessage;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long verticalAlignment;

- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (id)attributedStringForErrorMessage:(id)arg1;
- (id)initWithErrorMessage:(id)arg1;
- (void)errorMessage:(id)arg1;

@end
