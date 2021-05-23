/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (CalClassAdditions)

+ (id)mimeTypeForFile:(id)arg1;

- (_Bool)makeCompletePath:(id)arg1 mode:(int)arg2;
- (id)archivedDataAtPath:(id)arg1 createPKZipArchive:(_Bool)arg2 error:(id *)arg3;
- (id)archivedDataAtPath:(id)arg1 createPKZipArchive:(_Bool)arg2;
- (_Bool)archiveURLToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(_Bool)arg3 error:(id *)arg4;
- (_Bool)archivePathToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(_Bool)arg3 error:(id *)arg4;
- (id)makeUniqueDirectoryWithPath:(id)arg1;
- (_Bool)archiveURLToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(_Bool)arg3;
- (_Bool)archivePathToFile:(id)arg1 toFile:(id)arg2 createPKZipArchive:(_Bool)arg3;

@end
