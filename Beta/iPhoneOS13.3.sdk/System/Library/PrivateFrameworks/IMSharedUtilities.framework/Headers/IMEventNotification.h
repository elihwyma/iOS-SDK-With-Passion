/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMFoundation/IMDoubleLinkedListNode.h>

@interface IMEventNotification : IMDoubleLinkedListNode

{
    id _target;
    id _sender;
    CDUnknownBlockType _eventNotificationWithSenderBlock;
    CDUnknownBlockType _eventNotificationBlock;
}

@property (weak) id target;
@property (weak) id sender;
@property (copy) CDUnknownBlockType eventNotificationBlock;
@property (copy) CDUnknownBlockType eventNotificationWithSenderBlock;

+ (id)eventNotification:(id)arg1 eventNotificationBlock:(CDUnknownBlockType)arg2;
+ (id)eventNotification:(id)arg1 sender:(id)arg2 eventNotificationBlock:(CDUnknownBlockType)arg3;
+ (id)eventNotification:(id)arg1;

- (_Bool)invoke;
- (void)cancel;
- (void)cache;
- (_Bool)wasCancelled;

@end
