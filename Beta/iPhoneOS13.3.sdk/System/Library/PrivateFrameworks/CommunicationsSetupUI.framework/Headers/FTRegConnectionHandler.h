/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FTRegConnectionHandler : NSObject

{
    long long _serviceType;
    unsigned int _caps;
    NSString *_name;
    NSString *_listenerID;
    NSString *_logName;
    CDStruct_34e8bc21 _handlerFlags;
}

@property (nonatomic) long long serviceType;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic, readonly) NSString *_serviceName;
@property (retain, nonatomic) NSString *_logName;
@property (copy, nonatomic, setter=_setListenerID:) NSString *_listenerID;
@property (nonatomic) unsigned int caps;

- (void)dealloc;
- (void)_startListeningForNotifications;
- (_Bool)connectToDaemon;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (_Bool)connectToDaemon:(_Bool)arg1;
- (id)initWithServiceType:(long long)arg1 name:(id)arg2;
- (_Bool)isConnectedToDaemon;
- (void)_stopListeningForNotifications;
- (id)initWithServiceType:(long long)arg1 name:(id)arg2 capabilities:(unsigned int)arg3;
- (void)_disconnectFromDaemon;
- (_Bool)_isServiceSupported;

@end
