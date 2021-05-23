/*
 Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

#import <Foundation/NSXPCConnection.h>

@interface NSXPCConnection (CCSEntitlements)

@property (nonatomic, readonly) _Bool ccs_hasEntitlementForListingModuleIdentifiers;

- (_Bool)ccs_hasEntitlementForModuleIdentifier:(id)arg1;

@end
