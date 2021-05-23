/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <ContactsAutocompleteUI/CNComposeRecipientTextView.h>

@class MFComposeDisplayMetrics;

@protocol MFMailComposeRecipientTextViewDelegate;

@interface MFMailComposeRecipientTextView : CNComposeRecipientTextView

{
    MFComposeDisplayMetrics *_displayMetrics;
}

@property (retain, nonatomic) MFComposeDisplayMetrics *displayMetrics;
@property (weak, nonatomic) id <MFMailComposeRecipientTextViewDelegate> delegate;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)nextResponder;
- (void)layoutMarginsDidChange;
- (void)_textInputDidChange:(id)arg1;
- (void)_displayMetricsDidChange;

@end
