/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface NEFilterProviderConfiguration : NSObject

{
    _Bool _filterBrowsers;
    _Bool _filterSockets;
    _Bool _filterPackets;
    _Bool _controlProviderInitialized;
    NSDictionary *_vendorConfiguration;
    NSString *_serverAddress;
    NSString *_username;
    NSString *_organization;
    NSData *_passwordReference;
    NSData *_identityReference;
    NSString *_filterDataProviderBundleIdentifier;
    NSString *_filterPacketProviderBundleIdentifier;
    NSString *_pluginType;
    NSString *_dataProviderDesignatedRequirement;
    NSString *_packetProviderDesignatedRequirement;
    NSString *_keychainAccessGroup;
}

@property (copy) NSString *pluginType;
@property (copy) NSString *dataProviderDesignatedRequirement;
@property (copy) NSString *packetProviderDesignatedRequirement;
@property _Bool controlProviderInitialized;
@property (copy) NSString *keychainAccessGroup;
@property _Bool filterBrowsers;
@property _Bool filterSockets;
@property _Bool filterPackets;
@property (copy) NSDictionary *vendorConfiguration;
@property (copy) NSString *serverAddress;
@property (copy) NSString *username;
@property (copy) NSString *organization;
@property (copy) NSData *passwordReference;
@property (copy) NSData *identityReference;
@property (copy) NSString *filterDataProviderBundleIdentifier;
@property (copy) NSString *filterPacketProviderBundleIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;

@end
