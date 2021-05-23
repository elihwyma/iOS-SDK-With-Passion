/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

@class FARequestConfigurator, RUIStyle, UIViewController;

@interface FACircleStateController : NSObject

{
    FARequestConfigurator *_requestConfigurator;
    CDUnknownBlockType _performOperationCompletion;
    UIViewController *_presenter;
    RUIStyle *_customRUIStyle;
}

@property (weak, nonatomic) UIViewController *presenter;
@property (retain, nonatomic) RUIStyle *customRUIStyle;

- (id)init;
- (id)initWithPresenter:(id)arg1;
- (void)performOperationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performOperationWithContext:(id)arg1 viewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_contextRequiresRemoteService:(id)arg1;
- (void)_presentViewServiceWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_ensurePresenterWithCompletion:(CDUnknownBlockType)arg1;

@end
