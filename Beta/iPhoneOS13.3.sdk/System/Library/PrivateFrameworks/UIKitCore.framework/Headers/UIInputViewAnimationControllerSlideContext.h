/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIInputViewSetPlacement, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationControllerSlideContext : NSObject

{
    UIView *_snapshot;
    UIInputViewSetPlacement *_endPlacement;
    struct CGRect _snapshotEndFrame;
}

@property (retain, nonatomic) UIView *snapshot;
@property (nonatomic) struct CGRect snapshotEndFrame;
@property (retain, nonatomic) UIInputViewSetPlacement *endPlacement;

- (void)dealloc;

@end
