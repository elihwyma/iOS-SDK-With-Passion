/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSEnumerator.h>

@class NSMutableArray;

@interface _MFMailboxUidChildrenEnumerator : NSEnumerator

{
    NSMutableArray *_mailboxes;
    unsigned long long _index;
    _Bool _includeHidden;
}

- (void)dealloc;
- (id)nextObject;
- (id)_initWithMailbox:(id)arg1 includeHiddenChildren:(_Bool)arg2;

@end
