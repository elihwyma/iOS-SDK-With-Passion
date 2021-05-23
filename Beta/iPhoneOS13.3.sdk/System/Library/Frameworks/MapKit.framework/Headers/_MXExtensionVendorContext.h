/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MXExtensionContext.h>

@class NSString;

@protocol _MXExtensionResponseObserver;

__attribute__((visibility("hidden")))
@interface _MXExtensionVendorContext : _MXExtensionContext

{
    id <_MXExtensionResponseObserver> _observer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3;
- (void)stopSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2;
- (id)_errorForVendor:(id)arg1 requestDispatcher:(id)arg2;

@end
