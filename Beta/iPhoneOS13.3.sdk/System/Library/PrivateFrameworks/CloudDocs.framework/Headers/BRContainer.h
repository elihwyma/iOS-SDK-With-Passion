/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class BRMangledID, NSData, NSDate, NSDictionary, NSNumber, NSPurgeableData, NSSet, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface BRContainer : NSObject

{
    BRMangledID *_mangledID;
    NSSet *_bundleIDs;
    NSDictionary *_bundleIDVersions;
    NSString *_localizedName;
    NSSet *_documentsTypes;
    NSSet *_exportedTypes;
    NSSet *_importedTypes;
    NSDictionary *_iconMetadata;
    NSDictionary *_iconURLs;
    NSNumber *_iconGeneratorVersion;
    _Bool _isObservingOverQuota;
    _Bool _isOverQuota;
    _Bool _isCloudSyncTCCDisabled;
    _Bool _isInInitialState;
    _Bool _isInCloudDocsZone;
    NSNumber *_isDocumentScopePublicAsNumber;
    _Bool _isObservingLastServerUpdate;
    NSDate *_lastServerUpdate;
    _Bool _isObservingCurrentStatus;
    unsigned int _currentStatus;
    NSData *_imageSandboxExtension;
    _Bool _shouldUsePurgeableData;
    NSData *_dataRepresentation;
    NSPurgeableData *_purgeableDataRepresentation;
    NSObject<OS_dispatch_queue> *_observationSetupQueueForDefaultConnection;
    NSObject<OS_dispatch_queue> *_observationSetupQueueForSecondaryConnection;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly) NSDate *lastServerUpdate;
@property (readonly) unsigned int currentStatus;
@property (retain) NSDate *lastServerUpdate;
@property unsigned int currentStatus;
@property (readonly, getter=isOverQuota) _Bool overQuota;
@property (getter=isOverQuota) _Bool overQuota;
@property (nonatomic) _Bool isCloudSyncTCCDisabled;
@property (nonatomic) _Bool isInInitialState;
@property (nonatomic) _Bool isInCloudDocsZone;
@property (copy, nonatomic, readonly) NSSet *bundleIdentifiers;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) _Bool isDocumentScopePublic;
@property (nonatomic, readonly) NSString *supportedFolderLevels;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSURL *documentsURL;
@property (nonatomic, readonly) NSURL *trashURL;
@property (nonatomic, readonly) NSSet *documentsTypes;
@property (nonatomic, readonly) NSSet *exportedTypes;
@property (nonatomic, readonly) NSSet *importedTypes;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)allContainersByContainerID;
+ (_Bool)versionOfBundle:(id)arg1 changedFromVersion:(id)arg2;
+ (id)containerForMangledID:(id)arg1;
+ (id)classesForDecoding;
+ (id)localizedNameForDefaultCloudDocsContainer;
+ (id)localizedNameForDesktopContainer;
+ (id)localizedNameForDocumentsContainer;
+ (id)documentContainers;
+ (id)allContainers;
+ (id)_isDocumentScopePublicAsNumberWithProperties:(id)arg1 mangledID:(id)arg2;
+ (id)_bundleIDVersionsWithProperties:(id)arg1 mangledID:(id)arg2;
+ (id)_bundleIDsWithProperties:(id)arg1;
+ (id)_localizedNameWithProperties:(id)arg1 mangledID:(id)arg2;
+ (id)_localizedNameWithProperties:(id)arg1 mangledID:(id)arg2 preferredLanguages:(id)arg3;
+ (id)_documentsTypesWithProperties:(id)arg1;
+ (id)_exportedTypesWithProperties:(id)arg1;
+ (id)_importedTypesWithProperties:(id)arg1;
+ (id)_iconMetadataWithProperties:(id)arg1;
+ (id)_iconGeneratorVersionWithProperties:(id)arg1;
+ (id)allContainersBlockIfNeeded:(_Bool)arg1;
+ (void)forceRefreshContainers:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)postContainerListUpdateNotification;
+ (id)_containerRepositoryURLForMangledID:(id)arg1;
+ (id)containersRepositoryURL;
+ (id)_URLForPlistOfMangledID:(id)arg1;
+ (id)bundleIdentifiersEnumeratorForProperties:(id)arg1;
+ (id)bundlePropertyEnumerator:(id)arg1 valuesOfClass:(Class)arg2 forProperties:(id)arg3;
+ (id)_sanitizedContainerFallbackNameForMangledID:(id)arg1;
+ (id)_pathForIconName:(id)arg1 mangledID:(id)arg2;
+ (_Bool)canMoveFilesWithoutDownloadingFromContainer:(id)arg1 toContainer:(id)arg2;
+ (void)forceRefreshAllContainersWithCompletion:(CDUnknownBlockType)arg1;
+ (id)_iconURLsWithProperties:(id)arg1 mangledID:(id)arg2;
+ (id)containerInRepositoryURL:(id)arg1 createIfMissing:(_Bool)arg2 error:(id *)arg3;
+ (id)documentsContainersInBackupHomeAtURL:(id)arg1 error:(id *)arg2;
+ (id)containerInRepositoryURL:(id)arg1 error:(id *)arg2;
+ (id)containerForItemAtURL:(id)arg1 error:(id *)arg2;
+ (void)_generateiOSIconsForMangledID:(id)arg1 usingBundle:(struct __CFBundle *)arg2 generatedIcons:(id)arg3;
+ (_Bool)isDocumentScopePublicWithProperties:(id)arg1 mangledID:(id)arg2;
+ (void)postContainerStatusChangeNotificationWithID:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)propertiesForMangledID:(id)arg1 usingBundle:(struct __CFBundle *)arg2 minimumBundleVersion:(id)arg3 bundleIcons:(id *)arg4;
+ (void)unregisterCurrentProcessAsPriorityHint;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)trashRestoreStringForURL:(id)arg1;
- (id)localizedNameWithPreferredLanguages:(id)arg1;
- (_Bool)containsExcludedDocumentsOnTheFSWithExcludedButPreservedFilename:(id)arg1 excludedButPreservedExtensions:(id)arg2 andStampUploadedAppWithXattr:(_Bool)arg3;
- (id)initWithMangledID:(id)arg1;
- (void)_replaceDataRepresentationWithData:(id)arg1;
- (id)_pathForPlist;
- (void)accessDataRepresentationInBlock:(CDUnknownBlockType)arg1;
- (void)accessPropertiesInBlock:(CDUnknownBlockType)arg1;
- (id)computedProperties;
- (id)iconMetadata;
- (id)_imageDataForSize:(struct CGSize)arg1 scale:(long long)arg2 isiOSIcon:(_Bool *)arg3 shouldTransformToAppIcon:(_Bool *)arg4;
- (id)_pathForIconName:(id)arg1;
- (id)iconGeneratorVersion;
- (id)_containerRepositoryURL;
- (id)initWithDocsOrDesktopContainerID:(id)arg1;
- (id)initWithMangledID:(id)arg1 dataRepresentation:(id)arg2;
- (id)bundleIDVersions;
- (id)imageRepresentationsAvailable;
- (id)imageDataForSize:(struct CGSize)arg1 scale:(long long)arg2;
- (id)imageDataForSize:(struct CGSize)arg1 scale:(long long)arg2 isiOSIcon:(_Bool *)arg3;
- (id)imageDataForSize:(struct CGSize)arg1 scale:(long long)arg2 shouldTransformToAppIcon:(_Bool *)arg3;
- (void)forceRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performWhileAccessingSecurityScopedContainer:(CDUnknownBlockType)arg1;
- (_Bool)deleteAllContentsOnClientAndServer:(id *)arg1;
- (_Bool)_updateMetadataOnDiskWithProperties:(id)arg1;
- (id)versionNumberForBundleIdentifier:(id)arg1;
- (_Bool)hasIconWithName:(id)arg1;
- (id)iconURLs;
- (id)bestFittingImageDataForSize:(struct CGSize)arg1 shouldTransformToAppIcon:(_Bool *)arg2;
- (id)copyDataRepresentation;
- (_Bool)updateMetadataWithExtractorProperties:(id)arg1 iconPaths:(id)arg2 bundleID:(id)arg3;
- (_Bool)updateMetadataWithRecordData:(id)arg1 iconPaths:(id)arg2;
- (_Bool)registerCurrentProcessAsPriorityHintWithError:(id *)arg1;

@end
