/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

#import <EventKitUI/Swift-Protocol.h>

@class EKEvent, NSMutableArray, NSString;

@interface EKUIInviteesViewInvisibleInviteeStatusSection : NSObject <Swift>

{
    _Bool _editable;
    CDUnknownBlockType _participantTapped;
    CDUnknownBlockType _participantRemoved;
    NSMutableArray *_participants;
    EKEvent *_event;
    NSString *_cachedCellReuseIdentifier;
    unsigned long long _reuseIdentifierVersion;
    CDUnknownBlockType _tableViewCellHook;
}

@property (retain, nonatomic) NSMutableArray *participants;
@property (retain, nonatomic) EKEvent *event;
@property (retain, nonatomic) NSString *cachedCellReuseIdentifier;
@property (nonatomic) unsigned long long reuseIdentifierVersion;
@property (copy, nonatomic) CDUnknownBlockType tableViewCellHook;
@property (nonatomic) _Bool editable;
@property (copy, nonatomic) CDUnknownBlockType participantTapped;
@property (copy, nonatomic) CDUnknownBlockType participantRemoved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

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
- (void)updateWithEvent:(id)arg1 editable:(_Bool)arg2 fromDetail:(_Bool)arg3;

@end
