/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <EmailDaemon/_EDWrappedMessage.h>

@class EDMessagePersistence;

@interface _EDLazyWrappedMessage : _EDWrappedMessage

{
    long long _databaseID;
    EDMessagePersistence *_messagePersistence;
}

@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;

- (long long)databaseID;
- (id)initWithMessage:(id)arg1 messagePersistence:(id)arg2;

@end
