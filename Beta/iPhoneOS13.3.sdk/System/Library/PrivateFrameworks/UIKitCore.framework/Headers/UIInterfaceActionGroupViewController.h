/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIInterfaceActionGroup, UIInterfaceActionGroupView, UIInterfaceActionVisualStyle;

@protocol UIInterfaceActionVisualStyleProviding;

@interface UIInterfaceActionGroupViewController : UIViewController <Swift>

{
    _Bool _springLoaded;
    id <UIInterfaceActionVisualStyleProviding> _visualStyleProvider;
    UIInterfaceActionGroupView *_actionGroupView;
    UIInterfaceActionGroup *_actionGroup;
}

@property (copy, nonatomic, readonly) UIInterfaceActionGroup *actionGroup;
@property (copy, nonatomic, readonly) UIInterfaceActionGroupView *actionGroupView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIInterfaceActionVisualStyle *visualStyle;
@property (weak, nonatomic) id <UIInterfaceActionVisualStyleProviding> visualStyleProvider;
@property (nonatomic, getter=isSpringLoaded) _Bool springLoaded;

- (void)loadView;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadVisualStyle;
- (id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithActionGroup:(id)arg1;

@end
