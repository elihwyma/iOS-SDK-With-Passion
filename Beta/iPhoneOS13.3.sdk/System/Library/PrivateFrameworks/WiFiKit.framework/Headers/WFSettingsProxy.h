/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface WFSettingsProxy : NSObject

{
    _Bool _customProxy;
    _Bool _authenticated;
    _Bool _autoConfigured;
    _Bool _autoDiscoveryEnabled;
    NSString *_server;
    NSString *_port;
    NSString *_username;
    NSString *_password;
    NSString *_autoConfigureURL;
    NSDictionary *_items;
}

@property (copy, nonatomic) NSString *server;
@property (copy, nonatomic) NSString *port;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *autoConfigureURL;
@property (retain, nonatomic) NSDictionary *items;
@property (nonatomic) _Bool customProxy;
@property (nonatomic) _Bool authenticated;
@property (nonatomic) _Bool autoConfigured;
@property (nonatomic) _Bool autoDiscoveryEnabled;
@property (copy, nonatomic) NSString *password;
@property (nonatomic, readonly, getter=isAutomatic) _Bool automatic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultProxyConfiguration;
+ (id)offConfig;

- (id)initWithDictionary:(id)arg1;
- (id)protocol;
- (id)initDefaultConfig;
- (id)initWithManualServer:(id)arg1 port:(id)arg2 username:(id)arg3 password:(id)arg4;
- (id)initWithAutoConfigureURL:(id)arg1;

@end
