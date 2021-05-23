/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIContextualAction.h>

@class UIColor, UIImage, UIVisualEffect;

@interface UISwipeAction : UIContextualAction

{
    _Bool _canBeTriggeredBySwipe;
    _Bool _resetsSwipedRow;
    UIVisualEffect *_backgroundEffect;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) UIImage *icon;
@property (copy, nonatomic) UIVisualEffect *backgroundEffect;
@property (nonatomic) _Bool canBeTriggeredBySwipe;
@property (nonatomic) _Bool resetsSwipedRow;

+ (id)swipeActionWithStyle:(long long)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;

- (id)init;
- (void)resetSwipedRow;

@end
