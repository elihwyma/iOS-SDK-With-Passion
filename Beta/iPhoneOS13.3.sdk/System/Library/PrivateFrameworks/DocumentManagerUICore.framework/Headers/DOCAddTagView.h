/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, DOCTagDotView, NSString, UILabel, UITextField;

@protocol DOCAddTagTextFieldDelegate;

@interface DOCAddTagView : UIView

{
    id <DOCAddTagTextFieldDelegate> _delegate;
    DOCTagDotView *_tagDotView;
    UILabel *_addNewTagLabel;
    UITextField *_tagNameTextField;
    CAShapeLayer *_borderLayer;
}

@property (nonatomic, readonly) DOCTagDotView *tagDotView;
@property (nonatomic, readonly) UILabel *addNewTagLabel;
@property (nonatomic, readonly) UITextField *tagNameTextField;
@property (nonatomic, readonly) CAShapeLayer *borderLayer;
@property (weak, nonatomic) id <DOCAddTagTextFieldDelegate> delegate;
@property (nonatomic, readonly) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)commit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)configureBorderPath;

@end
