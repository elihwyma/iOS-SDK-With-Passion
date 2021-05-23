/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSEnumerator.h>

@class _SCRCStackNode;

__attribute__((visibility("hidden")))
@interface _SCRCStackQueueEnumerator : NSEnumerator

{
    _SCRCStackNode *_currentListMemeber;
}

- (id)nextObject;
- (id)initWithListMember:(id)arg1;

@end
