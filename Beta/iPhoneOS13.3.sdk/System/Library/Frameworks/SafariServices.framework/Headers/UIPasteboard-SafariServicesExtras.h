/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIPasteboard.h>

@interface UIPasteboard (SafariServicesExtras)

- (void)safari_setSensitiveString:(id)arg1;
- (id)safari_pasteAndNavigateButtonTitle;
- (id)safari_bestStringForPastingIntoURLField;

@end
