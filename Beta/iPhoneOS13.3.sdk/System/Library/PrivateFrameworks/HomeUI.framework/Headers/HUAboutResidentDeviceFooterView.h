/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSMutableArray, NSString, UITextView;

@protocol HUAboutResidentDeviceFooterViewDelegate;

@interface HUAboutResidentDeviceFooterView : UITableViewHeaderFooterView

{
    id <HUAboutResidentDeviceFooterViewDelegate> _delegate;
    UITextView *_messageView;
    NSMutableArray *_constraints;
    struct UIEdgeInsets _messageInsets;
}

@property (retain, nonatomic) UITextView *messageView;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (weak, nonatomic) id <HUAboutResidentDeviceFooterViewDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets messageInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;
- (id)_textAttributes;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)_linkTextAttributes;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)_setupViews;

@end
