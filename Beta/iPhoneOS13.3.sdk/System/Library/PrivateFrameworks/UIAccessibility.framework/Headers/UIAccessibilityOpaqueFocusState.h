/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <Foundation/NSObject.h>

@class UIView;

@interface UIAccessibilityOpaqueFocusState : NSObject

{
    _Bool _hasFocus;
    _Bool _hasBeenReused;
    id _element;
    UIView *_reusableView;
    struct CGRect _sceneRelativeFrame;
}

@property (weak, nonatomic) id element;
@property (nonatomic) _Bool hasFocus;
@property (nonatomic) struct CGRect sceneRelativeFrame;
@property (retain, nonatomic) UIView *reusableView;
@property (nonatomic) _Bool hasBeenReused;

- (id)description;

@end
