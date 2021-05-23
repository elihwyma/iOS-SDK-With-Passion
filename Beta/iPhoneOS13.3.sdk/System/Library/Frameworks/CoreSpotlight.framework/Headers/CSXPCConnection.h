/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSXPCConnection : NSObject

{
    _Bool _machService;
    _Bool _listener;
    _Bool _nonLaunching;
    unsigned int _user;
    NSString *_uuid;
    NSString *_serviceName;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (nonatomic) unsigned int user;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) _Bool machService;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) _Bool listener;
@property (nonatomic) _Bool nonLaunching;

+ (id)copyNSStringForKey:(const char *)arg1 fromXPCDictionary:(id)arg2;
+ (id)dataWrapperForKey:(const char *)arg1 sizeKey:(const char *)arg2 fromXPCDictionary:(id)arg3;
+ (id)copyNSStringArrayFromXPCArray:(id)arg1;
+ (_Bool)dictionary:(id)arg1 setSharedMemory:(void *)arg2 forKey:(const char *)arg3 size:(unsigned long long)arg4 forSizeKey:(const char *)arg5;
+ (void)dictionary:(id)arg1 setStringArray:(id)arg2 forKey:(const char *)arg3;
+ (id)copyNSDataForKey:(const char *)arg1 fromXPCDictionary:(id)arg2;
+ (id)copyNSStringSetFromXPCArray:(id)arg1;
+ (id)appIdentifierFromTeamAppTuple:(id)arg1;

- (void)handleError:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (void)sendMessageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleReply:(id)arg1;
- (void)sendMessageAsync:(id)arg1;
- (id)initWithServiceName:(id)arg1 machService:(_Bool)arg2 uuid:(id)arg3;
- (id)initWithServiceName:(id)arg1 machService:(_Bool)arg2;
- (_Bool)addClientConnectionIfAllowedForConnection:(id)arg1;
- (_Bool)handleMessage:(id)arg1 type:(struct _xpc_type_s *)arg2 connection:(id)arg3;
- (_Bool)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;
- (void)_lostClientConnection:(id)arg1 error:(id)arg2;
- (_Bool)lostClientConnection:(id)arg1 error:(id)arg2;
- (void)startListener;
- (id)initListenerWithName:(id)arg1;
- (id)initMachServiceListenerWithName:(id)arg1;
- (void)_setUser:(unsigned int)arg1;
- (_Bool)addClientConnectionIfAllowedForConfiguration:(id)arg1;

@end
