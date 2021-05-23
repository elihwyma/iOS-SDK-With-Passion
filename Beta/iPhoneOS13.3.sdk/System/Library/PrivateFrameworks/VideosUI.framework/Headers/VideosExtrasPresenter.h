/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString, VideosExtrasContext;

__attribute__((visibility("hidden")))
@interface VideosExtrasPresenter : NSObject

{
    VideosExtrasContext *_extrasContext;
    struct CGRect _extrasMenuBarFrame;
}

@property (retain, nonatomic) VideosExtrasContext *extrasContext;
@property (nonatomic) struct CGRect extrasMenuBarFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)initWithExtrasContext:(id)arg1 extrasMenuBarFrame:(struct CGRect)arg2;
- (void)presentExtrasWith:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissExtrasAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end
