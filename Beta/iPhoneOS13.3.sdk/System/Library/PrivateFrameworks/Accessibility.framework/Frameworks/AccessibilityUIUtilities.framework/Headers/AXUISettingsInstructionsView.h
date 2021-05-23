/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSMutableArray, PSSpecifier, UILabel;

@interface AXUISettingsInstructionsView : UITableViewHeaderFooterView

{
    PSSpecifier *_specifier;
    UILabel *_headerLabel;
    NSMutableArray *_contentLabels;
    NSMutableArray *_marginConstraints;
}

- (void)setNeedsLayout;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)_initializeContent;
- (id)settingsLocString:(id)arg1 table:(id)arg2;

@end
