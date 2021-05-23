/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBSceneHandle, SBSceneView, UIView;

@protocol SBScenePlaceholderContentContext;

@interface SBSceneViewController : UIViewController <Swift>

{
    SBSceneHandle *_sceneHandle;
    long long _displayMode;
    long long _contentOrientation;
    id <SBScenePlaceholderContentContext> _placeholderContentContext;
    UIView *_customContentView;
    SBSceneView *_sceneView;
    struct CGSize _contentReferenceSize;
}

@property (nonatomic, readonly, getter=_sceneView) SBSceneView *sceneView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SBSceneHandle *sceneHandle;
@property (nonatomic, readonly) long long displayMode;
@property (retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property (retain, nonatomic) UIView *customContentView;
@property (nonatomic, readonly) struct CGSize contentReferenceSize;
@property (nonatomic, readonly) long long contentInterfaceOrientation;

- (void)dealloc;
- (void)invalidate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (id)newSnapshot;
- (long long)sceneViewPresentationPriority:(id)arg1;
- (id)sceneViewPresentationIdentifier:(id)arg1;
- (void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setContentReferenceSize:(struct CGSize)arg1 withInterfaceOrientation:(long long)arg2;
- (id)initWithSceneHandle:(id)arg1;
- (id)newSnapshotView;
- (void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
- (void)_setSceneView:(id)arg1;

@end
