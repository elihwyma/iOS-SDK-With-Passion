/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface IDSDependencyProvider : NSObject

{
    NSMutableDictionary *_registeredAdapters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)userDefaults;
+ (id)sharedProvider;
+ (id)pushAdapter;
+ (id)registeredObjectForProtocol:(id)arg1;
+ (void)registerObject:(id)arg1 forProtocol:(id)arg2;
+ (id)serviceLoader;
+ (id)XPCAdapter;
+ (id)keychainAdapter;
+ (id)systemMonitorAdapter;

- (id)placeholderMachPort;
- (id)apsConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 enablePushDuringSleep:(_Bool)arg3 queue:(id)arg4;
- (id)registeredObjectForProtocol:(id)arg1;
- (id)loadServiceDictionaries;
- (id)createServiceConnectionWithServiceName:(const char *)arg1 invalidationHandler:(CDUnknownBlockType)arg2 terminationHandler:(CDUnknownBlockType)arg3 peerEventHandler:(CDUnknownBlockType)arg4 peerQueue:(id)arg5;
- (_Bool)setKeychainData:(id)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 allowSync:(_Bool)arg5 error:(int *)arg6;
- (_Bool)getKeychainData:(id *)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 error:(int *)arg5;
- (_Bool)removeKeychainDataOnService:(id)arg1 account:(id)arg2 error:(int *)arg3;
- (void)registerObject:(id)arg1 forProtocol:(id)arg2;

@end
