/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKUICountdownViewTimerTarget : NSObject

{
    CDUnknownBlockType _actionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType actionBlock;

- (void)action;

@end
