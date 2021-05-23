/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NMSFTP, NMSSHChannel, NMSSHHostConfig, NSError, NSNumber, NSString;

@protocol NMSSHSessionDelegate;

@interface NMSSHSession : NSObject

{
    _Bool _connected;
    id <NMSSHSessionDelegate> _delegate;
    NMSSHHostConfig *_hostConfig;
    NSString *_host;
    NSNumber *_port;
    NSString *_username;
    long long _fingerprintHash;
    NSString *_banner;
    struct _LIBSSH2_SESSION *_session;
    struct __CFSocket *_socket;
    struct _LIBSSH2_AGENT *_agent;
    CDUnknownBlockType _kbAuthenticationBlock;
    NMSSHChannel *_channel;
    NMSFTP *_sftp;
}

@property (nonatomic) struct _LIBSSH2_AGENT *agent;
@property (nonatomic, getter=rawSession) struct _LIBSSH2_SESSION *session;
@property (nonatomic, getter=isConnected) _Bool connected;
@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *username;
@property (copy, nonatomic) CDUnknownBlockType kbAuthenticationBlock;
@property (retain, nonatomic) NMSSHChannel *channel;
@property (retain, nonatomic) NMSFTP *sftp;
@property (retain, nonatomic) NSNumber *port;
@property (retain, nonatomic) NMSSHHostConfig *hostConfig;
@property (weak, nonatomic) id <NMSSHSessionDelegate> delegate;
@property (retain, nonatomic) NSNumber *timeout;
@property (nonatomic, readonly) NSError *lastError;
@property (nonatomic) long long fingerprintHash;
@property (retain, nonatomic) NSString *banner;
@property (nonatomic, readonly) NSString *remoteBanner;
@property (nonatomic, readonly) struct __CFSocket *socket;
@property (nonatomic, readonly, getter=isAuthorized) _Bool authorized;

+ (id)URLForHost:(id)arg1;
+ (id)connectToHost:(id)arg1 port:(long long)arg2 withUsername:(id)arg3;
+ (id)connectToHost:(id)arg1 withUsername:(id)arg2;

- (void)disconnect;
- (_Bool)connect;
- (id)applicationSupportDirectory;
- (id)initWithHost:(id)arg1 port:(long long)arg2 andUsername:(id)arg3;
- (id)initWithHost:(id)arg1 configs:(id)arg2 withDefaultPort:(long long)arg3 defaultUsername:(id)arg4;
- (id)initWithHost:(id)arg1 andUsername:(id)arg2;
- (id)hostIPAddresses;
- (_Bool)connectWithTimeout:(id)arg1;
- (_Bool)authenticateByPassword:(id)arg1;
- (_Bool)authenticateByPublicKey:(id)arg1 privateKey:(id)arg2 andPassword:(id)arg3;
- (_Bool)authenticateByInMemoryPublicKey:(id)arg1 privateKey:(id)arg2 andPassword:(id)arg3;
- (_Bool)authenticateByKeyboardInteractive;
- (_Bool)authenticateByKeyboardInteractiveUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)connectToAgent;
- (id)supportedAuthenticationMethods;
- (_Bool)supportsAuthenticationMethod:(id)arg1;
- (id)fingerprint:(long long)arg1;
- (id)userKnownHostsFileName;
- (long long)knownHostStatusInFiles:(id)arg1;
- (long long)knownHostStatusWithFile:(id)arg1;
- (_Bool)addKnownHostName:(id)arg1 port:(long long)arg2 toFile:(id)arg3 withSalt:(id)arg4;
- (id)keyboardInteractiveRequest:(id)arg1;

@end
