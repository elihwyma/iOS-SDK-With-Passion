/*
 Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

#import <Foundation/NSObject.h>

@class LAUIRenderLoop;

__attribute__((visibility("hidden")))
@interface LAUIDisplayLinkTargetProxy : NSObject

{
    LAUIRenderLoop *_target;
}

- (id)init;
- (id)initWithTarget:(id)arg1;
- (void)draw:(id)arg1;

@end
