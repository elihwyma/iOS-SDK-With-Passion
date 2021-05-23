/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class NSString, SBLockScreenPlugin;

@interface SBDashBoardPluginViewController : CSCoverSheetViewControllerBase

{
    SBLockScreenPlugin *_plugin;
}

@property (nonatomic, readonly) SBLockScreenPlugin *plugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)viewClass;

- (id)succinctDescriptionBuilder;
- (id)view;
- (long long)presentationStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)handleEvent:(id)arg1;
- (long long)presentationType;
- (long long)presentationTransition;
- (void)updateForPresentation:(id)arg1;
- (void)_updateLegibility;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (id)coverSheetIdentifier;
- (id)displayLayoutElementIdentifier;
- (void)performCustomTransitionToVisible:(_Bool)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)willTransitionToPresented:(_Bool)arg1;
- (long long)_presentationPriority;
- (void)pluginAppearanceDidChange:(id)arg1;
- (id)initWithLockScreenPlugin:(id)arg1;

@end
