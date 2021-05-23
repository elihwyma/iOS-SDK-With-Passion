/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (KonaAdditions)

+ (id)multiUserDelegate;
+ (void)setMultiUserDelegate:(id)arg1;

- (id)importExportDirectory;
- (_Bool)enoughSpaceToExportProject:(unsigned long long)arg1;
- (id)contentsOfSharedMediaDirectory;
- (id)sharedMediaDirectory;
- (id)itunesExportedProjectsTrashDirectory;
- (id)trashDirectory;
- (id)modificationDate:(id)arg1;
- (id)privateDocumentsDirectory;
- (unsigned long long)sizeOfFileAtPath:(id)arg1;
- (unsigned long long)freeBytesOnDisk;
- (id)localPrivateDocumentsDirectory;
- (id)ubiquityContainer;
- (_Bool)enoughSpaceToEditProjects;
- (id)sharedAudioDirectory;
- (id)pathAfterAssetLibraryCopy:(id)arg1 dest:(id)arg2;
- (id)pathAfterMediaPlayerCopy:(id)arg1 dest:(id)arg2;
- (_Bool)enoughSpaceToRecordMedia;
- (id)cloudImportDirectory;
- (id)renderedAdjustmentsDirectory;
- (id)localTheaterDirectory;
- (id)contentsOfPrivateDocumentsDirectory;
- (id)contentsOfImportExportDirectory;
- (id)allProjectPlistPathsExcludingPath:(id)arg1;
- (id)uniquePathFromPath:(id)arg1;
- (_Bool)copyFileFromAssetLibrary:(id)arg1 toFolder:(id)arg2;
- (_Bool)copyAudioFileFromMediaPlayerURL:(id)arg1 toFolder:(id)arg2;

@end
