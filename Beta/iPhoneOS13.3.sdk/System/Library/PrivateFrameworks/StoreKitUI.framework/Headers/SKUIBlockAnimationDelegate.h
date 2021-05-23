/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKUIBlockAnimationDelegate : NSObject

{
    CDUnknownBlockType _block;
}

- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

@end
