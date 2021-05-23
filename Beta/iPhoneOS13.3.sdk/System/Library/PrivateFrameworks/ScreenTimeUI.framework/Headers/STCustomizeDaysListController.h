/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSListController.h>

@class NSDictionary, NSString, PSSpecifier;

@protocol STCustomizeDaysListControllerDelegate;

__attribute__((visibility("hidden")))
@interface STCustomizeDaysListController : PSListController

{
    id <STCustomizeDaysListControllerDelegate> _delegate;
    NSDictionary *_timeByDay;
    PSSpecifier *_timePickerSpecifier;
    PSSpecifier *_selectedDaySpecifier;
}

@property (retain, nonatomic) PSSpecifier *timePickerSpecifier;
@property (retain, nonatomic) PSSpecifier *selectedDaySpecifier;
@property (weak, nonatomic) id <STCustomizeDaysListControllerDelegate> delegate;
@property (copy, nonatomic) NSDictionary *timeByDay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)datePickerChanged:(id)arg1;
- (id)specifiers;
- (id)datePickerForSpecifier:(id)arg1;
- (id)_localizedDayNames;
- (id)budgetTime:(id)arg1;
- (void)_showOrHidePickerSpecifierForSpecifier:(id)arg1;
- (id)_localizedDayOrder;

@end
