/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBApplicationSceneView, SBLayoutElement, SBOrientationTransformWrapperView;

@interface SBSceneLayoutElementAnimationWrapperView : UIView <Swift>

{
    SBLayoutElement *_layoutElement;
    SBApplicationSceneView *_appView;
    SBOrientationTransformWrapperView *_orientedView;
}

@property (nonatomic, readonly) SBLayoutElement *layoutElement;
@property (nonatomic, readonly) SBApplicationSceneView *appView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long layoutOrientation;

- (void)invalidate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)addContentView:(id)arg1;
- (id)initWithLayoutElement:(id)arg1 appView:(id)arg2;

@end
