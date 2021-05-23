/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDGmailLabelPersistence, EDPersistenceDatabase, NSString;

@interface EDServerMessagePersistence : NSObject

{
    _Bool _supportsLabels;
    _Bool _useNumericSearch;
    EDPersistenceDatabase *_database;
    EDGmailLabelPersistence *_gmailLabelPersistence;
    long long _mailboxID;
}

@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (nonatomic, readonly) EDGmailLabelPersistence *gmailLabelPersistence;
@property (nonatomic, readonly) long long mailboxID;
@property (nonatomic, readonly) _Bool useNumericSearch;
@property (nonatomic, readonly) unsigned long long messageCount;
@property (nonatomic, readonly) unsigned long long unreadMessageCount;
@property (nonatomic, readonly) unsigned long long undeletedMessageCount;
@property (nonatomic, readonly) unsigned int maximumIMAPUID;
@property (nonatomic, readonly) unsigned int minimumIMAPUID;
@property (nonatomic, readonly) _Bool supportsLabels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)serverMessagesTableSchema;
+ (id)serverLabelsTableSchema;
+ (id)tablesAndForeignKeysToResolve:(id *)arg1 associationsToResolve:(id *)arg2;

- (id)init;
- (id)serverMessagesForRemoteIDs:(id)arg1;
- (id)serverMessagesInIMAPUIDRange:(struct _NSRange)arg1 limit:(unsigned long long)arg2 returnLastEntries:(_Bool)arg3;
- (_Bool)deleteAllServerMessagesInMailbox;
- (_Bool)addServerMessage:(id)arg1 invalidMessage:(_Bool *)arg2 duplicateRemoteID:(_Bool *)arg3;
- (_Bool)deleteServerMessagesWithRemoteIDs:(id)arg1;
- (_Bool)applyFlagChange:(id)arg1 toMessagesWithRemoteIDs:(id)arg2;
- (_Bool)addLabels:(id)arg1 removeLabels:(id)arg2 toMessagesWithRemoteIDs:(id)arg3;
- (_Bool)attachMessage:(long long)arg1 toServerMessageWithRemoteID:(id)arg2;
- (id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2 mailboxID:(long long)arg3 useNumericSearch:(_Bool)arg4 supportsLabels:(_Bool)arg5;
- (id)_remoteIDStringForRemoteIDArray:(id)arg1;
- (id)_serverMessagesWithWhereClause:(id)arg1 limitClause:(id)arg2 returnLastEntries:(_Bool)arg3;
- (id)_serverMessageForRow:(id)arg1 connection:(id)arg2;
- (_Bool)_addLabels:(id)arg1 removeLabels:(id)arg2 forUID:(unsigned int)arg3 connection:(id)arg4;

@end
