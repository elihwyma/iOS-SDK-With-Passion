/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSUUID;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSDeviceIdentifierCache : NSObject

{
    struct NSDictionary *_identifiers;
    NSUUID *_advertiserIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    int _saveFlag;
    NSDictionary *_perUserEntropy;
}

+ (id)sharedCache;

- (id)init;
- (struct NSMutableDictionary *)identifiersOfTypeNotDispatched:(long long)arg1;
- (_Bool)deviceUnlockedSinceBoot;
- (void)save;
- (id)applyPerUserEntropyNotDispatched:(id)arg1 type:(long long)arg2;
- (id)generateSomePerUserEntropyNotDispatched;
- (struct NSDictionary *)allIdentifiersNotDispatched;
- (void)generatePerUserEntropyIfNeededNotDispatched;
- (void)clearAllIdentifiersOfType:(long long)arg1;
- (void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;

@end
