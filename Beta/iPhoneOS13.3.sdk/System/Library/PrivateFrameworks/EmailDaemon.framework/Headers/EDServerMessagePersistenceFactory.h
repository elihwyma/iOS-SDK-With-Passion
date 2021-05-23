/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDGmailLabelPersistence, EDPersistenceDatabase;

@interface EDServerMessagePersistenceFactory : NSObject

{
    EDPersistenceDatabase *_database;
    EDGmailLabelPersistence *_gmailLabelPersistence;
}

@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (nonatomic, readonly) EDGmailLabelPersistence *gmailLabelPersistence;

- (id)init;
- (id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2;
- (id)serverMessagePersistenceForMailboxURL:(id)arg1;

@end
