/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UINavigationControllerPalette;

__attribute__((visibility("hidden")))
@interface UINavigationDeferredTransitionContext : NSObject

{
    _UINavigationControllerPalette *_incomingTopPalette;
    _UINavigationControllerPalette *_outgoingTopPalette;
}

@property (retain, nonatomic) _UINavigationControllerPalette *incomingTopPalette;
@property (retain, nonatomic) _UINavigationControllerPalette *outgoingTopPalette;

@end
