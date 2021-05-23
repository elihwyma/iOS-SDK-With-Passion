/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class SKUIApplicationController;

__attribute__((visibility("hidden")))
@interface _SKUIApplicationShutdownHelper : NSObject

{
    SKUIApplicationController *_applicationController;
    unsigned long long _taskID;
}

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithApplicationController:(id)arg1;

@end
