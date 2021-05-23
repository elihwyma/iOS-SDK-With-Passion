/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface NEAOVPN : NSObject

{
    _Bool _enabled;
    _Bool _toggleEnabled;
    _Bool _allowCaptiveWebSheet;
    _Bool _allowAllCaptiveNetworkPlugins;
    NSDictionary *_interfaceProtocolMapping;
    NSString *_activeInterfaceProtocolKey;
    NSDictionary *_serviceExceptions;
    NSDictionary *_allowedCaptiveNetworkPlugins;
}

@property (getter=isEnabled) _Bool enabled;
@property (getter=isToggleEnabled) _Bool toggleEnabled;
@property (getter=isAllowCaptiveWebSheet) _Bool allowCaptiveWebSheet;
@property (getter=isAllowAllCaptiveNetworkPlugins) _Bool allowAllCaptiveNetworkPlugins;
@property (copy) NSDictionary *interfaceProtocolMapping;
@property (copy) NSString *activeInterfaceProtocolKey;
@property (copy) NSDictionary *serviceExceptions;
@property (copy) NSDictionary *allowedCaptiveNetworkPlugins;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;

@end
