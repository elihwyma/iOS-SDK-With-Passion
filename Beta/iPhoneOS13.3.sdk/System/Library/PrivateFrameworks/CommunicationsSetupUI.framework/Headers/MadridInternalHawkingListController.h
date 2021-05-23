/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Preferences/PSEditableListController.h>

@interface MadridInternalHawkingListController : PSEditableListController

- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)specifiers;
- (void)setHawkingEnabled:(id)arg1 specifier:(id)arg2;
- (id)hawkingEnabled:(id)arg1;
- (void)setChinaToChinaEnabled:(id)arg1 specifier:(id)arg2;
- (id)getChinaToChinaEnabled:(id)arg1;
- (void)setHandleAsChina:(id)arg1 specifier:(id)arg2;
- (id)getHandleIsChina:(id)arg1;
- (id)_getExternalChinaHandles;
- (void)removedSpecifier:(id)arg1;
- (void)addNewHandle:(id)arg1;
- (void)_setHandleAsChina:(id)arg1;
- (void)_removeHandleAsChina:(id)arg1;
- (_Bool)_handleIsSetAsChina:(id)arg1;
- (_Bool)_handleIsPersonal:(id)arg1;

@end
