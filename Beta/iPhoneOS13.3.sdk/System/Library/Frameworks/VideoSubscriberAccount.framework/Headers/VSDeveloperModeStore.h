/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSString, VSPersistentContainer, VSRemoteNotifier;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VSDeveloperModeStore : NSObject

{
    VSPersistentContainer *_persistentContainer;
    NSObject<OS_dispatch_queue> *_settingsQueue;
    VSRemoteNotifier *_serviceChangeRemoteNotifier;
    VSRemoteNotifier *_settingsChangeRemoteNotifier;
    VSRemoteNotifier *_providersChangeRemoteNotifier;
}

@property (retain, nonatomic) VSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *settingsQueue;
@property (retain, nonatomic) VSRemoteNotifier *serviceChangeRemoteNotifier;
@property (retain, nonatomic) VSRemoteNotifier *settingsChangeRemoteNotifier;
@property (retain, nonatomic) VSRemoteNotifier *providersChangeRemoteNotifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addDeveloperIdentityProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateExistingDeveloperIdentityProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDeveloperIdentityProviderWithUniqueID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDeveloperSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchDeveloperIdentityProvidersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateDeveloperSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)migrateSettingsPropertyFileIfNecessary;
- (id)legacySettingsPropertiesPath;
- (id)settingsPropertiesURL;
- (id)_identityProviderFetchRequest;
- (void)_performIdentityProviderBlock:(CDUnknownBlockType)arg1;
- (id)_developerIdentityProviderInContext:(id)arg1;
- (void)_noteServiceDidChange;
- (void)_noteProvidersDidChange;
- (void)_noteSettingsDidChange;
- (id)_nullableObjectOrNSNull:(id)arg1;

@end
