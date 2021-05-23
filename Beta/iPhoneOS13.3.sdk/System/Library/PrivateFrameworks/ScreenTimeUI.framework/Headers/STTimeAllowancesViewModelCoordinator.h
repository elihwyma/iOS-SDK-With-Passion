/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectID, NSNumber, NSString, STAskForTimeClient, STGroupFetchedResultsController, STTimeAllowancesViewModel;

@protocol STPersistenceControllerProtocol;

__attribute__((visibility("hidden")))
@interface STTimeAllowancesViewModelCoordinator : NSObject

{
    STTimeAllowancesViewModel *_viewModel;
    NSString *_organizationIdentifier;
    NSNumber *_userDSID;
    id <STPersistenceControllerProtocol> _persistenceController;
    STAskForTimeClient *_askForTimeClient;
    STGroupFetchedResultsController *_groupFetchResultsController;
    NSManagedObjectID *_userObjectID;
}

@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSNumber *userDSID;
@property (nonatomic, readonly) id <STPersistenceControllerProtocol> persistenceController;
@property (nonatomic, readonly) STAskForTimeClient *askForTimeClient;
@property (nonatomic, readonly) STGroupFetchedResultsController *groupFetchResultsController;
@property (copy, nonatomic) NSManagedObjectID *userObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) STTimeAllowancesViewModel *viewModel;

+ (_Bool)saveAllowance:(id)arg1 forUser:(id)arg2 error:(id *)arg3;

- (void)saveAllAllowancesEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteAllowance:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveAllowance:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveDeviceBedtime:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveAlwaysAllowList:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)respondToAskForTime:(id)arg1 withApproval:(_Bool)arg2 timeApproved:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)loadViewModelWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_registerForPersistentStoreNotifications;
- (id)initWithPersistenceController:(id)arg1 organizationIdentifier:(id)arg2 userDSID:(id)arg3;
- (void)saveDefaultAlwaysAllowListWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)groupResultsController:(id)arg1 didChangeResultsForRequest:(id)arg2 objectID:(id)arg3 changeType:(unsigned long long)arg4;
- (id)_iCloudAccountPredicate;

@end
