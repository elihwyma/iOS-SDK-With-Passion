/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HMFoundation/HMFOperation.h>

@class HMHomeManager;

__attribute__((visibility("hidden")))
@interface __HMHomeDataSyncOperation : HMFOperation

{
    _Bool _refresh;
    HMHomeManager *_manager;
}

@property (weak, readonly) HMHomeManager *manager;
@property (getter=isRefresh) _Bool refresh;

- (void)main;
- (id)initWithHomeManager:(id)arg1;
- (id)initWithHomeManager:(id)arg1 timeout:(double)arg2;

@end
