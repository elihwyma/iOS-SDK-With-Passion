/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@interface CalWellKnownPaths : NSObject

+ (void)initialize;
+ (id)mailInvitationDropPath;
+ (id)calendarsFolderPath;
+ (void)resetPaths;
+ (id)realHomeDirectoryPath;
+ (_Bool)checkOrCreatePath:(id)arg1;
+ (id)calendarFileHandlerPath;
+ (id)calendarCachePath;
+ (id)temporaryFilesPath;
+ (id)eventsPendingChangesPath;
+ (id)calendarSyncChangesPath;
+ (id)calendarClientIdConflictsPath;

@end
