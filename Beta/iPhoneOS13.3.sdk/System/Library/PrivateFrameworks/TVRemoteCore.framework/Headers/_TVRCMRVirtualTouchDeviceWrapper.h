/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@interface _TVRCMRVirtualTouchDeviceWrapper : NSObject

{
    void *_deviceDescriptor;
}

@property (nonatomic, getter=isAbsolute) _Bool absolute;
@property (nonatomic, getter=isDisplayIntegrated) _Bool displayIntegrated;
@property (nonatomic) struct CGSize screenSize;

- (id)init;
- (void)dealloc;
- (void *)deviceDescriptor;

@end
