/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString, STAdminPersistenceController, STGroupFetchedResultsController, STRootViewModel;

@protocol STContentPrivacyViewModelCoordinator, STTimeAllowancesViewModelCoordinator, STUsageDetailsViewModelCoordinator;

@interface STRootViewModelCoordinator : NSObject

{
    _Bool _hasAlreadyEnteredPINForSession;
    _Bool _isLocalUser;
    NSObject<STUsageDetailsViewModelCoordinator> *_usageDetailsCoordinator;
    NSObject<STTimeAllowancesViewModelCoordinator> *_timeAllowancesCoordinator;
    NSObject<STContentPrivacyViewModelCoordinator> *_contentPrivacyCoordinator;
    STAdminPersistenceController *_persistenceController;
    STRootViewModel *_viewModel;
    STGroupFetchedResultsController *_fetchedResultsController;
    NSMutableDictionary *_coordinatorsByChildDSID;
    NSNumber *_userDSID;
    NSString *_deviceIdentifier;
    NSNumber *_usageReportType;
    long long _usageContext;
    NSString *_userName;
}

@property (readonly) STAdminPersistenceController *persistenceController;
@property (retain, nonatomic) STRootViewModel *viewModel;
@property (retain, nonatomic) STGroupFetchedResultsController *fetchedResultsController;
@property (retain, nonatomic) NSMutableDictionary *coordinatorsByChildDSID;
@property (copy, nonatomic) NSNumber *userDSID;
@property (copy, readonly) NSString *deviceIdentifier;
@property (copy, readonly) NSNumber *usageReportType;
@property (readonly) long long usageContext;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) _Bool isLocalUser;
@property (nonatomic) _Bool hasAlreadyEnteredPINForSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSObject<STContentPrivacyViewModelCoordinator> *contentPrivacyCoordinator;
@property (readonly) NSObject<STUsageDetailsViewModelCoordinator> *usageDetailsCoordinator;
@property (readonly) NSObject<STTimeAllowancesViewModelCoordinator> *timeAllowancesCoordinator;
@property (nonatomic) _Bool hasShownMiniBuddy;
@property (nonatomic, readonly, getter=isPasscodeEnabled) _Bool passcodeEnabled;

+ (id)loadViewModelFromManagedObjectContext:(id)arg1 isLocalUser:(_Bool)arg2 userDSID:(id)arg3 error:(id *)arg4;
+ (id)keyPathsForValuesAffectingUsageDetailsCoordinator;
+ (id)keyPathsForValuesAffectingPasscodeEnabled;

- (id)init;
- (_Bool)validatePIN:(id)arg1;
- (id)initWithUserDSID:(id)arg1 deviceIdentifier:(id)arg2 usageReportType:(id)arg3 usageContext:(long long)arg4;
- (void)enableScreenTimeWithPIN:(id)arg1 recoveryAltDSID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setScreenTimeSyncingEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadViewModelWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_registerForPersistentStoreNotifications;
- (void)setScreenTimeEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)coordinatorForChild:(id)arg1 deviceIdentifier:(id)arg2 usageReportType:(id)arg3;
- (void)setShareWebUsageEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setPIN:(id)arg1 recoveryAltDSID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setPIN:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadViewModelRightNow;
- (void)_registerForWillResignActiveNotifications;
- (void)_passcodeSessionHasEnded:(id)arg1;
- (id)organizationIdentifierForUsage;
- (id)organizationIdentifierForManagement;
- (void)_setPIN:(id)arg1 recoveryAltDSID:(id)arg2 shouldSetRecoveryAppleID:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)saveViewModel:(id)arg1;
- (void)groupResultsControllerDidChangeContents:(id)arg1;

@end
