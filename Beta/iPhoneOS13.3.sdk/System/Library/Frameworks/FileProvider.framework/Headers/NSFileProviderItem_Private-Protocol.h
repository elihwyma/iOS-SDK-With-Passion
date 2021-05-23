/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/Swift-Protocol.h>

@class NSNumber, NSPersonNameComponents, NSSet, NSString, NSURL;

@protocol NSFileProviderItem_Private <Swift>

@property (copy, readonly) NSURL *fileURL;
@property (copy, readonly) NSNumber *hasUnresolvedConflicts;
@property (copy, readonly) NSString *containerDisplayName;
@property (copy, readonly, getter=isDownloadRequested) NSNumber *downloadRequested;
@property (readonly, getter=isHidden) _Bool hidden;
@property (copy, readonly) NSString *providerIdentifier;
@property (copy, readonly) NSString *sharingPermissions;
@property (copy, readonly) NSString *fp_spotlightDomainIdentifier;
@property (copy, readonly) NSString *fp_domainIdentifier;
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

@end
