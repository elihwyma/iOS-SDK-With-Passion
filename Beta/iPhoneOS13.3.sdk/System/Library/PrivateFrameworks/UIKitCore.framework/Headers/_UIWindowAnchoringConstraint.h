/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSAutoresizingMaskLayoutConstraint.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface _UIWindowAnchoringConstraint : NSAutoresizingMaskLayoutConstraint

{
    UIWindow *_window;
}

@property (nonatomic) UIWindow *window;

- (_Bool)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id *)arg3;

@end
