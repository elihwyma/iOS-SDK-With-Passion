/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

#import <NSObject.h>

@class NSMutableArray;

@interface AXUIServiceEntitlementChecker : NSObject

{
    Class _serviceClass;
    NSMutableArray *_clientConnections;
    NSMutableArray *_entitlementsCaches;
}

@property (nonatomic) Class serviceClass;
@property (retain, nonatomic) NSMutableArray *clientConnections;
@property (retain, nonatomic) NSMutableArray *entitlementsCaches;

- (void)dealloc;
- (unsigned long long)_indexOfClientConnection:(id)arg1;
- (id)_singleRequiredEntitlementForMessageWithIdentifier:(unsigned long long)arg1;
- (id)_possibleRequiredEntitlementForMessageWithIdentifier:(unsigned long long)arg1;
- (_Bool)_clientProcessWithAuditToken:(CDStruct_6ad76789 *)arg1 hasEntitlement:(id)arg2;
- (id)initWithServiceClass:(Class)arg1;
- (_Bool)serviceCanProcessMessageWithIdentifier:(unsigned long long)arg1 fromClientWithConnection:(id)arg2 possibleRequiredEntitlements:(id *)arg3;
- (void)clientConnectionWillBeTerminated:(id)arg1;

@end
