/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIView.h>

@class NSString, UILabel, UITextView;

@interface TSKCellEditorField : UIView

{
    UITextView *mTextView;
    UILabel *mLeftSymbolView;
    UILabel *mRightSymbolView;
}

@property (retain, nonatomic) UILabel *leftSymbolView;
@property (retain, nonatomic) UILabel *rightSymbolView;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *leftSymbol;
@property (retain, nonatomic) NSString *rightSymbol;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)p_symbolContainerBackgroundColor;

@end
