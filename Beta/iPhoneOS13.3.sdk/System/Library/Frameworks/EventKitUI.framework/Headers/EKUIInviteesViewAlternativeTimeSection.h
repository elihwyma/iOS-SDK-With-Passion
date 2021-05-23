/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKInviteeAlternativeTimeSearcher, NSArray, NSMutableSet, NSString, NSTimeZone;

@interface EKUIInviteesViewAlternativeTimeSection : NSObject

{
    _Bool _hasCheckedRow;
    _Bool _availabilityRequestInProgress;
    _Bool _initialSearchInProgress;
    _Bool _searchExhausted;
    _Bool _searcherHasError;
    CDUnknownBlockType _showMoreAlternativeTimesTapped;
    NSTimeZone *_timeZone;
    NSString *_cachedTimeCellReuseIdentifier;
    NSString *_cachedConflictSearchCellReuseIdentifier;
    unsigned long long _reuseIdentifierVersion;
    CDUnknownBlockType _tableViewCellHook;
    CDUnknownBlockType _newTimeChosen;
    CDUnknownBlockType _showPreviewOfEventAtTime;
    NSMutableSet *_rowsShowingAllParticipants;
    NSArray *_alternativeTimes;
    long long _lastCheckedRow;
    unsigned long long _maximumNumberOfTimeSlotsToShow;
    EKInviteeAlternativeTimeSearcher *_availabilitySearcher;
}

@property (retain, nonatomic) NSString *cachedTimeCellReuseIdentifier;
@property (retain, nonatomic) NSString *cachedConflictSearchCellReuseIdentifier;
@property (nonatomic) unsigned long long reuseIdentifierVersion;
@property (copy, nonatomic) CDUnknownBlockType tableViewCellHook;
@property (copy, nonatomic) CDUnknownBlockType newTimeChosen;
@property (copy, nonatomic) CDUnknownBlockType showPreviewOfEventAtTime;
@property (retain, nonatomic) NSMutableSet *rowsShowingAllParticipants;
@property (retain, nonatomic) NSArray *alternativeTimes;
@property (nonatomic) long long lastCheckedRow;
@property (nonatomic) _Bool hasCheckedRow;
@property (nonatomic) _Bool availabilityRequestInProgress;
@property (nonatomic) unsigned long long maximumNumberOfTimeSlotsToShow;
@property (retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher;
@property (nonatomic) _Bool initialSearchInProgress;
@property (nonatomic) _Bool searchExhausted;
@property (nonatomic) _Bool searcherHasError;
@property (copy, nonatomic) CDUnknownBlockType showMoreAlternativeTimesTapped;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic, readonly) unsigned long long initialNumberOfTimeSlotsToShow;
@property (nonatomic, readonly) NSArray *searcherTimeSlots;
@property (nonatomic, readonly) Class customTimeCellClass;
@property (nonatomic, readonly) _Bool searchingForMoreTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancelOutstandingOperations;
- (unsigned long long)numberOfRows;
- (id)headerTitle;
- (_Bool)_isValidRow:(long long)arg1;
- (id)debugTitle;
- (_Bool)sectionShouldBeShown;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (_Bool)canSelectRow:(id)arg1;
- (void)selectRow:(id)arg1;
- (double)estimatedHeightForRow:(id)arg1;
- (_Bool)canEditRow:(id)arg1;
- (long long)editingStyleForRow:(id)arg1;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;
- (void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
- (id)actionsForRow:(id)arg1;
- (void)clearCheckmark;
- (void)availabilitySearcherChangedState:(long long)arg1;
- (_Bool)injectNewRowsBeforeLastExistingRow;
- (void)refreshCellsAfterStateChange;
- (void)searchForMoreTimes;
- (unsigned long long)_numberOfTimeSlotsShown;
- (_Bool)_isConflictSearchRow:(long long)arg1;
- (id)_alternativeTimeAtIndex:(long long)arg1;

@end
