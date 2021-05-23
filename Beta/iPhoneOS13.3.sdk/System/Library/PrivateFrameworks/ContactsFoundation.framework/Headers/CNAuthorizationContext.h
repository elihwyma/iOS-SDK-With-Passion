/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface CNAuthorizationContext : NSObject

{
    NSNumber *_number_isFirstParty;
    _Bool _hasAuditToken;
    Class _entitlementVerifierClass;
    CDStruct_4c969caf _auditToken;
}

@property (nonatomic, readonly) CDStruct_4c969caf auditToken;
@property (nonatomic, readonly) _Bool hasAuditToken;
@property (nonatomic, readonly) _Bool isValidatingFirstPartyClient;
@property (nonatomic, readonly) Class entitlementVerifierClass;

- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;
- (struct NSNumber *)_isFirstParty;
- (id)initWithEntitlementVerifier:(Class)arg1 isFirstParty:(_Bool)arg2;

@end
