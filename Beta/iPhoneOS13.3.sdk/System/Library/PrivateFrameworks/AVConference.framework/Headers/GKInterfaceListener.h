/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@protocol InterfaceListenerDelegate;

@interface GKInterfaceListener : NSObject

{
    struct __SCDynamicStore *_dynamicStore;
    struct _opaque_pthread_mutex_t _notificationMutex;
    id _interfaceListenerDelegate;
    _Bool _isWifiUp;
    _Bool _isCellUp;
    int _notifyToken;
    _Bool _monitoringAvailable;
}

@property _Bool _isWifiUp;
@property _Bool _isCellUp;
@property id <InterfaceListenerDelegate> interfaceListenerDelegate;

- (id)init;
- (void)dealloc;
- (_Bool)stopChangeListener;
- (void)hasConnectionWithWifi:(_Bool *)arg1 cell:(_Bool *)arg2;
- (_Bool)startChangeListener;
- (_Bool)startRoutingChangeListener;
- (void)stopRoutingChangeListener;

@end
