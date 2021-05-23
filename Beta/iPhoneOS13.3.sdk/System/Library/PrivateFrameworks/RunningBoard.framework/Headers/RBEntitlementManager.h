/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

#import <RunningBoard/Swift-Protocol.h>

@class NSDictionary, NSMapTable, NSSet, NSString;

@interface RBEntitlementManager : NSObject <Swift>

{
    struct os_unfair_lock_s _lock;
    NSMapTable *_entitlementsByIdentifier;
    NSSet *_availableEntitlements;
    NSDictionary *_restrictedEntitlements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *stateCaptureTitle;

+ (id)_hardCodedEntitlements;

- (id)captureState;
- (id)entitlementsForProcess:(id)arg1;
- (id)allEntitlements;
- (id)_entitlementsForProcess:(id)arg1;
- (_Bool)_secTask:(struct __SecTask *)arg1 hasEntitlement:(id)arg2;
- (void)_removeRestrictedEntitlements:(id)arg1 forProcess:(id)arg2;
- (id)initWithDomainAttributeEntitlements:(id)arg1;

@end
