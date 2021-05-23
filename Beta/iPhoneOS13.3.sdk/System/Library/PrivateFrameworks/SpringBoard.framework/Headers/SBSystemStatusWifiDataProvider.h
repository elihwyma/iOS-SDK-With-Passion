/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, STWifiStatusDomainPublisher;

@interface SBSystemStatusWifiDataProvider : NSObject

{
    _Bool _wifiActive;
    _Bool _fallingBackToCellular;
    STWifiStatusDomainPublisher *_wifiDataPublisher;
    struct tcp_connection_fallback_watch_s *_cellularFallbackWatcher;
}

@property (nonatomic, readonly) STWifiStatusDomainPublisher *wifiDataPublisher;
@property (nonatomic, getter=isWifiActive) _Bool wifiActive;
@property (nonatomic, getter=isFallingBackToCellular) _Bool fallingBackToCellular;
@property (nonatomic) struct tcp_connection_fallback_watch_s *cellularFallbackWatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_updateData;
- (void)_registerForNotifications;
- (void)_updateWifiActive;

@end
