/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, NSArray, NSLock, NoteContext;

@protocol OS_dispatch_group;

@interface AccountUtilities : NSObject

{
    NSArray *_accountIDsEnabledForNotes;
    NoteContext *_noteContext;
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_group> *_backgroundDispatchGroup;
    NSLock *_updateAccountInfosLock;
}

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *backgroundDispatchGroup;
@property (retain) NSLock *updateAccountInfosLock;

+ (id)sharedAccountUtilities;

- (id)init;
- (void)dealloc;
- (void)_accountStoreDidChange:(id)arg1;
- (id)localAccountDisplayName;
- (id)defaultStoreSyncIdWithDesiredSyncId:(id)arg1;
- (void)updateAccountInfos;
- (_Bool)localNotesExist;
- (id)freshContext;
- (void)startKeepingAccountInfosUpToDate;
- (id)accountsEnabledForNotes;
- (id)accountIDsEnabledForNotes;

@end
