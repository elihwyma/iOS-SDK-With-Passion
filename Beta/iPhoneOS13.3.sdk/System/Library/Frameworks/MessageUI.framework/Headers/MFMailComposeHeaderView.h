/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <ContactsAutocompleteUI/CNComposeHeaderView.h>

@class MFComposeDisplayMetrics;

@interface MFMailComposeHeaderView : CNComposeHeaderView

{
    MFComposeDisplayMetrics *_displayMetrics;
}

@property (retain, nonatomic) MFComposeDisplayMetrics *displayMetrics;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutMarginsDidChange;
- (void)displayMetricsDidChange;

@end
