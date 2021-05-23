/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (IMSharedUtilities)

- (_Bool)__im_setiCloudBackupAttribute:(_Bool)arg1 onItemAtPath:(id)arg2 error:(id *)arg3;
- (_Bool)__im_getiCloudBackupAttributeForItemAtPath:(id)arg1 attributeValue:(_Bool *)arg2 error:(id *)arg3;
- (_Bool)__im_isPathOnMissingVolume:(id)arg1;
- (_Bool)__im_setiCloudBackupAttribute:(_Bool)arg1 onDirectoryAndChildrenAtPath:(id)arg2 error:(id *)arg3;
- (_Bool)__im_getItemsRemovedFromiCloudBackupsAtDirectoryPath:(id)arg1 outPaths:(id *)arg2 outRemovedPaths:(id *)arg3 error:(id *)arg4;
- (_Bool)__im_makeDirectoriesInPath:(id)arg1 mode:(unsigned int)arg2;

@end
