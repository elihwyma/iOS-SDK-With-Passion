/*
 Image: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
 */

#import <Foundation/NSObject.h>

@class LiveFSFPExtensionHelper, NSData, NSDate, NSDictionary, NSError, NSFileProviderItemVersion, NSNumber, NSPersonNameComponents, NSSet, NSString, NSURL;

@protocol NSFileProviderItemFlags;

__attribute__((visibility("hidden")))
@interface LiveFSFPClusterItem : NSObject

{
    LiveFSFPExtensionHelper *_extension;
    NSString *_fp_domainIdentifier;
    NSString *_filename;
}

@property (retain, readonly) LiveFSFPExtensionHelper *extension;
@property (copy, readonly) NSString *fp_domainIdentifier;
@property (copy, readonly) NSString *filename;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *itemIdentifier;
@property (copy, nonatomic, readonly) NSString *parentItemIdentifier;
@property (copy, nonatomic, readonly) NSString *typeIdentifier;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly) id <NSFileProviderItemFlags> flags;
@property (copy, nonatomic, readonly) NSNumber *documentSize;
@property (copy, nonatomic, readonly) NSNumber *childItemCount;
@property (copy, nonatomic, readonly) NSDate *creationDate;
@property (copy, nonatomic, readonly) NSDate *contentModificationDate;
@property (nonatomic, readonly) NSDictionary *extendedAttributes;
@property (copy, nonatomic, readonly) NSDate *lastUsedDate;
@property (copy, nonatomic, readonly) NSData *tagData;
@property (copy, nonatomic, readonly) NSNumber *favoriteRank;
@property (nonatomic, readonly, getter=isTrashed) _Bool trashed;
@property (nonatomic, readonly, getter=isUploaded) _Bool uploaded;
@property (nonatomic, readonly, getter=isUploading) _Bool uploading;
@property (copy, nonatomic, readonly) NSError *uploadingError;
@property (nonatomic, readonly, getter=isDownloaded) _Bool downloaded;
@property (nonatomic, readonly, getter=isDownloading) _Bool downloading;
@property (copy, nonatomic, readonly) NSError *downloadingError;
@property (nonatomic, readonly, getter=isExcludedFromSync) _Bool excludedFromSync;
@property (nonatomic, readonly, getter=isMostRecentVersionDownloaded) _Bool mostRecentVersionDownloaded;
@property (nonatomic, readonly, getter=isShared) _Bool shared;
@property (nonatomic, readonly, getter=isSharedByCurrentUser) _Bool sharedByCurrentUser;
@property (nonatomic, readonly) NSPersonNameComponents *ownerNameComponents;
@property (nonatomic, readonly) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (nonatomic, readonly) NSData *versionIdentifier;
@property (nonatomic, readonly) NSFileProviderItemVersion *itemVersion;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (copy, readonly) NSURL *fileURL;
@property (copy, readonly) NSNumber *hasUnresolvedConflicts;
@property (copy, readonly) NSString *containerDisplayName;
@property (copy, readonly, getter=isDownloadRequested) NSNumber *downloadRequested;
@property (readonly, getter=isHidden) _Bool hidden;
@property (copy, readonly) NSString *providerIdentifier;
@property (copy, readonly) NSString *sharingPermissions;
@property (copy, readonly) NSString *fp_spotlightDomainIdentifier;
@property (copy, readonly) NSString *fp_parentDomainIdentifier;
@property (readonly, getter=fp_isUbiquitous) _Bool fp_ubiquitous;
@property (readonly) _Bool fp_isContainer;
@property (readonly) _Bool fp_isContainerPristine;
@property (copy, readonly) NSString *fp_cloudContainerIdentifier;
@property (copy, readonly) NSSet *fp_cloudContainerClientBundleIdentifiers;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly, getter=isTopLevelSharedItem) _Bool topLevelSharedItem;
@property (copy, readonly) NSString *fileSystemFilename;
@property (nonatomic, readonly, getter=fp_isLastModifiedByCurrentUser) _Bool fp_lastModifiedByCurrentUser;
@property (nonatomic, readonly, getter=fp_isAddedByCurrentUser) _Bool fp_addedByCurrentUser;
@property (nonatomic, readonly) NSPersonNameComponents *fp_addedByNameComponents;
@property (nonatomic, readonly) NSString *preformattedOwnerName;
@property (nonatomic, readonly) NSString *preformattedMostRecentEditorName;

+ (id)newWithName:(id)arg1 extension:(id)arg2;

- (id)initWithName:(id)arg1 extension:(id)arg2;

@end
