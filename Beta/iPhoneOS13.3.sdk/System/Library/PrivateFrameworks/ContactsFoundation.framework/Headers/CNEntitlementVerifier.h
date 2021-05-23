/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNEntitlementVerifier : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)currentProcessHasBooleanEntitlement:(id)arg1 error:(id *)arg2;
+ (_Bool)secTask:(struct __SecTask *)arg1 hasBooleanEntitlement:(id)arg2 error:(id *)arg3;
+ (_Bool)auditToken:(CDStruct_4c969caf)arg1 hasBooleanEntitlement:(id)arg2 error:(id *)arg3;
+ (_Bool)auditToken:(CDStruct_4c969caf)arg1 isFirstOrSecondPartyWithError:(id *)arg2;

@end
