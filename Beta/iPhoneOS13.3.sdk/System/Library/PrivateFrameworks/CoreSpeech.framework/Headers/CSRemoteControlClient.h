/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@protocol CSRemoteControlClientDelegate, OS_dispatch_queue;

@interface CSRemoteControlClient : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <CSRemoteControlClientDelegate> _delegate;
}

@property (weak, nonatomic) id <CSRemoteControlClientDelegate> delegate;

- (id)init;
- (void)dealloc;
- (_Bool)isConnected;
- (_Bool)waitingForConnection:(double)arg1 error:(id *)arg2;

@end
