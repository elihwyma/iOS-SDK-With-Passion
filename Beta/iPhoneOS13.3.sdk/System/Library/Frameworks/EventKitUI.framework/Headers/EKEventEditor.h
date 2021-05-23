/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKCalendarItemEditor.h>

@class EKCalendarItemAlarmEditItem, EKCalendarItemCalendarEditItem, EKCalendarItemLocationInlineEditItem, EKCalendarItemTitleInlineEditItem, EKEvent, EKEventAttachmentsEditItem, EKEventAttendeesEditItem, EKEventAutocompleteResultsEditItem, EKEventDateEditItem, EKEventURLAndNotesInlineEditItem, EKUIAutocompletePETTracker, EKUIAutocompleteSearchResult, NSString, NSTimer, UIColor;

@protocol EKUIAutocompletePendingSearchProtocol;

@interface EKEventEditor : EKCalendarItemEditor

{
    EKEventDateEditItem *_dateItem;
    EKEventAttendeesEditItem *_attendeesEditItem;
    EKEventAutocompleteResultsEditItem *_autocompleteEditItem;
    EKCalendarItemTitleInlineEditItem *_titleInlineEditItem;
    EKCalendarItemLocationInlineEditItem *_locationInlineEditItem;
    EKCalendarItemCalendarEditItem *_calendarEditItem;
    EKCalendarItemAlarmEditItem *_alarmEditItem;
    EKEventURLAndNotesInlineEditItem *_notesEditItem;
    EKEventAttachmentsEditItem *_attachmentsEditItem;
    _Bool _shouldAutocomplete;
    id <EKUIAutocompletePendingSearchProtocol> _pendingSearch;
    NSTimer *_autocompleteTimer;
    NSString *_autocompleteSearchString;
    _Bool _isTransitioning;
    _Bool _autocompleteResultsVisible;
    unsigned long long _focusOnAppearanceTarget;
    _Bool _selectOnFocus;
    EKUIAutocompleteSearchResult *_selectedAutocompleteResult;
    unsigned long long _selectedAutocompleteResultIndex;
    EKUIAutocompleteSearchResult *_zeroKeywordResult;
    EKUIAutocompleteSearchResult *_naturalLanguageResult;
    _Bool _hasShownZeroKeywordResult;
    _Bool _hasShownNaturalLanguageResult;
    EKUIAutocompletePETTracker *_autocompletePETTracker;
    _Bool _showAttachments;
    UIColor *_backgroundColor;
    NSString *_suggestionKey;
}

@property (retain, nonatomic) NSString *suggestionKey;
@property (retain, nonatomic) EKEvent *event;
@property (nonatomic) _Bool showAttachments;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_now;
+ (Class)_SGSuggestionsServiceClass;
+ (id)defaultTitleForCalendarItem;
+ (void)_applyTimeToAutocompleteResults:(id)arg1 usingCurrentStartDate:(id)arg2 currentEndDate:(id)arg3 timeImplicitlySet:(_Bool)arg4;
+ (void)_modifyCurrentEvent:(id)arg1 withAutocompleteResult:(id)arg2;
+ (id)_copyAlarmsForAutocompleteFromResult:(id)arg1;
+ (id)_copyAttendeesForAutocompleteFromResult:(id)arg1;

- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)hasUnsavedChanges;
- (unsigned long long)entityType;
- (void)autocompleteResultsEditItemDidShowResults:(id)arg1;
- (void)autocompleteResultsEditItemDidHideResults:(id)arg1;
- (void)autocompleteResultsEditItem:(id)arg1 resultSelected:(id)arg2;
- (void)editItemDidStartEditing:(id)arg1;
- (void)editItemTextChanged:(id)arg1;
- (void)refreshStartAndEndDates;
- (void)focus:(unsigned long long)arg1 select:(_Bool)arg2;
- (id)_editItems;
- (void)_focusAppearanceTarget;
- (id)preferredTitle;
- (void)_updateTitleEditItemSeparatorVisibility;
- (void)refreshInvitees;
- (void)refreshLocation;
- (void)prepareEditItems;
- (void)_scheduleAutocompleteSearchWithString:(id)arg1;
- (void)_showAutocompleteResults;
- (void)_hideAndCancelAutocompleteResults;
- (void)_cancelPendingAutocompleteAndCleanup;
- (void)_scheduleAutocompleteTimerIfNeeded;
- (void)_beginAutocompleteSearch:(id)arg1;
- (void)_setAutocompleteResultsVisible:(_Bool)arg1;
- (id)_calendarItemIndexSet;
- (id)_orderedEditItems;
- (_Bool)hasAttachmentChanges;
- (_Bool)attachmentsModifiedOnRecurrence;
- (id)attachmentsModifiedEvent;
- (_Bool)saveCalendarItemWithSpan:(long long)arg1 error:(id *)arg2;
- (id)_nameForDeleteButton;
- (void)setupDeleteButton;
- (id)defaultAlertTitle;
- (id)notificationNamesForLocaleChange;
- (void)_copyEventForPossibleRevert;
- (void)_revertEvent;
- (id)_viewForSheet;
- (void)_setEventTitleForTestingAutocomplete:(id)arg1;

@end
