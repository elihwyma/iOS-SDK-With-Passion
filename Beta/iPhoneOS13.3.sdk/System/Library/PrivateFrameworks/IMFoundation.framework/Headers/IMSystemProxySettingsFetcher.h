/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IMSystemProxySettingsFetcher : NSObject

{
    unsigned short _port;
    unsigned short _proxyPort;
    id _delegate;
    NSString *_host;
    long long _proxyProtocol;
    NSString *_proxyHost;
    NSString *_proxyAccount;
    NSString *_proxyPassword;
}

@property (copy, nonatomic) NSString *_host;
@property (nonatomic) unsigned short _port;
@property (nonatomic) long long _proxyProtocol;
@property (copy, nonatomic) NSString *_proxyHost;
@property (nonatomic) unsigned short _proxyPort;
@property (copy, nonatomic) NSString *_proxyAccount;
@property (copy, nonatomic) NSString *_proxyPassword;
@property id delegate;

- (void)dealloc;
- (void)_callAccountSettingsDelegateMethod;
- (void)_getProxyAccountAndPasswordFromKeychain;
- (void)_callProxySettingsDelegateMethod;
- (void)_takeProxySettingsFromDictionary:(struct __CFDictionary *)arg1;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 delegate:(id)arg3;
- (id)initWithProxyProtocol:(long long)arg1 proxyHost:(id)arg2 proxyPort:(unsigned short)arg3 delegate:(id)arg4;
- (void)retrieveProxySettings;
- (void)retrieveProxyAccountSettings;

@end
