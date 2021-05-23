/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

#import <Message/Swift-Protocol.h>

@class MFActivityMonitor;

@interface _MFBlockIterationHandler : NSObject <Swift>

{
    CDUnknownBlockType _block;
    _Bool _cancelled;
    MFActivityMonitor *_monitor;
}

- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)handleMessage:(id)arg1;
- (_Bool)shouldCancel;

@end
