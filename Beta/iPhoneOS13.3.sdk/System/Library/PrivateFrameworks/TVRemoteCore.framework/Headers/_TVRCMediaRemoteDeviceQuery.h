/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@protocol _TVRCMediaRemoteDeviceQueryDelegate;

@interface _TVRCMediaRemoteDeviceQuery : NSObject

{
    void *_televisionController;
    id <_TVRCMediaRemoteDeviceQueryDelegate> _delegate;
}

@property (weak, nonatomic) id <_TVRCMediaRemoteDeviceQueryDelegate> delegate;

- (void)stop;
- (void)start;
- (_Bool)_shouldUseMediaRemoteForConnection:(void *)arg1;
- (void)_discoveredTelevision:(void *)arg1;
- (void)_removedTelevision:(void *)arg1;

@end
