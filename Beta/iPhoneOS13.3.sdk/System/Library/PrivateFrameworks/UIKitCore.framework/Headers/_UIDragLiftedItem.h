/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UITargetedDragPreview, _UIPlatterView;

__attribute__((visibility("hidden")))
@interface _UIDragLiftedItem : NSObject

{
    _Bool _sourceViewWasAdded;
    _UIPlatterView *_platterView;
    UITargetedDragPreview *_targetedPreview;
    double _liftAlpha;
}

@property (retain, nonatomic) _UIPlatterView *platterView;
@property (retain, nonatomic) UITargetedDragPreview *targetedPreview;
@property (nonatomic) _Bool sourceViewWasAdded;
@property (nonatomic) double liftAlpha;

@end
