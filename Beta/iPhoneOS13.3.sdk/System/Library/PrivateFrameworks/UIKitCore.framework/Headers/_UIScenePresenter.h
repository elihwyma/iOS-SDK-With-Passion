/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class BSMonotonicReferenceTime, FBScene, NSString, UIScenePresentationContext, UIView, _UIScenePresentationView, _UIScenePresenterOwner;

@protocol NSCopying, NSCopying><_UIComparable, UIScenePresentation;

__attribute__((visibility("hidden")))
@interface _UIScenePresenter : NSObject

{
    _UIScenePresenterOwner *_owner;
    UIScenePresentationContext *_presentationContext;
    BSMonotonicReferenceTime *_initializeTime;
    id <NSCopying><_UIComparable> _sortContext;
    NSString *_identifier;
    _Bool _invalidated;
    _Bool _visibilityPropagationEnabled;
    _UIScenePresentationView *_view;
    _Bool _enabled;
    _Bool _hosting;
}

@property (retain, nonatomic) BSMonotonicReferenceTime *_initializeTime;
@property (nonatomic, getter=isActive) _Bool enabled;
@property (nonatomic, getter=isHosting) _Bool hosting;
@property (nonatomic, getter=isVisibilityPropagationEnabled) _Bool visibilityPropagationEnabled;
@property (copy, nonatomic, readonly) id <NSCopying> sortContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (weak, nonatomic, readonly) FBScene *scene;
@property (copy, nonatomic, readonly) UIScenePresentationContext *presentationContext;
@property (nonatomic, readonly) UIView<UIScenePresentation> *presentationView;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (long long)compare:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)activate;
- (void)deactivate;
- (void)modifyPresentationContext:(CDUnknownBlockType)arg1;
- (id)newSnapshotContext;
- (id)newSnapshot;
- (id)newSnapshotPresentationView;
- (id)initWithOwner:(id)arg1 identifier:(id)arg2 sortContext:(id)arg3;

@end
