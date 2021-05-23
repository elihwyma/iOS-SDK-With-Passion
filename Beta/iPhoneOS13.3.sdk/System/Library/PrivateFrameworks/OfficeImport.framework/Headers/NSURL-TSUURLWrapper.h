/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (TSUURLWrapper)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSURL *URL;
@property (readonly, getter=tsu_isInTrash) _Bool tsu_inTrash;
@property (nonatomic, readonly) NSString *tsu_UTI;

+ (id)tsu_fileURLWithPath:(id)arg1;
+ (id)URLWithPackagePart:(id)arg1;

- (_Bool)tsu_conformsToUTI:(id)arg1;
- (_Bool)tsu_conformsToAnyUTI:(id)arg1;
- (unsigned long long)tsu_fileSize;
- (_Bool)tsu_fileSize:(out unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)tsu_isShared:(out _Bool *)arg1 error:(id *)arg2;
- (_Bool)tsu_isShareCollaborator:(out _Bool *)arg1 error:(id *)arg2;
- (_Bool)tsu_isShareOwner:(out _Bool *)arg1 error:(id *)arg2;
- (_Bool)tsu_displayName:(out id *)arg1 error:(id *)arg2;
- (_Bool)tsu_isDocumentUploaded:(out _Bool *)arg1 error:(id *)arg2;
- (_Bool)tsu_shareOwnerName:(out id *)arg1 error:(id *)arg2;
- (id)tsu_fileSystemTypeName;
- (id)tsu_reachableFileURLByDeletingUnreachablePathComponents;
- (void)tsu_performSecurityScopedResourceAccessAsynchronouslyUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsu_documentIdentifier;
- (_Bool)tsu_isFileSizeTooLargeForSharing;
- (_Bool)tsu_isShared;
- (_Bool)_isShareRole:(out _Bool *)arg1 role:(id)arg2 error:(id *)arg3;
- (_Bool)tsu_isShareCollaborator;
- (_Bool)tsu_isShareOwner;
- (id)tsu_displayName;
- (_Bool)tsu_isDocumentUploaded;
- (id)tsu_shareOwnerName;
- (_Bool)tsu_setNeedsDocumentIdentifierAndReturnError:(out id *)arg1;
- (id)tsu_fileTypeIdentifierHandlingFileCoordinationPromises;
- (_Bool)tsu_isOnForeignVolume;
- (_Bool)tsu_isOnAPFSVolume;
- (_Bool)tsu_isOnSameVolumeAs:(id)arg1;
- (id)tsu_fileProviderBookmarkableString;
- (void)tsu_performSecurityScopedResourceAccessUsingBlock:(CDUnknownBlockType)arg1;
- (void)tsu_removeCachedResourceValueForKeys:(id)arg1;
- (id)initWithPackagePart:(id)arg1;
- (_Bool)isInternalToPackage;

@end
