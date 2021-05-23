/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITableViewController.h>

@class NSString, PXContextualMemoriesSettings, UIView;

@interface PXContextualMemoriesSettingsTableViewController : UITableViewController

{
    _Bool _showsDatePicker;
    _Bool _showsLocationPicker;
    PXContextualMemoriesSettings *_settings;
    UIView *_progressIndicatorView;
}

@property (retain, nonatomic) PXContextualMemoriesSettings *settings;
@property (nonatomic) _Bool showsDatePicker;
@property (nonatomic) _Bool showsLocationPicker;
@property (retain, nonatomic) UIView *progressIndicatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)title;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)_handleLongPress:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)_installProgressIndicatorView;
- (void)_tableView:(id)arg1 selectionDidUpdateForRowAtIndexPath:(id)arg2;
- (void)_updateDatePickerHidden;
- (void)_updateLocationPickerHidden;
- (long long)_sectionForSettingOfClass:(Class)arg1;
- (void)_reloadRowAndRestoreSelectionIfNeededAtIndexPath:(id)arg1;
- (long long)_sectionForDate;
- (long long)_sectionForLocation;
- (long long)_sectionForPeople;
- (id)_indexPathForDateValue;
- (id)_indexPathForLocationValue;
- (id)_indexPathForPeopleValue;
- (id)_indexPathForDatePicker;
- (id)_indexPathForLocationPicker;
- (_Bool)_isDatePickerCellAtIndexPath:(id)arg1;
- (_Bool)_isLocationPickerCellAtIndexPath:(id)arg1;
- (_Bool)_isPeopleValueCellAtIndexPath:(id)arg1;
- (CDStruct_26e8d939)_regionForLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)_didChangeDatePicker:(id)arg1;
- (void)_didPressResetAll:(id)arg1;
- (void)_showContactsPicker;

@end
