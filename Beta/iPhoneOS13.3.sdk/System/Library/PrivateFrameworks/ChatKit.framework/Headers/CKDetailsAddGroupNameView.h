/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CKDetailsViewAddGroupNameViewUITextField, NSString, UILabel;

@protocol CKDetailsAddGroupNameViewDelegate;

@interface CKDetailsAddGroupNameView : UIView

{
    _Bool _enabled;
    id <CKDetailsAddGroupNameViewDelegate> _delegate;
    NSString *_groupName;
    UILabel *_placeholderLabel;
    CKDetailsViewAddGroupNameViewUITextField *_inputField;
}

@property (retain, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) CKDetailsViewAddGroupNameViewUITextField *inputField;
@property (weak, nonatomic) id <CKDetailsAddGroupNameViewDelegate> delegate;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)preferredHeight;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)commitGroupName;

@end
