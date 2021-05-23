/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class NSString, UILabel, UITextField, _UIBackdropView;

@protocol CKTranscriptManagementNameFieldDelegate;

__attribute__((visibility("hidden")))
@interface CKTranscriptManagementNameField : UIView

{
    _Bool _isOverlay;
    _Bool _enabled;
    id <CKTranscriptManagementNameFieldDelegate> _delegate;
    UILabel *_fieldLabel;
    UITextField *_textField;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    _UIBackdropView *_backdropView;
}

@property (retain, nonatomic) UILabel *fieldLabel;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIView *topSeparator;
@property (retain, nonatomic) UIView *bottomSeparator;
@property (retain, nonatomic) _UIBackdropView *backdropView;
@property (weak, nonatomic) id <CKTranscriptManagementNameFieldDelegate> delegate;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) _Bool isOverlay;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)preferredHeight;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutMarginsDidChange;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)commitGroupName;

@end
