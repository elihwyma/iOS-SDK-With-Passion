/*
 Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_nw_path;

@interface SONetworkIdentity : NSObject

{
    NSString *_networkFingerprint;
    NSString *_realm;
    NSString *_bundleIdentifier;
    NSObject<OS_nw_path> *_lastpath;
}

@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *networkFingerprint;
@property (retain, nonatomic) NSObject<OS_nw_path> *lastpath;

- (void)determineNetworkFingerprint;
- (id)getVPNServerSignature:(id)arg1;
- (id)getInterfaceSignature:(id)arg1;
- (id)initForRealm:(id)arg1 andBundleIdentifier:(id)arg2;

@end
