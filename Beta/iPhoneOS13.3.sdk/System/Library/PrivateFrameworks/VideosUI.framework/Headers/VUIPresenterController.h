/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIPresenterController : NSObject

+ (void)presentViewController:(id)arg1 fromViewController:(id)arg2 WithConfiguration:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)popOrDismissViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)popViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)dismissViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)pushViewController:(id)arg1 fromViewController:(id)arg2 isAnimated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

@end
