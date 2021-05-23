/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface NMRMediaRemoteUpdater : NSObject

{
    unsigned long long _updateState;
    CDUnknownBlockType _updateBlock;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)executeUpdateBlock;
- (id)initWithQueue:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;

@end
