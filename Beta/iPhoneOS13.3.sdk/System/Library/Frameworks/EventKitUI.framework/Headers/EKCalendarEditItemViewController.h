/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEditItemViewController.h>

@class EKCalendar, EKCalendarChooser, EKEventStore, NSString;

__attribute__((visibility("hidden")))
@interface EKCalendarEditItemViewController : EKEditItemViewController

{
    EKEventStore *_store;
    EKCalendarChooser *_chooser;
    EKCalendar *_selectedCalendar;
    unsigned long long _entityType;
    _Bool _limitToSource;
    _Bool _onlyShowUnmanagedSources;
}

@property (retain, nonatomic) EKCalendar *selectedCalendar;
@property (nonatomic) _Bool limitToSource;
@property (nonatomic) _Bool onlyShowUnmanagedSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (struct CGSize)preferredContentSize;
- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3 entityType:(unsigned long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3;
- (void)calendarChooserSelectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2;

@end
