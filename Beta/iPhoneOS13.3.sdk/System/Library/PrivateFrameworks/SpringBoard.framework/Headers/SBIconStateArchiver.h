/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardHome/SBHIconStateArchiver.h>

@interface SBIconStateArchiver : SBHIconStateArchiver

+ (id)modernizeRootArchive:(id)arg1;
+ (id)iTunesRepresentationFromRootArchive:(id)arg1 preApex:(_Bool)arg2 pending:(_Bool)arg3 iconSource:(id)arg4;
+ (id)rootArchiveFromITunesRepresentation:(id)arg1;
+ (id)_iTunesIconListForList:(id)arg1 preApex:(_Bool)arg2 pending:(_Bool)arg3 iconSource:(id)arg4;
+ (id)_iTunesIconListsForLists:(id)arg1 preApex:(_Bool)arg2 pending:(_Bool)arg3 iconSource:(id)arg4;
+ (id)_modernIconListsForLists:(id)arg1 allowFolders:(_Bool)arg2;
+ (id)_modernIconListForList:(id)arg1 allowFolders:(_Bool)arg2;
+ (id)_migrateLeafIdentifierIfNecessary:(id)arg1;
+ (id)_modernIconCellForCell:(id)arg1 allowFolders:(_Bool)arg2;
+ (id)_iTunesIconCellForCell:(id)arg1 preApex:(_Bool)arg2 pending:(_Bool)arg3 iconSource:(id)arg4;
+ (id)_iTunesDictionaryForLeafIcon:(id)arg1 withIdentifier:(id)arg2;
+ (id)_iTunesDictionaryForDownloadingIcon:(id)arg1;
+ (id)_iTunesDictionaryForLeafIdentifier:(id)arg1;

@end
