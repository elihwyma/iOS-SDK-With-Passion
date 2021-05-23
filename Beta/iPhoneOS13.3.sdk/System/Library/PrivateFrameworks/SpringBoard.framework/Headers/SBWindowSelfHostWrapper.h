/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, UIScenePresentationContext, UIView, UIWindow;

@protocol UIScenePresentation, UIScenePresenter;

@interface SBWindowSelfHostWrapper : NSObject

{
    UIWindow *_window;
    id <UIScenePresenter> _presenter;
    UIView<UIScenePresentation> *_hostView;
}

@property (copy, nonatomic, readonly) NSString *requester;
@property (nonatomic, readonly) UIWindow *window;
@property (nonatomic, readonly) UIView<UIScenePresentation> *hostView;
@property (nonatomic, readonly) id <UIScenePresenter> presenter;
@property (copy, nonatomic, readonly) UIScenePresentationContext *presentationContext;

+ (id)wrapperForWindow:(id)arg1 orientation:(long long)arg2 hostRequester:(id)arg3 sceneIdentifier:(id)arg4;
+ (id)wrapperForUseInWindow:(id)arg1 hostRequester:(id)arg2 sceneIdentifier:(id)arg3;

- (void)modifyPresentationContext:(CDUnknownBlockType)arg1;
- (void)stopHosting;

@end
