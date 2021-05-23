/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <MessageLegacy/DeliveryAccount.h>

@class MFSMTPConnection, NSTimer;

@interface SMTPAccount : DeliveryAccount

{
    Class _deliveryClass;
    MFSMTPConnection *_connection;
    NSTimer *_timer;
    long long _lastTimerSetTime;
    unsigned int _supportsPipelining:1;
    unsigned int _supportsOutboxCopy:1;
    unsigned int _useCellDataOnly:1;
}

+ (id)accountTypeString;
+ (id)newDefaultInstance;
+ (id)displayedAccountTypeString;
+ (unsigned int)defaultPortNumber;
+ (id)displayedShortAccountTypeString;
+ (void *)legacyKeychainProtocol;
+ (_Bool)isCommonPortNumber:(unsigned int)arg1;
+ (id)saslProfileName;
+ (void)registerAppleServiceDeliveryHostname:(id)arg1;

- (void)dealloc;
- (id)serviceName;
- (void)releaseAllConnections;
- (id)preferredAuthScheme;
- (_Bool)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg1;
- (Class)connectionClass;
- (id)certUIService;
- (struct __CFString *)connectionServiceType;
- (void)releaseAllForcedConnections;
- (void)setPreferredAuthScheme:(id)arg1;
- (id)alternateConnectionSettings;
- (id)insecureConnectionSettings;
- (id)secureConnectionSettings;
- (Class)deliveryClass;
- (_Bool)canBeFallbackAccount;
- (_Bool)supportsOutboxCopy;
- (void)checkInConnection:(id)arg1;
- (id)errorForResponse:(id)arg1;
- (_Bool)supportsPipelining;
- (id)_defaultSettingsWithPort:(unsigned int)arg1 useSSL:(_Bool)arg2 directSSL:(_Bool)arg3;
- (id)connectionSettingsForAuthentication:(_Bool)arg1 secure:(id)arg2 insecure:(id)arg3;
- (void)setSupportsPipelining:(_Bool)arg1;
- (void)setSupportsOutboxCopy:(_Bool)arg1;
- (void)disconnect:(id)arg1;
- (void)connectionExpired:(id)arg1;
- (void)setTimer;
- (_Bool)_isAppleServiceDeliveryHostname:(id)arg1;
- (void)setDeliveryClass:(Class)arg1;
- (id)customAuthenticationErrorStringForError:(id)arg1 authScheme:(id)arg2;
- (id)authenticatedConnection:(_Bool)arg1;

@end
