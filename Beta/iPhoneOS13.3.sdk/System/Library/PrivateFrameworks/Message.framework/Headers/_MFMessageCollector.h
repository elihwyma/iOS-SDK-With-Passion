/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

#import <Message/Swift-Protocol.h>

@class MFActivityMonitor, NSMutableArray;

@interface _MFMessageCollector : NSObject <Swift>

{
    NSMutableArray *_messages;
    MFActivityMonitor *_monitor;
    CDUnknownBlockType _transmogrifier;
}

@property (copy, nonatomic) CDUnknownBlockType transmogrifier;

- (id)init;
- (id)messages;
- (_Bool)shouldCancel;
- (void)newMessagesAvailable:(id)arg1;
- (id)copyMessages;

@end
