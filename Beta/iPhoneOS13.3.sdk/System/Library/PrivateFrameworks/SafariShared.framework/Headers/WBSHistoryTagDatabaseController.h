/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class WBSSQLiteDatabase;

@interface WBSHistoryTagDatabaseController : NSObject

{
    WBSSQLiteDatabase *_database;
}

- (id)initWithDatabase:(id)arg1;
- (id)createTagsForIdentifiers:(id)arg1 withTitles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 error:(id *)arg5;
- (_Bool)assignHistoryItemWithID:(long long)arg1 toTopicTagsWithIDs:(id)arg2 error:(id *)arg3;
- (_Bool)renameTagWithID:(long long)arg1 toTitle:(id)arg2 error:(id *)arg3;
- (_Bool)clearAllTagsWithError:(id *)arg1;
- (_Bool)clearTagsFromStartDate:(id)arg1 endDate:(id)arg2 error:(id *)arg3;

@end
