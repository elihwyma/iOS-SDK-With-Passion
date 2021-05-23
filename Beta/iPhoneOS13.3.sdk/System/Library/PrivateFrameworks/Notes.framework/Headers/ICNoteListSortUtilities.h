/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSObject.h>

@interface ICNoteListSortUtilities : NSObject

+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(_Bool)arg1;
+ (long long)currentNoteListSortType;
+ (id)sortDescriptorsForType:(long long)arg1 ascending:(_Bool)arg2;
+ (id)sortDescriptorsForType:(long long)arg1;
+ (id)sortDescriptorsForPinnedNotes;
+ (long long)sortTypeForFolderNoteOrder:(unsigned long long)arg1;
+ (long long)sortTypeForTag:(long long)arg1;
+ (void)setCurrentNoteListSortType:(long long)arg1;
+ (id)sortDescriptorsForCurrentType;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(_Bool)arg1 folderNoteSortType:(id)arg2;
+ (id)descriptionForNoteListSortType:(long long)arg1;
+ (void)setCurrentNoteListSortTypeByTag:(long long)arg1;
+ (_Bool)isMenuItemCurrentSortTypeForTag:(long long)arg1;
+ (long long)tagForSortType:(long long)arg1;

@end
