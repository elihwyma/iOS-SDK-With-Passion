/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol VSMessageQueueDelegate;

__attribute__((visibility("hidden")))
@interface VSMessageQueue : NSObject

{
    id <VSMessageQueueDelegate> _delegate;
    NSMutableArray *_messages;
}

@property (retain, nonatomic) NSMutableArray *messages;
@property (weak, nonatomic) id <VSMessageQueueDelegate> delegate;

- (id)init;
- (void)addMessage:(id)arg1;
- (id)removeAllMessages;

@end
