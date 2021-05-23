/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/WFOperation.h>

@class NSArray, NSOperationQueue, NSString;

@interface WFGetSettingsOperation : WFOperation

{
    NSArray *_settings;
    NSString *_ssid;
    struct __SCPreferences *_prefs;
    NSOperationQueue *_keychainQueue;
}

@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) struct __SCPreferences *prefs;
@property (retain, nonatomic) NSArray *settings;
@property (retain, nonatomic) NSOperationQueue *keychainQueue;

- (void)dealloc;
- (void)start;
- (id)initWithSSID:(id)arg1;
- (id)initWithNetworkProfile:(id)arg1;

@end
