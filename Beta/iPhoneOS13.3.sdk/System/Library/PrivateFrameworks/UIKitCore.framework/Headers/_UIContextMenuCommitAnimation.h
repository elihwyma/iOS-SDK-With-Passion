/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIView, _UIContextMenuCommitContainerView, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuCommitAnimation : NSObject

{
    double _sourceRadius;
    double _destinationRadius;
    UIView *_source;
    UIView *_destination;
    UIView *_container;
    UIView *_morphContainer;
    UIView *_sourceSnapshotView;
    UIView *_sourceTransformView;
    UIView *_destinationTransformView;
    UIView *_originalContentSnapshotView;
    _UIPortalView *_destinationContentPortalView;
    _UIContextMenuCommitContainerView *_animationContainer;
    unsigned long long _animationCount;
}

@property (retain, nonatomic) UIView *source;
@property (retain, nonatomic) UIView *destination;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *morphContainer;
@property (retain, nonatomic) UIView *sourceSnapshotView;
@property (retain, nonatomic) UIView *sourceTransformView;
@property (retain, nonatomic) UIView *destinationTransformView;
@property (retain, nonatomic) UIView *originalContentSnapshotView;
@property (retain, nonatomic) _UIPortalView *destinationContentPortalView;
@property (retain, nonatomic) _UIContextMenuCommitContainerView *animationContainer;
@property (nonatomic) unsigned long long animationCount;
@property (nonatomic) double sourceRadius;
@property (nonatomic) double destinationRadius;

- (void)_prepareSnapshots;
- (void)_prepareAnimationViews;
- (id)initWithSource:(id)arg1 container:(id)arg2;
- (void)animateWithAlongsideActions:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
