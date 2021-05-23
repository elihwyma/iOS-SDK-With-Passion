/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

#import <HomeUI/Swift-Protocol.h>

@class CNContactStore, HMHome, NSArray, NSIndexPath, NSString, UITableView, UIViewController;

@protocol HUUserListManagerTableDelegate;

@interface HUUserListTableManager : NSObject <Swift>

{
    _Bool _editing;
    _Bool _allowsEditing;
    id <HUUserListManagerTableDelegate> _delegate;
    NSArray *_users;
    NSArray *_invitations;
    HMHome *_home;
    UIViewController *_viewController;
    UITableView *_tableView;
    NSIndexPath *_selectedIndexPath;
    CNContactStore *_contactStore;
}

@property (nonatomic) _Bool allowsEditing;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (weak, nonatomic) id <HUUserListManagerTableDelegate> delegate;
@property (retain, nonatomic) NSArray *users;
@property (retain, nonatomic) NSArray *invitations;
@property (retain, nonatomic) HMHome *home;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) _Bool editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (id)sortedUsers;
- (id)sortedInvitations;
- (void)_stopSharingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_removeUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didRemoveUser:(id)arg1;
- (void)_didAddUser:(id)arg1;
- (void)_didRemoveInvitation:(id)arg1;
- (void)_didInsertAtIndex:(unsigned long long)arg1;
- (void)_didRemoveAtIndex:(unsigned long long)arg1;
- (long long)sectionForPeople;
- (id)_contactForUser:(id)arg1;
- (void)_configurePersonViewController:(id)arg1 invitation:(id)arg2;
- (void)_reinvite;
- (void)_stopSharing;
- (void)_didReloadAtIndex:(unsigned long long)arg1;
- (long long)numberOfDataRows;
- (_Bool)_indexPathIsInviteUser:(id)arg1;
- (id)_stringForInvitationState:(long long)arg1;
- (id)_displayNameForUser:(id)arg1;
- (id)_personViewControllerForUser:(id)arg1 invitation:(id)arg2;
- (void)updateEditingRows;
- (void)addPeopleViewControllerDidCancel:(id)arg1;
- (void)addPeopleViewController:(id)arg1 didSendInvitations:(id)arg2;
- (id)initWithTableView:(id)arg1 viewController:(id)arg2;
- (id)_monogramForUser:(id)arg1;

@end
