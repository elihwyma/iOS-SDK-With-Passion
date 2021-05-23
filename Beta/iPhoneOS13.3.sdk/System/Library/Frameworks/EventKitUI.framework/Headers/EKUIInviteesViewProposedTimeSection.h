/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKEvent, EKInviteeAlternativeTimeSearcher, NSArray, NSMutableOrderedSet, NSMutableSet, NSString;

@interface EKUIInviteesViewProposedTimeSection : NSObject

{
    _Bool _conflictFound;
    EKEvent *_event;
    NSString *_title;
    NSArray *_busyParticipants;
    NSMutableSet *_rowsShowingAllParticipants;
    NSString *_cachedCellReuseIdentifier;
    unsigned long long _reuseIdentifierVersion;
    CDUnknownBlockType _tableViewCellHook;
    CDUnknownBlockType _newTimeChosen;
    CDUnknownBlockType _showPreviewOfEventAtTime;
    EKInviteeAlternativeTimeSearcher *_availabilitySearcher;
    NSMutableOrderedSet *_proposedTimes;
    NSArray *_proposedTimeResults;
    long long _checkedRow;
}

@property (weak, nonatomic) EKEvent *event;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *busyParticipants;
@property (retain, nonatomic) NSMutableSet *rowsShowingAllParticipants;
@property (nonatomic) _Bool conflictFound;
@property (retain, nonatomic) NSString *cachedCellReuseIdentifier;
@property (nonatomic) unsigned long long reuseIdentifierVersion;
@property (copy, nonatomic) CDUnknownBlockType tableViewCellHook;
@property (copy, nonatomic) CDUnknownBlockType newTimeChosen;
@property (copy, nonatomic) CDUnknownBlockType showPreviewOfEventAtTime;
@property (retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher;
@property (retain, nonatomic) NSMutableOrderedSet *proposedTimes;
@property (retain, nonatomic) NSArray *proposedTimeResults;
@property (nonatomic) long long checkedRow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancelOutstandingOperations;
- (unsigned long long)numberOfRows;
- (void)setChecked:(long long)arg1;
- (void)updateWithEvent:(id)arg1;
- (_Bool)isRowChecked:(long long)arg1;
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
- (id)busyParticipantsForDate:(id)arg1;
- (id)namesForParticipantsProposingDate:(id)arg1;

@end
