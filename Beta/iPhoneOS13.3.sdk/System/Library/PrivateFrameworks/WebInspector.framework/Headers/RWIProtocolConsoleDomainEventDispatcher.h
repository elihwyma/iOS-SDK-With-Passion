/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <Foundation/NSObject.h>

@interface RWIProtocolConsoleDomainEventDispatcher : NSObject

{
    struct AugmentableInspectorController *_controller;
}

- (id)initWithController:(struct AugmentableInspectorController *)arg1;
- (void)messageAddedWithMessage:(id)arg1;
- (void)messageRepeatCountUpdatedWithCount:(int)arg1;
- (void)messagesCleared;
- (void)heapSnapshotWithTimestamp:(double)arg1 snapshotData:(id)arg2 title:(id *)arg3;

@end
