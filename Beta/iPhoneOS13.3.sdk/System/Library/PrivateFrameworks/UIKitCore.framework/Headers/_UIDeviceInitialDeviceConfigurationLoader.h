/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UISDeviceContext;

__attribute__((visibility("hidden")))
@interface _UIDeviceInitialDeviceConfigurationLoader : NSObject

{
    UISDeviceContext *_context;
    _Bool _hasRequestedPreload;
}

@property (nonatomic, readonly) UISDeviceContext *initialDeviceContext;

+ (id)sharedLoader;

- (void)_startPreloadInitialDeviceContext;

@end
