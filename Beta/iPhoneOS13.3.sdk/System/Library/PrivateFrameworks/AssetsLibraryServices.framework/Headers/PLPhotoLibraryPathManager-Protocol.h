/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/Swift-Protocol.h>

@protocol PLPhotoLibraryPathManager <Swift>

+ (unsigned short)systemLibraryPathManager;

- (unsigned short)photosDatabasePath;
- (unsigned short)photosAsideDatabasePath;
- (unsigned short)photoDirectoryWithType: /* Error: Ran out of types for this method. */;
- (unsigned short)photoDirectoryWithType:createIfNeeded:error: /* Error: Ran out of types for this method. */;
- (unsigned short)privateCacheDirectoryWithSubType: /* Error: Ran out of types for this method. */;
- (unsigned short)privateDirectoryWithSubType:createIfNeeded:error: /* Error: Ran out of types for this method. */;
- (unsigned short)privateCacheDirectoryWithSubType:createIfNeeded:error: /* Error: Ran out of types for this method. */;
- (unsigned short)photoDirectoryWithType:additionalPathComponents: /* Error: Ran out of types for this method. */;
- (unsigned short)obtainAccessAndWaitWithFileWithIdentifier:mode:toURLWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)photoDirectoryWithType:leafType:additionalPathComponents:createIfNeeded:error: /* Error: Ran out of types for this method. */;
- (unsigned short)photoDirectoryWithType:leafType:createIfNeeded:error: /* Error: Ran out of types for this method. */;
- (unsigned short)privateDirectoryWithSubType: /* Error: Ran out of types for this method. */;
- (unsigned short)pathsForExternalWriters;
- (unsigned short)externalDirectoryWithSubType:createIfNeeded:error: /* Error: Ran out of types for this method. */;
- (unsigned short)pathsForClientAccess: /* Error: Ran out of types for this method. */;
- (unsigned short)pathsForPermissionCheck;
- (unsigned short)createPathsForNewLibrariesWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)photosCPLDatabasePath;
- (unsigned short)privateDirectoryWithSubType:leafType:createIfNeeded:error: /* Error: Ran out of types for this method. */;
- (unsigned short)privateDirectoryWithSubType:leafType:additionalPathComponents:createIfNeeded:error: /* Error: Ran out of types for this method. */;
- (unsigned short)externalDirectoryWithSubType: /* Error: Ran out of types for this method. */;
- (unsigned short)externalDirectoryWithSubType:leafType:additionalPathComponents:createIfNeeded:error: /* Error: Ran out of types for this method. */;

@end
