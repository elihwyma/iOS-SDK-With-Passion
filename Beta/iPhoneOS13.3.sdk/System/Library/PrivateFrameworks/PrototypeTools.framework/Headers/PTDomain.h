/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSXPCConnection, PTDomainInfo, PTSettings, PTTestRecipe;

@interface PTDomain : NSObject

{
    NSXPCConnection *_serverConnection;
    PTDomainInfo *_domainInfo;
    NSString *_domainID;
    PTSettings *_rootSettings;
    NSMutableDictionary *_testRecipesByIdentifier;
    PTTestRecipe *_activeTestRecipe;
    _Bool _registrationRequested;
    _Bool _registrationCompleted;
    double _delayBeforeRegisteringAfterInterruption;
    _Bool _archiveIsApplied;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)domainName;
+ (id)_sharedInstance;
+ (id)rootSettings;
+ (id)domainGroupName;
+ (Class)rootSettingsClass;
+ (void)registerTestRecipe:(id)arg1;

- (void)dealloc;
- (id)_init;
- (id)_rootSettings;
- (void)_registerTestRecipe:(id)arg1;
- (void)_updateServerConnectionStatusIfNecessary;
- (void)_disableObservationIfNecessary;
- (void)_updateActiveTestRecipe;
- (void)_applyArchive:(id)arg1;
- (void)_noteRegistrationCompleted;
- (void)_restoreDefaultSettings;
- (void)_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2;
- (void)_createConnection;
- (void)_registerWithServerIfNecessary;
- (void)_tearDownConnection;
- (void)_handleConnectionInterrupted;
- (void)_handleConnectionInvalidated;
- (void)updateSettingsFromArchive:(id)arg1;
- (void)restoreDefaultSettings;
- (void)setArchiveValue:(id)arg1 forKeyPath:(id)arg2;
- (void)invokeOutletAtKeyPath:(id)arg1;
- (void)sendActiveTestRecipeEvent:(long long)arg1;

@end
