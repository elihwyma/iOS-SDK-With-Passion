/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <UIKit/UIView.h>

@class NSArray;

@interface SBFView : UIView

{
    NSArray *_animatedLayerProperties;
    CDUnknownBlockType _didMoveToWindowHandler;
    struct CGSize _intrinsicContentSize;
}

@property (nonatomic) struct CGSize intrinsicContentSize;
@property (copy, nonatomic) NSArray *animatedLayerProperties;
@property (copy, nonatomic) CDUnknownBlockType didMoveToWindowHandler;

- (void)didMoveToWindow;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end
