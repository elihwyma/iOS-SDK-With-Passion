/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIView.h>

@class STUsageReport, UIStackView;

__attribute__((visibility("hidden")))
@interface STNotificationsPickupSummaryView : UIView

{
    STUsageReport *_usageReport;
    UIStackView *_stackView;
}

@property (retain, nonatomic) STUsageReport *usageReport;
@property (retain, nonatomic) UIStackView *stackView;

- (id)initWithUsageReport:(id)arg1;
- (id)_attributedStringForNotificationsTitle;
- (id)_attributedStringForNotificationsDetailText;
- (id)_attributedStringForPickUpTitle;
- (id)_attributedStringForPickUpDetailText;
- (id)_attributedString:(id)arg1 withFont:(id)arg2;

@end
