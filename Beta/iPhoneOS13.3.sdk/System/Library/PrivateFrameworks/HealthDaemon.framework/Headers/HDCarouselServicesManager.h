/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAssertionManager, NSString;

@protocol OS_dispatch_queue;

@interface HDCarouselServicesManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (id)takeSessionAssertionForOwnerIdentifier:(id)arg1;
- (id)takeSessionAssertionForOwnerIdentifier:(id)arg1 supportsAOT:(_Bool)arg2;
- (id)takeDisableAOTAssertionForOwnerIdentifier:(id)arg1;

@end
