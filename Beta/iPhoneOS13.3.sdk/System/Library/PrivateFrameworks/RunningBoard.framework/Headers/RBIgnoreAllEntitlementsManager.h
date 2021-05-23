/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RBIgnoreAllEntitlementsManager : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)hasEntitlement:(id)arg1;
- (_Bool)hasEntitlementDomain:(unsigned long long)arg1;
- (id)entitlementsForProcess:(id)arg1;
- (id)allEntitlements;

@end
