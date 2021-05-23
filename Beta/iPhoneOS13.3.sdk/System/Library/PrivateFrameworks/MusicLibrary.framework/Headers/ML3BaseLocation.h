/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Entity.h>

@interface ML3BaseLocation : ML3Entity

+ (id)newWithDictionary:(id)arg1 inLibrary:(id)arg2;
+ (id)databaseTable;
+ (_Bool)insertionChangesLibraryContents;

- (void)enumerateOrphanedAssetsUsingBlock:(CDUnknownBlockType)arg1;

@end
