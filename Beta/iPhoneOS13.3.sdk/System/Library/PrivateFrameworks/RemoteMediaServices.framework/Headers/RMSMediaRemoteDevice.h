/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface RMSMediaRemoteDevice : NSObject

{
    void *_device;
}

@property (nonatomic, readonly) void *device;

- (void)dealloc;
- (id)initWithTelevision:(void *)arg1;

@end
