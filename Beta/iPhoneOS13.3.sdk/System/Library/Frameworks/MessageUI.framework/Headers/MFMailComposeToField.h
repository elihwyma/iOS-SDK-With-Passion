/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MessageUI/MFMailComposeRecipientTextView.h>

@class MFComposeSMIMELockButton;

@protocol MFMailComposeToFieldDelegate;

@interface MFMailComposeToField : MFMailComposeRecipientTextView

{
    MFComposeSMIMELockButton *_smimeButton;
    _Bool _wantsEncryption;
    _Bool _canEncrypt;
    _Bool _smimeButtonVisible;
    _Bool _smimeButtonEnabled;
    id <MFMailComposeToFieldDelegate> _toFieldDelegate;
}

@property (nonatomic, readonly) MFComposeSMIMELockButton *SMIMEButton;
@property (weak, nonatomic) id <MFMailComposeToFieldDelegate> toFieldDelegate;
@property (nonatomic) _Bool smimeButtonVisible;
@property (nonatomic) _Bool smimeButtonEnabled;

- (void)dealloc;
- (void)layoutSubviews;
- (void)setExpanded:(_Bool)arg1;
- (id)_textContainerExclusionPathsWithAddButton:(_Bool)arg1;
- (void)setWantsEncryption:(_Bool)arg1 canEncrypt:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_tappedSMIMEButton:(id)arg1;
- (void)_setSMIMEButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;

@end
