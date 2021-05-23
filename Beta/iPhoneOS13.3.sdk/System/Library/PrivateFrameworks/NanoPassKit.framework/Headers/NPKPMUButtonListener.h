/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface NPKPMUButtonListener : NSObject

{
    CDUnknownBlockType _buttonHandler;
    struct __IOHIDEventSystemClient *_hidSystemClient;
    NSObject<OS_dispatch_queue> *_hidSystemQueue;
}

@property (copy, nonatomic) CDUnknownBlockType buttonHandler;
@property (nonatomic) struct __IOHIDEventSystemClient *hidSystemClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *hidSystemQueue;

- (void)dealloc;
- (id)initWithHandler:(CDUnknownBlockType)arg1;
- (void)_initializeHIDClient;
- (void)_handleButtonEvent:(struct __IOHIDEvent *)arg1;

@end
