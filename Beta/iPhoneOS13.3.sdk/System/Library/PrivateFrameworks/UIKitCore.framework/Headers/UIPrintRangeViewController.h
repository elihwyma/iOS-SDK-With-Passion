/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIPickerView, UIPrintPanelViewController, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface UIPrintRangeViewController : UIViewController <Swift>

{
    UIPrintPanelViewController *_printPanelViewController;
    long long _pageCount;
    struct _NSRange _pageRange;
    NSArray *_multiPageRanges;
    NSString *_multiPageRangeTitle;
    UIPickerView *_fromPicker;
    UIPickerView *_toPicker;
    UITableView *_tableView;
    double _pickerWidth;
    UIView *_footerPickerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)initWithPrintPanelViewController:(id)arg1;
- (void)reloadTableView;

@end
