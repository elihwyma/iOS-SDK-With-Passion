/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class FBScene, NSString, UIScenePresentationContext, UIView;

@protocol UIScenePresentation;

@protocol UIScenePresenter <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (weak, nonatomic, readonly) FBScene *scene;
@property (copy, nonatomic, readonly) UIScenePresentationContext *presentationContext;
@property (nonatomic, readonly) UIView<UIScenePresentation> *presentationView;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;

- (unsigned short)invalidate;
- (unsigned short)activate;
- (unsigned short)deactivate;
- (unsigned short)modifyPresentationContext: /* Error: Ran out of types for this method. */;
- (unsigned short)newSnapshotContext;
- (unsigned short)newSnapshot;
- (unsigned short)newSnapshotPresentationView;

@end
