//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalWellKnownPaths : NSObject
{
}

+ (id)calendarClientIdConflictsPath;
+ (id)calendarSyncChangesPath;
+ (id)eventsPendingChangesPath;
+ (id)temporaryFilesPath;
+ (id)calendarCachePath;
+ (id)calendarsFolderPath;
+ (id)mailInvitationDropPath;
+ (id)calendarFileHandlerPath;
+ (BOOL)checkOrCreatePath:(id)arg1;
+ (void)resetPaths;
+ (id)realHomeDirectoryPath;
+ (void)initialize;

@end

