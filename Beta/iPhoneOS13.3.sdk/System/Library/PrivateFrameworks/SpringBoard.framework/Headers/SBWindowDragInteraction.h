/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIDragInteraction.h>

@class NSString, UIGestureRecognizer;

@protocol SBAppPlatterDragSourceViewProviding;

@interface SBWindowDragInteraction : UIDragInteraction

{
    UIGestureRecognizer *_gestureRecognizer;
    id <SBAppPlatterDragSourceViewProviding> _sourceViewProvider;
    NSString *_sceneIdentifier;
    NSString *_bundleIdentifier;
}

@property (weak, nonatomic, readonly) UIGestureRecognizer *gestureRecognizer;
@property (weak, nonatomic) id <SBAppPlatterDragSourceViewProviding> sourceViewProvider;
@property (retain, nonatomic) NSString *sceneIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;

- (struct CGPoint)_locationInView:(id)arg1;
- (id)initWithDelegate:(id)arg1 gestureRecognizer:(id)arg2;

@end
