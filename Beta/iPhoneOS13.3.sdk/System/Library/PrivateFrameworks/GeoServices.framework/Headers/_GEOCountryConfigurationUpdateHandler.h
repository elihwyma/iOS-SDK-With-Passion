/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOCountryConfigurationUpdateHandler : NSObject

{
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (copy, nonatomic) CDUnknownBlockType callback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

@end
