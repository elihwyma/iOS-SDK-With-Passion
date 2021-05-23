/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSDeviceMessengerFilter;

__attribute__((visibility("hidden")))
@interface AMSDeviceUpdateHandlerInfo : NSObject

{
    AMSDeviceMessengerFilter *_filter;
    CDUnknownBlockType _block;
}

@property (retain, nonatomic) AMSDeviceMessengerFilter *filter;
@property (copy, nonatomic) CDUnknownBlockType block;

@end
