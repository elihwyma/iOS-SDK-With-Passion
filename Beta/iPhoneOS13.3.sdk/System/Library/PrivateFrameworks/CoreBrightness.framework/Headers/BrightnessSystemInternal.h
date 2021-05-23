/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class BLControl, NSMutableDictionary, NSString, NSXPCListener;

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface BrightnessSystemInternal : NSObject

{
    BLControl *bl;
    CDUnknownBlockType _callback;
    float _cachedSlider;
    NSXPCListener *_listener;
    NSMutableDictionary *_clients;
    NSMutableDictionary *_clientsProps;
    NSMutableDictionary *_ownedProps;
    NSMutableDictionary *_combinableProps;
    NSObject<OS_os_log> *_logHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (void)clientConnectedWithExpObj:(id)arg1;
- (void)clientDisconnectedWithExpObj:(id)arg1;
- (void)undoOwnedPropertiesForClient:(id)arg1;
- (void)undoCombinablePropertiesForClient:(id)arg1;
- (void)notifyClientsForProperty:(id)arg1 key:(id)arg2;
- (void)setOwnedProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;
- (_Bool)isACombinableProperty:(id)arg1;
- (_Bool)setCombinableProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;
- (id)newAggregatedPropertyForCombinablePropertiesForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 client:(id)arg2;
- (void)destroyServer;
- (void)setNotificationProperties:(id)arg1 forClient:(id)arg2;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;
- (_Bool)isAlsSupported;

@end
