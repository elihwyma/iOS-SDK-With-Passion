/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailDaemon/EDLocalActionPersistence.h>

@class MFMailMessageLibrary;

@interface MFLocalActionPersistence_iOS : EDLocalActionPersistence

{
    MFMailMessageLibrary *_library;
}

@property (weak, nonatomic) MFMailMessageLibrary *library;

- (id)initWithDatabase:(id)arg1;
- (_Bool)moveSupportedFromMailboxURL:(id)arg1 toURL:(id)arg2;
- (id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2;
- (id)initWithLibrary:(id)arg1 database:(id)arg2;
- (id)messageForDatabaseID:(long long)arg1;
- (id)mailboxURLForDatabaseID:(long long)arg1;
- (long long)mailboxDatabaseIDForURL:(id)arg1;
- (id)labelNameForLabelID:(long long)arg1;
- (void)handledFailedCopyForMessages:(id)arg1;

@end
