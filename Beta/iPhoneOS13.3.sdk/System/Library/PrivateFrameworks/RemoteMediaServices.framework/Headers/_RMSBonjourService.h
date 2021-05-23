/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSNetService, RMSService;

__attribute__((visibility("hidden")))
@interface _RMSBonjourService : NSObject

{
    _Bool _available;
    RMSService *_service;
    NSNetService *_netService;
    long long _state;
}

@property (retain, nonatomic) RMSService *service;
@property (retain, nonatomic) NSNetService *netService;
@property (nonatomic) long long state;
@property (nonatomic, getter=isAvailable) _Bool available;

@end
