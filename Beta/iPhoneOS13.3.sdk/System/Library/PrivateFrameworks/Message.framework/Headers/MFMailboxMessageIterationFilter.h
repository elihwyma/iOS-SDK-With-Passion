/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class EFMutableInt64Set, NSString;

@interface MFMailboxMessageIterationFilter : NSObject

{
    EFMutableInt64Set *_mailboxes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)filterMessageWithStatement:(struct sqlite3_stmt *)arg1;
- (_Bool)filterMessageWithRow:(id)arg1;
- (id)initWithMailboxes:(id)arg1;

@end
