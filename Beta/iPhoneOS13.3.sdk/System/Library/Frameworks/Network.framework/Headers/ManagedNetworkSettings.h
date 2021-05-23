/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ManagedNetworkSettings : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedMNS;

- (id)init;
- (void)handleEvent:(id)arg1;
- (void)reloadNetworkdSettings;
- (void)reloadMNS;
- (_Bool)updateSettingsFromCarrierFile:(id)arg1 prefix:(id)arg2 settings:(id)arg3;
- (void)reloadCarrierSettings:(_Bool)arg1;

@end
