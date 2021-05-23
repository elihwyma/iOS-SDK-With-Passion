/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/WFOperation.h>

@class NSArray, NSOperationQueue, NSString;

@interface WFSaveSettingsOperation : WFOperation

{
    _Bool _currentNetwork;
    NSString *_ssid;
    struct __SCPreferences *_prefs;
    NSArray *_settings;
    NSOperationQueue *_keychainQueue;
}

@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) struct __SCPreferences *prefs;
@property (retain, nonatomic) NSArray *settings;
@property (retain, nonatomic) NSOperationQueue *keychainQueue;
@property (nonatomic, getter=isCurrentNetwork) _Bool currentNetwork;

- (void)dealloc;
- (void)start;
- (id)initWithSSID:(id)arg1 settings:(id)arg2;
- (struct __SCNetworkSet *)_createNewSetForNetworkNamed:(id)arg1;
- (void)_applyProxySettings:(id)arg1 service:(struct __SCNetworkProtocol *)arg2;
- (struct __SCNetworkSet *)_defaultSetRetained;
- (id)initWithNetworkProfile:(id)arg1 settings:(id)arg2;

@end
