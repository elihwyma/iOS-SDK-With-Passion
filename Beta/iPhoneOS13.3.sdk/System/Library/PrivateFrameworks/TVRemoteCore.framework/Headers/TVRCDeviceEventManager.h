/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class TVRCDevice;

@interface TVRCDeviceEventManager : NSObject

{
    TVRCDevice *_device;
    CDUnknownBlockType _eventResponseHandler;
}

@property (retain, nonatomic) TVRCDevice *device;
@property (copy, nonatomic) CDUnknownBlockType eventResponseHandler;

- (id)initWithDevice:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)sendEvent:(id)arg1 options:(id)arg2;

@end
