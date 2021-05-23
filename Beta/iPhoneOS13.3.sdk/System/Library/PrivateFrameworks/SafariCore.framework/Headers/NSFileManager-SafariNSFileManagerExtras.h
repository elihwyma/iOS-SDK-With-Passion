/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (SafariNSFileManagerExtras)

- (id)safari_settingsDirectoryURL;
- (id)safari_ensureDirectoryExists:(id)arg1;
- (id)_safari_containerDirectory;
- (id)_safari_libraryDirectoryForHomeDirectory:(id)arg1;
- (id)safari_settingsDirectoryForLibraryDirectory:(id)arg1;
- (id)safari_safariLibraryDirectory;
- (id)safari_subdirectoryWithName:(id)arg1 inUserDomainOfDirectory:(unsigned long long)arg2;
- (id)safari_settingsDirectoryForHomeDirectory:(id)arg1;
- (id)safari_nonContaineredSettingsDirectoryURL;
- (id)safari_productionSafariSettingsDirectory;
- (id)safari_autoFillQuirksDownloadDirectoryURL;
- (id)safari_createTemporaryDirectoryWithTemplate:(id)arg1;
- (_Bool)safari_moveDownloadedFileAtURL:(id)arg1 toURL:(id)arg2;
- (_Bool)safari_removeFileAtURL:(id)arg1 error:(id *)arg2;
- (id)safari_pathWithUniqueFilenameForPath:(id)arg1;
- (id)safari_frameworksDirectoryURLs;

@end
