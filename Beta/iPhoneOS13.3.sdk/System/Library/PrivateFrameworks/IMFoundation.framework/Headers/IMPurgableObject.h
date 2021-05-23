/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMPurgableObject : NSObject

{
    id _instanceObject;
    CDUnknownBlockType _setupBlock;
    CDUnknownBlockType _cleanupBlock;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (id)instance;
- (void)_cleanupInstance;
- (void)_setupInstance;
- (id)initWithSetupBlock:(CDUnknownBlockType)arg1 cleanupBlock:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)_receivedMemoryWarning:(id)arg1;

@end
