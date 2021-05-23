/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFHTTPClientConfiguration

{
    _Bool _requiresEncryption;
    _Bool _allowsAnonymousConnection;
    _Bool _allowsCellularAccess;
    _Bool _supportsWakeOnLAN;
    _Bool _monitorsReachability;
}

@property _Bool requiresEncryption;
@property _Bool allowsAnonymousConnection;
@property _Bool allowsCellularAccess;
@property _Bool supportsWakeOnLAN;
@property _Bool monitorsReachability;

+ (id)defaultConfiguration;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
