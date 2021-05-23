/*
 Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

#import <OSAnalytics/OSAProxyConfiguration.h>

@class NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface OSASystemConfiguration : OSAProxyConfiguration

{
    _Bool _appleInternal;
    _Bool _carrierInstall;
    _Bool _multiUserMode;
    NSMutableDictionary *_submissionMetadata;
    NSString *_pairedWatchOS;
    NSDictionary *_logConfig;
    NSSet *_logBlacklist;
    NSDictionary *_submissionParams;
    NSDictionary *_whitelistedDomains;
    NSString *_pathRoot;
    NSString *_pathContainerRoot;
    NSString *_pathSubmission;
    NSString *_pathPreferences;
    NSString *_pathDiagnostics;
    NSString *_pathCATasking;
    NSString *_pathAWDTasking;
}

@property (readonly) _Bool appleInternal;
@property (readonly) _Bool carrierInstall;
@property (readonly) _Bool multiUserMode;
@property (readonly) NSMutableDictionary *submissionMetadata;
@property (copy) NSString *pathRoot;
@property (readonly) NSString *pathContainerRoot;
@property (readonly) NSString *pathSubmission;
@property (readonly) NSString *pathPreferences;
@property (readonly) NSString *pathDiagnostics;
@property (readonly) NSString *pathCATasking;
@property (readonly) NSString *pathAWDTasking;

+ (id)sharedInstance;
+ (id)ensureUsablePath:(id)arg1 component:(id)arg2 options:(id)arg3;
+ (void)ensureConformanceOfFile:(int)arg1;

- (_Bool)isProxy;
- (id)identifier;
- (id)productVersion;
- (id)serialNumber;
- (id)buildVersion;
- (void)saveToPath:(id)arg1;
- (id)productName;
- (id)automatedDeviceGroup;
- (id)systemId;
- (id)productNameVersionBuildString;
- (id)getPrefsKey:(id)arg1 forDomain:(id)arg2 withOptions:(id)arg3;
- (id)modelCode;
- (id)crashReporterKey;
- (id)getTaskingKey:(id)arg1;
- (id)logPath;
- (_Bool)setPrefsKey:(id)arg1 value:(id)arg2 forDomain:(id)arg3 withSync:(_Bool)arg4;
- (id)uiCountryCode;
- (id)releaseType;
- (id)automatedContextURL;
- (id)seedGroup;
- (id)experimentGroup;
- (id)internalKey;
- (id)osTrain;
- (id)targetAudience;
- (id)awdReporterKey;
- (id)currentTaskingIDByRouting;
- (id)getLogBlacklist;
- (id)getPropsForLogType:(id)arg1;
- (_Bool)isConfigEnabled:(id)arg1;
- (id)assembleMetadataAt:(double)arg1 withOptions:(unsigned int)arg2;
- (_Bool)usesLegacySubmission:(id)arg1;
- (id)pairedWatchOS;
- (void)sysVersionData;
- (void)onceConfig;
- (id)logExt:(id)arg1;
- (id)logPrefix:(id)arg1;
- (id)pathSubmissionForOwner:(id)arg1;
- (id)productBuildString;
- (id)productReleaseString;
- (void)plumbEmail:(id)arg1;
- (id)submissionParam:(id)arg1;
- (_Bool)isWhitelisted:(id)arg1 forDomain:(id)arg2;
- (id)createReportMetadata:(id)arg1 with:(id)arg2 at:(double)arg3 usingOptions:(id)arg4;
- (id)logPathForType:(id)arg1 at:(double)arg2 options:(id)arg3;

@end
