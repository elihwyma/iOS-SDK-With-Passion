/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NEPathEventObserver : NSObject

{
    struct network_config_cellular_blocked_observer_s *_cellBlockedObserver;
    struct network_config_cellular_blocked_observer_s *_cellFailedObserver;
    struct network_config_cellular_blocked_observer_s *_wifiBlockedObserver;
    CDUnknownBlockType _eventHandler;
}

@property struct network_config_cellular_blocked_observer_s *cellBlockedObserver;
@property struct network_config_cellular_blocked_observer_s *cellFailedObserver;
@property struct network_config_cellular_blocked_observer_s *wifiBlockedObserver;
@property (copy) CDUnknownBlockType eventHandler;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (id)stringForEvent:(long long)arg1;
- (void)handleEvent:(long long)arg1 forPID:(id)arg2 UUID:(id)arg3;
- (id)initWithQueue:(id)arg1 eventHandler:(CDUnknownBlockType)arg2;

@end
