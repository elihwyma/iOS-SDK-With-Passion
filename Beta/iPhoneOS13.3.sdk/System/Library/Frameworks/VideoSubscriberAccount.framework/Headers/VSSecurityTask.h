/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VSSecurityTask : NSObject

{
    unsigned long long _kind;
    CDStruct_4c969caf _auditToken;
    CDUnknownFunctionPointerType _createWithAuditToken;
    CDUnknownFunctionPointerType _createFromSelf;
    CDUnknownFunctionPointerType _copyValueForEntitlement;
    CDUnknownFunctionPointerType _copySigningIdentifier;
    struct __SecTask *_taskRef;
}

@property (copy, nonatomic, readonly) NSString *signingIdentifier;

+ (id)currentSecurityTask;
+ (id)securityTaskForCurrentConnection;
+ (id)securityTaskWithAuditToken:(CDStruct_4c969caf)arg1;
+ (void)setSecurityTaskForCurrentConnection:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)shouldAllowAccessForBooleanEntitlement:(id)arg1;
- (_Bool)getValue:(id *)arg1 forEntitlement:(id)arg2 error:(id *)arg3;
- (_Bool)shouldAllowAccessToSubscriberIdentifierHashModifier:(id)arg1;
- (id)initWithCreateFromSelfProc:(CDUnknownFunctionPointerType)arg1 copyValueForEntitlementProc:(CDUnknownFunctionPointerType)arg2;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1 createWithAuditTokenProc:(CDUnknownFunctionPointerType)arg2 copyValueForEntitlementProc:(CDUnknownFunctionPointerType)arg3;
- (struct __SecTask *)_taskRef;
- (CDUnknownFunctionPointerType)_copySigningIdentifier;

@end
