/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICClientInfo, ICDeviceInfo, ICNetworkConstraints, ICURLResponseAuthenticationProvider, NSString;

@interface ICRequestContext : NSObject <Swift>

{
    unsigned int _allowsMutation:1;
    ICNetworkConstraints *_networkConstraints;
    ICClientInfo *_clientInfo;
    ICDeviceInfo *_deviceInfo;
    ICURLResponseAuthenticationProvider *_authenticationProvider;
}

@property (copy, nonatomic, readonly) ICClientInfo *clientInfo;
@property (nonatomic, readonly) ICDeviceInfo *deviceInfo;
@property (copy, nonatomic, readonly) NSString *userAgent;
@property (nonatomic, readonly) ICURLResponseAuthenticationProvider *authenticationProvider;
@property (copy, nonatomic, readonly) ICNetworkConstraints *networkConstraints;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setAuthenticationProvider:(id)arg1;
- (id)initWithClientInfo:(id)arg1;
- (id)copyWithBlock:(CDUnknownBlockType)arg1;
- (void)setNetworkConstraints:(id)arg1;
- (_Bool)_allowsMutation;
- (id)initWithClientInfo:(id)arg1 authenticationProvider:(id)arg2;

@end
