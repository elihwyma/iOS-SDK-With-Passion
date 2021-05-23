/*
 Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

#import <NSObject.h>

@class NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface BLENotifierXPC : NSObject

{
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)handleErrorMessage;
- (void)handleMessage;

@end
