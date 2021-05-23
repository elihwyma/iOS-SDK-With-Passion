/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCListener;

@protocol OS_dispatch_queue;

@interface TIPreferencesControllerService : NSObject

{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedPreferencesController;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
