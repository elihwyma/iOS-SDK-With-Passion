/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class SBSceneHandle, UIView;

@protocol SBScenePlaceholderContentContext;

@protocol SBSceneViewControlling <Swift>

@property (nonatomic, readonly) SBSceneHandle *sceneHandle;
@property (nonatomic, readonly) long long displayMode;
@property (retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property (retain, nonatomic) UIView *customContentView;
@property (nonatomic, readonly) struct CGSize contentReferenceSize;
@property (nonatomic, readonly) long long contentInterfaceOrientation;

- (unsigned short)invalidate;
- (unsigned short)newSnapshot;
- (unsigned short)setDisplayMode:animationFactory:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setContentReferenceSize:withInterfaceOrientation: /* Error: Ran out of types for this method. */;
- (unsigned short)newSnapshotView;
- (unsigned short)newSnapshotViewOnQueue:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)containerContentWrapperInterfaceOrientationChangedTo: /* Error: Ran out of types for this method. */;

@end
