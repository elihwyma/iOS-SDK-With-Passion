/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEProxyServer, NSArray, NSString, NSURL;

@interface NEProxySettings : NSObject

{
    NEProxyServer *_HTTPServer;
    NEProxyServer *_HTTPSServer;
    _Bool _autoProxyConfigurationEnabled;
    _Bool _HTTPEnabled;
    _Bool _HTTPSEnabled;
    _Bool _excludeSimpleHostnames;
    _Bool _autoProxyDiscovery;
    _Bool _FTPEnabled;
    _Bool _SOCKSEnabled;
    _Bool _RTSPEnabled;
    _Bool _gopherEnabled;
    _Bool _usePassiveFTP;
    NSArray *_exceptionList;
    NSURL *_proxyAutoConfigURL;
    NSString *_proxyAutoConfigJavaScript;
    NEProxyServer *_FTPServer;
    NEProxyServer *_SOCKSServer;
    NEProxyServer *_RTSPServer;
    NEProxyServer *_gopherServer;
    NSArray *_supplementalMatchDomains;
    NSArray *_supplementalMatchOrders;
}

@property _Bool autoProxyDiscovery;
@property (copy) NSURL *proxyAutoConfigURL;
@property (copy) NSString *proxyAutoConfigJavaScript;
@property _Bool FTPEnabled;
@property (copy) NEProxyServer *FTPServer;
@property _Bool SOCKSEnabled;
@property (copy) NEProxyServer *SOCKSServer;
@property _Bool RTSPEnabled;
@property (copy) NEProxyServer *RTSPServer;
@property _Bool gopherEnabled;
@property (copy) NEProxyServer *gopherServer;
@property _Bool usePassiveFTP;
@property (copy) NSArray *supplementalMatchDomains;
@property (copy) NSArray *supplementalMatchOrders;
@property (readonly) _Bool enabled;
@property _Bool autoProxyConfigurationEnabled;
@property (copy) NSURL *proxyAutoConfigurationURL;
@property (copy) NSString *proxyAutoConfigurationJavaScript;
@property _Bool HTTPEnabled;
@property (copy) NEProxyServer *HTTPServer;
@property _Bool HTTPSEnabled;
@property (copy) NEProxyServer *HTTPSServer;
@property _Bool excludeSimpleHostnames;
@property (copy) NSArray *exceptionList;
@property (copy) NSArray *matchDomains;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;
- (_Bool)needToUpdateKeychain;
- (void)syncWithKeychain;
- (void)removeKeychainItems;
- (void)copyPasswordsFromKeychain;

@end
