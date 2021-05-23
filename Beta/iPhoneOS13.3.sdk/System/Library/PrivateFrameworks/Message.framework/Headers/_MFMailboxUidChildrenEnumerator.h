/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSEnumerator.h>

@class NSMutableArray;

@interface _MFMailboxUidChildrenEnumerator : NSEnumerator

{
    NSMutableArray *_mailboxes;
    unsigned long long _index;
    _Bool _includeHidden;
}

- (id)nextObject;
- (id)_initWithMailbox:(id)arg1 includeHiddenChildren:(_Bool)arg2;

@end
