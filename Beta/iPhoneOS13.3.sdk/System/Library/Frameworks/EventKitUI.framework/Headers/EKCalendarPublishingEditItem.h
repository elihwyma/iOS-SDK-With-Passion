/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKCalendarEditItem.h>

@class NSString, UIActivityIndicatorView, UITableViewHeaderFooterView, UIView;

@interface EKCalendarPublishingEditItem : EKCalendarEditItem

{
    _Bool _published;
    UITableViewHeaderFooterView *_footerView;
    UIActivityIndicatorView *_spinner;
}

@property (nonatomic) _Bool published;
@property (nonatomic, readonly) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)_applyStyleToUILabel:(id)arg1;
- (id)footerViewForSection;
- (double)footerHeightForSection;
- (_Bool)configureWithCalendar:(id)arg1;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)pubishURL;
- (id)calendarTitle;
- (void)_publishChanged:(id)arg1;

@end
