/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/UIAlertController.h>

@class NSString, SBAlertItem;

@protocol _SBAlertControllerDelegate;

@interface _SBAlertController : UIAlertController

{
    SBAlertItem *_alertItem;
    id <_SBAlertControllerDelegate> _alertControllerDelegate;
}

@property (weak, nonatomic) SBAlertItem *alertItem;
@property (weak, nonatomic) id <_SBAlertControllerDelegate> alertControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)setHiddenOnClonedDisplay:(_Bool)arg1;

@end
