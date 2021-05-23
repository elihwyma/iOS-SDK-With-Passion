/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSManagedObjectID, NSMutableDictionary, NSNumber, NSString, STContentPrivacyViewModel;

@protocol STPersistenceControllerProtocol;

__attribute__((visibility("hidden")))
@interface STContentPrivacyViewModelCoordinator : NSObject

{
    _Bool _isLocalDevice;
    STContentPrivacyViewModel *_viewModel;
    id <STPersistenceControllerProtocol> _persistenceController;
    NSString *_organizationIdentifier;
    NSNumber *_userDSID;
    NSString *_userName;
    NSManagedObjectID *_userObjectID;
    NSMutableDictionary *_configurationPayloadsByType;
    NSArray *_fetchedResultsControllers;
    unsigned long long _numExpectedChanges;
}

@property (retain, nonatomic) STContentPrivacyViewModel *viewModel;
@property (nonatomic, readonly) id <STPersistenceControllerProtocol> persistenceController;
@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSNumber *userDSID;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSManagedObjectID *userObjectID;
@property (nonatomic) _Bool isLocalDevice;
@property (retain, nonatomic) NSMutableDictionary *configurationPayloadsByType;
@property (retain, nonatomic) NSArray *fetchedResultsControllers;
@property unsigned long long numExpectedChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_activationIdentifier;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)saveCommunicationLimits:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveRestrictionValue:(id)arg1 forItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)saveContentPrivacyEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_valuesByRestriction;
- (id)_visibleRestrictions;
- (void)loadViewModelWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_registerForPersistentStoreNotifications;
- (void)_contactStoreDidChange:(id)arg1;
- (void)reloadViewModelForRemoteChanges;
- (id)_remoteDeviceRestrictions;
- (id)_localDeviceRestrictions;
- (id)valueForRestriction:(id)arg1;
- (id)_valueForWebFilterState;
- (id)_valueForMCFeature:(id)arg1;
- (id)_valueForSBCapability:(id)arg1;
- (id)_valueInConfiguration:(id)arg1 keyPath:(id)arg2;
- (id)_identifierForConfigurationType:(id)arg1;
- (void)_setValue:(id)arg1 forSBCapability:(id)arg2;
- (void)_setValue:(id)arg1 forMCFeature:(id)arg2;
- (id)_createUnrestrictedConfiguration:(id)arg1;
- (void)_updateConfiguration:(id)arg1 keyPath:(id)arg2 value:(id)arg3;
- (id)_restrictionsForWebFilterState:(unsigned long long)arg1;
- (void)saveValuesForRestrictions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithPersistenceController:(id)arg1 organizationIdentifier:(id)arg2 userDSID:(id)arg3 userName:(id)arg4;

@end
