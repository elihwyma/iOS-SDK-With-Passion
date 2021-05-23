/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/_ML3BaseMusicLibraryResourcesManager.h>

@class NSObject, NSOperationQueue, NSString;

@protocol ML3AccountInformationProviding, MLMediaLibraryAccountChangeObserver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _ML3MultiUserDaemonMusicLibraryResourcesManager : _ML3BaseMusicLibraryResourcesManager

{
    NSString *_currentActiveAccountDSID;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSOperationQueue *_accountChangeOperationQueue;
    id <ML3AccountInformationProviding> _accountInfo;
    id <MLMediaLibraryAccountChangeObserver> _accountChangeObserver;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) NSOperationQueue *accountChangeOperationQueue;
@property (retain, nonatomic) id <ML3AccountInformationProviding> accountInfo;
@property (weak, nonatomic) id <MLMediaLibraryAccountChangeObserver> accountChangeObserver;
@property (copy, nonatomic) NSString *currentActiveAccountDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_setupNotifications;
- (void)_tearDownNotifications;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (id)libraryContainerPath;
- (id)initWithAccountInfo:(id)arg1 accountChangeObserver:(id)arg2;
- (id)_libraryContainerPathForDSID:(id)arg1;
- (void)_processAccountChangeNotification;
- (_Bool)shouldExecuteAccountChangeOperation:(id)arg1 reason:(id *)arg2;
- (id)databasePathForDSID:(id)arg1;
- (void)accountChangeOperationWillStartPerformingDatabasePathChange:(id)arg1 newDatabasePath:(id)arg2;
- (void)_notifyClients:(id)arg1;

@end
