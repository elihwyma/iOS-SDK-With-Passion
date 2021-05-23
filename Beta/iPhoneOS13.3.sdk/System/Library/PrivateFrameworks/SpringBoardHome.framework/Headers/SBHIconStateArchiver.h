/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@interface SBHIconStateArchiver : NSObject

+ (id)indexPathForLeafIdentifier:(id)arg1 inArchive:(id)arg2;
+ (id)folderPathForLeafIdentifier:(id)arg1 inArchive:(id)arg2 iconSource:(id)arg3;
+ (id)leafIdentifiersInListAtIndexPath:(id)arg1 inArchive:(id)arg2;
+ (id)leafIdentifiersFromArchive:(id)arg1;
+ (id)modernizeRootArchive:(id)arg1;
+ (id)unarchiveRootFolderFromArchive:(id)arg1 withIconSource:(id)arg2;
+ (id)archiveRootFolderInModel:(id)arg1 metadata:(id)arg2;
+ (id)_representationForNode:(id)arg1 inModel:(id)arg2;
+ (void)_addLeafNodesForNode:(id)arg1 toSet:(id)arg2;
+ (id)_pathForNode:(id)arg1 toIdentifier:(id)arg2;
+ (id)_nodeAtPath:(id)arg1 inNode:(id)arg2;
+ (id)_representationForFolder:(id)arg1 inModel:(id)arg2;
+ (id)_representationForIcon:(id)arg1 inModel:(id)arg2;
+ (_Bool)_iconContainsMultipleRepresentations:(id)arg1;
+ (id)_representationsForIcon:(id)arg1 inModel:(id)arg2;
+ (id)_folderTypeForFolder:(id)arg1;
+ (id)_representationForList:(id)arg1 inModel:(id)arg2;
+ (id)iconStateRepresentationForFolder:(id)arg1 inModel:(id)arg2;

@end
