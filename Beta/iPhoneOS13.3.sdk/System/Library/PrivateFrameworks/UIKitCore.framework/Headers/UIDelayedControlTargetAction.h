/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControlTargetAction.h>

@class UIEvent;

__attribute__((visibility("hidden")))
@interface UIDelayedControlTargetAction : UIControlTargetAction

{
    UIEvent *_event;
}

@property (retain, nonatomic) UIEvent *event;

@end
