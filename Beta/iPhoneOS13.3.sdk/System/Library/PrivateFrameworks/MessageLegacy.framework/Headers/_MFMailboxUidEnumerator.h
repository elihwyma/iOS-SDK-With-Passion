/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSEnumerator.h>

@class NSMutableArray;

@interface _MFMailboxUidEnumerator : NSEnumerator

{
    NSMutableArray *_mailboxes;
    unsigned long long _index;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithMailbox:(id)arg1;

@end
