/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface MSMessageListItemSelection : NSObject

{
    _Bool _isSelectAll;
    NSArray *_messageListItems;
    NSArray *_mailboxes;
}

@property (nonatomic, readonly) NSArray *messageListItems;
@property (nonatomic, readonly) NSArray *mailboxes;
@property (nonatomic, readonly) _Bool isSelectAll;

- (id)initWithMessageListItems:(id)arg1;
- (id)initWithMailboxes:(id)arg1 excludedMessageListItems:(id)arg2;

@end
