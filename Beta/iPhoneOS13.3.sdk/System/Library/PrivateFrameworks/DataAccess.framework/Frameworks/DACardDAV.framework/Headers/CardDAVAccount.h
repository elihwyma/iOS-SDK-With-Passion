/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
 */

#import <DataAccess/DAAccount.h>

@class CardDAVLocalDBHelper, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger, DACoreDAVTaskManager, NSString;

@interface CardDAVAccount : DAAccount

{
    int _cardDAVAccountVersion;
    CardDAVLocalDBHelper *_databaseHelper;
    CoreDAVDiscoveryTaskGroup *_checkValidityTaskGroup;
    DACoreDAVLogger *_curLogger;
}

@property (retain, nonatomic) CoreDAVDiscoveryTaskGroup *checkValidityTaskGroup;
@property (retain, nonatomic) DACoreDAVLogger *curLogger;
@property (nonatomic, readonly) int cardDAVAccountVersion;
@property (nonatomic, readonly) DACoreDAVTaskManager *taskManager;
@property (nonatomic, readonly) CardDAVLocalDBHelper *databaseHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)addressBookConstraintsPlistPath;

- (void)dealloc;
- (id)logHandle;
- (id)userAgentHeader;
- (_Bool)isEqualToAccount:(id)arg1;
- (_Bool)enabledForDADataclass:(long long)arg1;
- (id)initWithBackingAccountInfo:(id)arg1;
- (void)removeFromCoreDAVLoggingDelegates;
- (void)addToCoreDAVLoggingDelegates;
- (id)onBehalfOfBundleIdentifier;
- (id)spinnerIdentifiers;
- (void)discoverInitialPropertiesWithConsumer:(id)arg1;
- (id)serverRoot;
- (id)serverComplianceClasses;
- (_Bool)handleTrustChallenge:(id)arg1;
- (id)localizedIdenticalAccountFailureMessage;
- (id)localizedInvalidPasswordMessage;
- (id)wellKnownPaths;
- (void)noteHomeSetOnDifferentHost:(id)arg1;
- (void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3;
- (_Bool)shouldLogTransmittedData;
- (void)coreDAVLogTransmittedDataPartial:(id)arg1;
- (void)coreDAVTransmittedDataFinished;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)oauthVariant;
- (id)copyImageContentsAtURL:(id)arg1 outError:(id *)arg2;
- (void)_massageAddedOrModifiedVCard:(id)arg1;
- (void)setServerComplianceClasses:(id)arg1;

@end
