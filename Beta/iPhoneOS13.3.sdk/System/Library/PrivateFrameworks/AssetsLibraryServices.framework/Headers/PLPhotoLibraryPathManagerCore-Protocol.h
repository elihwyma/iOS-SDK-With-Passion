/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/Swift-Protocol.h>

@class NSString, NSURL, PLFileSystemCapabilities;

@protocol PLPhotoLibraryPathManagerCore <Swift>

@property (copy, readonly) NSURL *libraryURL;
@property (copy, readonly) NSString *baseDirectory;
@property (nonatomic, readonly) PLFileSystemCapabilities *capabilities;
@property (copy, readonly) NSString *assetUUIDRecoveryMappingPath;

+ (unsigned short)systemLibraryURL;
+ (unsigned short)isSystemPhotoLibraryURL: /* Error: Ran out of types for this method. */;
+ (unsigned short)isSystemLibraryURLDefined;
+ (unsigned short)setSystemLibraryURL:options:error: /* Error: Ran out of types for this method. */;
+ (unsigned short)systemLibraryBaseDirectory;

- (unsigned short)syncInfoPath;
- (unsigned short)knownDBPaths;
- (unsigned short)setDataProtectionComplete: /* Error: Ran out of types for this method. */;
- (unsigned short)isDataProtectionComplete;
- (unsigned short)photoDirectoryCreationMaskResetWithType: /* Error: Ran out of types for this method. */;
- (unsigned short)pathToAssetsToAlbumsMapping;
- (unsigned short)temporaryDragAndDropDirectoryCreateIfNeeded:error: /* Error: Ran out of types for this method. */;
- (unsigned short)readOnlyUrlWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)setExtendedAttributesWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)setExtendedAttributesWithIdentifier:andURL: /* Error: Ran out of types for this method. */;
- (unsigned short)temporaryFileBackedDebugDirectoryCreateIfNeeded:error: /* Error: Ran out of types for this method. */;
- (unsigned short)privateDirectoryCreationMaskResetWithSubType: /* Error: Ran out of types for this method. */;
- (unsigned short)privateCacheDirectoryCreationMaskResetWithSubType: /* Error: Ran out of types for this method. */;
- (unsigned short)externalDirectoryCreationMaskResetWithSubType: /* Error: Ran out of types for this method. */;

@end
