/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardHandBiasTransitionContext : NSObject

{
    UIView *_fromSnapshotView;
    UIView *_toSnapshotView;
}

@property (retain, nonatomic) UIView *fromSnapshotView;
@property (retain, nonatomic) UIView *toSnapshotView;

@end
