//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMFoundation/IMDoubleLinkedListNode.h>

@interface IMEventNotification : IMDoubleLinkedListNode
{
    id _target;
    id _sender;
    id /* CDUnknownBlockType */ _eventNotificationWithSenderBlock;
    id /* CDUnknownBlockType */ _eventNotificationBlock;
}

+ (id)eventNotification:(id)arg1;
+ (id)eventNotification:(id)arg1 sender:(id)arg2 eventNotificationBlock:(id /* CDUnknownBlockType */)arg3;
+ (id)eventNotification:(id)arg1 eventNotificationBlock:(id /* CDUnknownBlockType */)arg2;
@property(copy) id /* CDUnknownBlockType */ eventNotificationBlock; // @synthesize eventNotificationBlock=_eventNotificationBlock;
@property(copy) id /* CDUnknownBlockType */ eventNotificationWithSenderBlock; // @synthesize eventNotificationWithSenderBlock=_eventNotificationWithSenderBlock;
@property __weak id sender; // @synthesize sender=_sender;
@property __weak id target; // @synthesize target=_target;
// - (void).cxx_destruct;
- (void)cache;
- (BOOL)wasCancelled;
- (void)cancel;
- (BOOL)invoke;

@end

