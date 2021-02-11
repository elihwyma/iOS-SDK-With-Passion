/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIInviteesViewRespondedInviteesSection : NSObject <EKUIInviteesViewSection> {
    NSString * _cachedCellReuseIdentifier;
    bool  _editable;
    EKEvent * _event;
    id /* block */  _participantRemoved;
    id /* block */  _participantSetRole;
    id /* block */  _participantTapped;
    NSMutableArray * _participants;
    int  _responseType;
    unsigned long long  _reuseIdentifierVersion;
    id /* block */  _tableViewCellHook;
}

@property (nonatomic, retain) NSString *cachedCellReuseIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool editable;
@property (nonatomic, retain) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ participantRemoved;
@property (nonatomic, copy) id /* block */ participantSetRole;
@property (nonatomic, copy) id /* block */ participantTapped;
@property (nonatomic, retain) NSMutableArray *participants;
@property (nonatomic) int responseType;
@property (nonatomic) unsigned long long reuseIdentifierVersion;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ tableViewCellHook;

- (void).cxx_destruct;
- (bool)_isValidRow:(long long)arg1;
- (id)actionsForRow:(id)arg1;
- (id)cachedCellReuseIdentifier;
- (bool)canEditRow:(id)arg1;
- (bool)canSelectRow:(id)arg1;
- (void)cancelOutstandingOperations;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
- (id)debugTitle;
- (bool)editable;
- (long long)editingStyleForRow:(id)arg1;
- (double)estimatedHeightForRow:(id)arg1;
- (id)event;
- (id)headerTitle;
- (id)initWithResponseType:(int)arg1;
- (unsigned long long)numberOfRows;
- (id /* block */)participantRemoved;
- (id /* block */)participantSetRole;
- (id /* block */)participantTapped;
- (id)participants;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (int)responseType;
- (unsigned long long)reuseIdentifierVersion;
- (bool)sectionShouldBeShown;
- (void)selectRow:(id)arg1;
- (void)setCachedCellReuseIdentifier:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setEvent:(id)arg1;
- (void)setParticipantRemoved:(id /* block */)arg1;
- (void)setParticipantSetRole:(id /* block */)arg1;
- (void)setParticipantTapped:(id /* block */)arg1;
- (void)setParticipants:(id)arg1;
- (void)setResponseType:(int)arg1;
- (void)setReuseIdentifierVersion:(unsigned long long)arg1;
- (void)setTableViewCellHook:(id /* block */)arg1;
- (id /* block */)tableViewCellHook;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;
- (void)updateWithEvent:(id)arg1 editable:(bool)arg2;

@end