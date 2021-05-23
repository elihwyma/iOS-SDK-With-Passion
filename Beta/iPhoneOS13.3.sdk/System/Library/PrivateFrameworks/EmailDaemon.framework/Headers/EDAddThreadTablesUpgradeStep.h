/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface EDAddThreadTablesUpgradeStep : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (int)runWithConnection:(id)arg1;
+ (id)threadSendersTableSchema;
+ (id)threadRecipientsTableSchema;
+ (id)threadScopesTableSchema;
+ (id)threadsTableSchema;
+ (id)threadMailboxesTableSchema;
+ (id)_schemaWithMessagesTable:(id)arg1 mailboxesTable:(id)arg2 conversationsTable:(id)arg3;

@end
