/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface RBEntitlements : NSObject

{
    NSSet *_entitlements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)hasEntitlement:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)hasEntitlementDomain:(unsigned long long)arg1;
- (id)_entitlementsForOption:(unsigned long long)arg1;
- (id)_initWithEntitlements:(id)arg1;
- (id)_entitlementsForOptions:(unsigned long long)arg1;

@end
