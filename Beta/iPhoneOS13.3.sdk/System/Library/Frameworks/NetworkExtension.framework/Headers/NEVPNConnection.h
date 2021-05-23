/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEConfigurationManager, NEVPNManager, NSDate, NSError, NSString;

@protocol OS_dispatch_queue;

@interface NEVPNConnection : NSObject

{
    _Bool _initialized;
    int _sessionType;
    long long _status;
    NSDate *_connectedDate;
    NEConfigurationManager *_configManager;
    NSString *_configurationName;
    NSObject<OS_dispatch_queue> *_queue;
    void *_session;
    NEVPNManager *_weakmanager;
    NSError *_lastDisconnectError;
}

@property (nonatomic, readonly) NEConfigurationManager *configManager;
@property (retain, nonatomic) NSString *configurationName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property void *session;
@property (nonatomic, readonly) int sessionType;
@property (weak) NEVPNManager *weakmanager;
@property (nonatomic) _Bool initialized;
@property (readonly) NSError *lastDisconnectError;
@property (readonly) long long status;
@property (readonly) NSDate *connectedDate;
@property (readonly) NEVPNManager *manager;

+ (id)createDisconnectErrorWithDomain:(id)arg1 code:(unsigned int)arg2;
+ (id)createConnectionForEnabledEnterpriseConfiguration;

- (void)dealloc;
- (id)initWithType:(int)arg1;
- (void)reload;
- (void)newSessionWithConfigID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)startVPNTunnelWithOptions:(id)arg1 andReturnError:(id *)arg2;
- (void)stopVPNTunnel;
- (void)destroySession;
- (void)resetLastDisconnectError:(id)arg1;
- (void)createSessionWithConfigurationIdentifier:(id)arg1 forceInfoFetch:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateSessionInfoForce:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initHeadless;
- (_Bool)startVPNTunnelAndReturnError:(id *)arg1;

@end
