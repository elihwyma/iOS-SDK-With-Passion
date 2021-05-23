/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableDictionary, NWMonitor, NWPathEvaluator;

@protocol OS_dispatch_source;

@interface NWSystemPathMonitor : NSObject

{
    _Bool _wifiPrimary;
    _Bool _ethernetPrimary;
    _Bool _vpnActive;
    int _vpnNotifyToken;
    NWMonitor *_vpnMonitor;
    NWPathEvaluator *_primaryEvaluator;
    BKSApplicationStateMonitor *_applicationMonitor;
    NSMutableDictionary *_perAppVPNEvaluators;
    NSObject<OS_dispatch_source> *_smoothingTimer;
    struct tcp_connection_fallback_watch_s *_fallbackWatcher;
    NSObject<OS_dispatch_source> *_mptcpWatcher;
}

@property (retain) NWMonitor *vpnMonitor;
@property (retain) NWPathEvaluator *primaryEvaluator;
@property int vpnNotifyToken;
@property (retain) BKSApplicationStateMonitor *applicationMonitor;
@property (retain) NSMutableDictionary *perAppVPNEvaluators;
@property (retain) NSObject<OS_dispatch_source> *smoothingTimer;
@property struct tcp_connection_fallback_watch_s *fallbackWatcher;
@property (retain) NSObject<OS_dispatch_source> *mptcpWatcher;
@property (nonatomic, getter=isVPNActive) _Bool vpnActive;
@property (nonatomic, getter=isWiFiPrimary) _Bool wifiPrimary;
@property (nonatomic, getter=isEthernetPrimary) _Bool ethernetPrimary;

+ (id)sharedSystemPathMonitor;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateFlags;
- (void)eventFired;
- (void)appStateChangedWithUserInfo:(id)arg1;
- (void)startWatchingApplicationStates;
- (void)stopWatchingApplicationStates;
- (void)registerForVPNNotifications;
- (void)updateVPNMonitor;

@end
