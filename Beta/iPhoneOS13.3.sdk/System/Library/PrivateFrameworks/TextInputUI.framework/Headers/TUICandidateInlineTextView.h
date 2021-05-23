/*
 Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

#import <UIKitCore/UIView.h>

@class NSString, UILabel;

@protocol TUICandidateViewStyle;

@interface TUICandidateInlineTextView : UIView

{
    NSString *_text;
    id <TUICandidateViewStyle> _style;
    UILabel *_label;
}

@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) id <TUICandidateViewStyle> style;

- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateLabels;

@end
