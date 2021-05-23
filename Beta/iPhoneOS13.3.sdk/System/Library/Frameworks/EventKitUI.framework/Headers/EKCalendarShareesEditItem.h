/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKCalendarEditItem.h>

@class NSMutableArray, NSString, UILabel, UITableViewHeaderFooterView;

@interface EKCalendarShareesEditItem : EKCalendarEditItem

{
    NSMutableArray *_shareeCells;
    UITableViewHeaderFooterView *_footerView;
    UILabel *_descriptionLabel;
}

@property (retain, nonatomic) NSMutableArray *shareeCells;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (id)headerTitle;
- (id)footerView;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)layoutForWidth:(double)arg1;
- (void)_applyStyleToUILabel:(id)arg1;
- (id)footerViewForSection;
- (double)footerHeightForSection;
- (_Bool)saveStateToCalendar:(id)arg1;
- (id)_shareeCellForName:(id)arg1 detailText:(id)arg2 additionalDetailText:(id)arg3;
- (id)_stringForShareeStatus:(unsigned long long)arg1;
- (id)_stringForShareeAccessLevel:(unsigned long long)arg1;
- (id)_addPersonCell;
- (void)_dismissShareePicker;
- (void)_popBackToCalendarEditor:(_Bool)arg1;
- (void)shareeViewControllerDidChangeAccessLevel:(id)arg1;
- (void)shareeViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)shareePickerViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (id)eventStoreForShareePickerViewController:(id)arg1;
- (_Bool)configureWithCalendar:(id)arg1;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;

@end
