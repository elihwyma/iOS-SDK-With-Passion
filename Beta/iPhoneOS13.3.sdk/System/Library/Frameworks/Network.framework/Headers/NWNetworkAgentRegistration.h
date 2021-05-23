/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@protocol NWNetworkAgent, OS_dispatch_queue, OS_dispatch_source;

@interface NWNetworkAgentRegistration : NSObject

{
    int _registrationSocket;
    Class _networkAgentClass;
    NSObject<NWNetworkAgent> *_networkAgent;
    NSUUID *_registeredUUID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_readSource;
}

@property Class networkAgentClass;
@property (retain) NSObject<NWNetworkAgent> *networkAgent;
@property (retain) NSUUID *registeredUUID;
@property int registrationSocket;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_source> *readSource;
@property (nonatomic, readonly, getter=isRegistered) _Bool registered;
@property (nonatomic) unsigned long long useCount;

+ (int)newRegistrationFileDescriptor;
+ (_Bool)addActiveAssertionToNetworkAgent:(id)arg1;
+ (_Bool)removeActiveAssertionFromNetworkAgent:(id)arg1;
+ (_Bool)useNetworkAgent:(id)arg1 returnUseCount:(unsigned long long *)arg2;

- (void)dealloc;
- (id)initWithNetworkAgentClass:(Class)arg1;
- (id)initWithNetworkAgentClass:(Class)arg1 queue:(id)arg2;
- (int)dupRegistrationFileDescriptor;
- (void)handleMessageFromAgent;
- (_Bool)createReadSourceWithRegistrationSocket:(int)arg1;
- (_Bool)registerNetworkAgent:(id)arg1 withFileDescriptor:(int)arg2;
- (_Bool)registerNetworkAgent:(id)arg1;
- (_Bool)setRegisteredNetworkAgent:(id)arg1 fileDescriptor:(int)arg2;
- (_Bool)updateNetworkAgent:(id)arg1;
- (_Bool)unregisterNetworkAgent;
- (_Bool)addNetworkAgentToInterfaceNamed:(id)arg1;
- (_Bool)removeNetworkAgentFromInterfaceNamed:(id)arg1;
- (_Bool)assignNexusData:(id)arg1 toClient:(id)arg2;
- (_Bool)assignDiscoveredEndpoints:(id)arg1 toClient:(id)arg2;
- (_Bool)assignResolvedEndpoints:(id)arg1 toClient:(id)arg2;

@end
