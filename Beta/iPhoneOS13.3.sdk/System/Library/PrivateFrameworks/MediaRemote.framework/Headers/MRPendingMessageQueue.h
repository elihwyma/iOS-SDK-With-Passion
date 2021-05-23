/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MRPendingMessageQueue : NSObject

{
    NSMutableArray *_messages;
    NSMutableArray *_delayableMessages;
    unsigned long long _lowPriorityMessagesCount;
    unsigned long long _maxLowPriorityMessagesAllowed;
}

- (void)dealloc;
- (id)peek;
- (void)push:(id)arg1;
- (void)pop;
- (void)_purge;
- (id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1;

@end
