/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface FTEntitlementSupport : NSObject

{
    struct __CTServerConnection *_ctServerConnection;
    struct __CFString *_entitlementStatus;
}

@property (nonatomic, readonly) _Bool faceTimeNonWiFiEntitled;
@property (nonatomic, readonly) NSDictionary *registrationState;

+ (id)sharedInstance;

- (id)init;
- (_Bool)_setupCTServerConnection;
- (void)_updateEntitlementStatusUsingCTEntitlementsInfo:(struct __CFDictionary *)arg1;
- (void)_cleanupMachInfo;
- (_Bool)_registerForCTEntitlementNotifications;
- (void)_unregisterForCTEntitlementNotifications;
- (void)_entitlementStatusChanged;
- (_Bool)_disconnectCTServerConnection;
- (_Bool)_reconnectCTServerConnectionIfNecessary;
- (id)_rawEntitlementValue;
- (void)_handleCTServiceRequestName:(struct __CFString *)arg1 userInfo:(struct __CFDictionary *)arg2 contextInfo:(void *)arg3;

@end
