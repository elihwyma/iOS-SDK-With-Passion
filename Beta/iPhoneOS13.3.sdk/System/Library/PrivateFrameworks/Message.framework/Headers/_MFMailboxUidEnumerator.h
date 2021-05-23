/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSEnumerator.h>

@class NSMutableArray;

@interface _MFMailboxUidEnumerator : NSEnumerator

{
    NSMutableArray *_mailboxes;
    unsigned long long _index;
}

- (id)nextObject;
- (id)initWithMailbox:(id)arg1;

@end
