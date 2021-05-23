/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface AXIPCServer : NSObject

{
    CDUnknownBlockType _defaultHandler;
    struct __CFRunLoopSource *_serverRunLoopSource;
    unsigned int _serverPort;
    NSMutableDictionary *_validSecurityTokens;
    NSMutableSet *_connectedClients;
    CDUnknownBlockType _clientInvalidationHandler;
    NSMutableDictionary *_entitlements;
    unsigned int _assignedServerPort;
    unsigned int _customQueueSize;
    _Bool _running;
    _Bool _perPidService;
    NSString *_serviceName;
    NSMutableDictionary *_handlers;
}

@property (nonatomic, getter=isRunning) _Bool running;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSMutableDictionary *handlers;
@property (copy, nonatomic) CDUnknownBlockType defaultHandler;
@property (nonatomic) _Bool perPidService;
@property (nonatomic, readonly) unsigned int machPort;
@property (copy, nonatomic) CDUnknownBlockType clientInvalidationCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3;
- (void)addPossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2;
- (void)removeAllHandlersForTarget:(id)arg1;
- (_Bool)stopServerWithError:(id *)arg1;
- (id)initWithPort:(unsigned int)arg1 serviceRunLoopSource:(struct __CFRunLoopSource *)arg2;
- (_Bool)startServerWithError:(id *)arg1;
- (void)serverClientRegistrationInvalidated:(id)arg1;
- (id)initWithServiceName:(id)arg1 perPidService:(_Bool)arg2;
- (void)_startServerThread;
- (_Bool)_handleErrorWithMessage:(id)arg1 outError:(id *)arg2;
- (void)removeHandlerForKey:(int)arg1;
- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 async:(_Bool)arg3 forKey:(int)arg4;
- (void)_registerContext:(id)arg1 forKey:(int)arg2;
- (void)_addPossibleRequiredEntitlementsToMessageWithKey:(int)arg1 first:(id)arg2 vothers:(char *)arg3;
- (id)_clientIdentificationForAuditToken:(CDStruct_4c969caf)arg1;
- (_Bool)__slowpath__clientWithAuditToken:(CDStruct_4c969caf)arg1 hasRequiredEntitlementFromSet:(id)arg2;
- (void)_applyCustomQueueSize;
- (void)_handleClientInvalidation:(unsigned int)arg1;
- (_Bool)_clientWithPort:(unsigned int)arg1 auditToken:(CDStruct_4c969caf)arg2 hasAnyEntitlementRequiredForMessage:(id)arg3;
- (void)_handleClientRegistration:(id)arg1;
- (void)setServiceRunLoopSource:(struct __CFRunLoopSource *)arg1;
- (void)setHandler:(CDUnknownBlockType)arg1 forKey:(int)arg2;
- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3 possibleRequiredEntitlements:(id)arg4;
- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 async:(_Bool)arg3 forKey:(int)arg4 possibleRequiredEntitlements:(id)arg5;
- (void)removePossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2;
- (void)setQueueSize:(unsigned int)arg1;
- (void)_handleIncomingMessage:(id)arg1 securityToken:(CDStruct_52eb0d21)arg2 auditToken:(CDStruct_4c969caf)arg3 clientPort:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;

@end
