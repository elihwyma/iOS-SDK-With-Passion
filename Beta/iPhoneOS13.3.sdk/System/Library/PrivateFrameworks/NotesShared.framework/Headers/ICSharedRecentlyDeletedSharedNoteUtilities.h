/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICSharedRecentlyDeletedSharedNoteUtilities : NSObject

+ (unsigned long long)sharedNoteTypeForNotes:(id)arg1;
+ (void)showDeletingSharedNotesAlertWithType:(unsigned long long)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)notesSharedViaICloudFromNotes:(id)arg1;
+ (void)showAlertsIfNecessaryForDeletingSharedNotes:(id)arg1 noteDeleteType:(unsigned long long)arg2 displayWindow:(struct UIWindow *)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)titleForSharedNotesType:(unsigned long long)arg1;
+ (id)messageForSharedNotesType:(unsigned long long)arg1;

@end
