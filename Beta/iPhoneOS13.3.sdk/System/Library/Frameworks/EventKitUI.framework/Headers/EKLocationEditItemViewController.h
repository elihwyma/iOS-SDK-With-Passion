/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEditItemViewController.h>

@class EKCalendarItem, EKStructuredLocation, EKUIConferenceRoom, EKUILocationSearchModel, NSMutableDictionary, NSString, UISearchBar, UITableView;

@interface EKLocationEditItemViewController : EKEditItemViewController

{
    UISearchBar *_searchBar;
    UITableView *_tableView;
    EKUILocationSearchModel *_searchModel;
    EKCalendarItem *_calendarItem;
    NSMutableDictionary *_cachedConferenceRooms;
    struct CGSize _preferredContentSize;
    _Bool _supportsStructuredLocations;
    _Bool _tableConstraintsInstalled;
    _Bool _onlyAllowConferenceRooms;
    _Bool _needsSave;
    _Bool _onlyDisplayMapLocations;
    EKStructuredLocation *_structuredLocation;
    EKStructuredLocation *_selectedLocation;
    EKUIConferenceRoom *_selectedConferenceRoom;
}

@property (retain, nonatomic) EKStructuredLocation *selectedLocation;
@property (retain, nonatomic) EKUIConferenceRoom *selectedConferenceRoom;
@property (nonatomic) _Bool needsSave;
@property (nonatomic) _Bool onlyDisplayMapLocations;
@property (nonatomic) _Bool onlyAllowConferenceRooms;
@property (retain, nonatomic) EKStructuredLocation *structuredLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_sectionNameForSection:(unsigned long long)arg1;

- (void)dealloc;
- (id)title;
- (void)loadView;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;
- (_Bool)presentModally;
- (void)_setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2 calendarItem:(id)arg3 eventStore:(id)arg4;
- (void)currentLocationUpdated:(id)arg1;
- (void)mapSearchUpdated:(id)arg1;
- (void)contactsSearchUpdated:(id)arg1;
- (id)calendarItemForSearchModel:(id)arg1;
- (_Bool)shouldIncludeConferenceRoom:(id)arg1;
- (void)recentsSearchUpdated:(id)arg1;
- (void)frequentsSearchUpdated:(id)arg1;
- (void)eventsSearchUpdated:(id)arg1;
- (void)conferenceRoomSearchUpdated:(id)arg1;
- (void)locationSearchModel:(id)arg1 selectedLocation:(id)arg2 withError:(id)arg3;
- (_Bool)showingTextRow;
- (_Bool)showingCurrentLocationRow;
- (void)useAsString:(id)arg1;
- (id)conferenceRoomForRecent:(id)arg1;
- (id)locationArrowImage;
- (id)contactsImage;
- (id)pinImage;
- (id)_cellForConferenceRoom:(id)arg1 atIndexPath:(id)arg2;

@end
