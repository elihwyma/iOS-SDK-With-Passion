/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface RMSMediaRemoteDeviceController : NSObject

{
    NSMapTable *_devices;
}

+ (id)sharedController;

- (id)init;
- (void)addDevice:(void *)arg1;
- (void)removeDevice:(void *)arg1;
- (void)discoverDeviceWithUniqueIdentifier:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_keyWithDevice:(void *)arg1;
- (void *)deviceForUniqueIdentifier:(id)arg1;

@end
