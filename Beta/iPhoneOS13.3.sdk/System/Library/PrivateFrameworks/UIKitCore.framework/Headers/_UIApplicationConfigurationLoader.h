/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UISApplicationInitializationContext;

__attribute__((visibility("hidden")))
@interface _UIApplicationConfigurationLoader : NSObject

{
    UISApplicationInitializationContext *_applicationInitializationContext;
    _Atomic _Bool _hasRequestedPreload;
}

@property (nonatomic, readonly) UISApplicationInitializationContext *applicationInitializationContext;
@property (nonatomic, readonly) _Bool isFrontBoard;
@property (nonatomic, readonly) _Bool usesLocalInitializationContext;

+ (id)sharedLoader;

- (void)dealloc;
- (id)_init;
- (void)startPreloadInitializationContext;
- (id)_appInitializationContextFactoryClass;
- (id)_loadInitializationContext;

@end
