/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class _FBSDisplayLayoutService;

@interface _FBSDisplayLayoutEndpointServices : NSObject

{
    _FBSDisplayLayoutService *_sharedLock_services[3];
    unsigned long long _sharedLock_servicesRefCnt[3];
}

+ (id)_checkoutServiceWithEndpoint:(id)arg1 qos:(BOOL)arg2;
+ (void)_checkinService:(id)arg1;

@end
