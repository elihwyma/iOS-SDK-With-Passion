/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UISDisplayContext;

__attribute__((visibility("hidden")))
@interface _UIScreenInitialDisplayConfigurationLoader : NSObject

{
    UISDisplayContext *_context;
    _Bool _hasRequestedPreload;
}

@property (nonatomic, readonly) UISDisplayContext *initialDisplayContext;

+ (id)sharedLoader;

- (void)_startPreloadInitialDisplayContext;
- (id)initialDisplayConfiguration;

@end
