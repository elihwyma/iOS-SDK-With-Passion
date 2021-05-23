/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_voucher;

__attribute__((visibility("hidden")))
@interface _GEOURLManifestListenerCallbackWithQueue : NSObject

{
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_voucher> *_voucher;
    unsigned int _qos;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)performHandler:(_Bool)arg1;

@end
