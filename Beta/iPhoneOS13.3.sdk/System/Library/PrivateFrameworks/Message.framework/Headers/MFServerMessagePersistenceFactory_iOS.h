/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailDaemon/EDServerMessagePersistenceFactory.h>

@class MFMailMessageLibrary;

@interface MFServerMessagePersistenceFactory_iOS : EDServerMessagePersistenceFactory

{
    MFMailMessageLibrary *_library;
}

@property (weak, nonatomic) MFMailMessageLibrary *library;

- (id)initWithLibrary:(id)arg1 database:(id)arg2;
- (long long)mailboxIDForMailboxURL:(id)arg1 useNumericSearch:(_Bool *)arg2 supportsLabels:(_Bool *)arg3;

@end
