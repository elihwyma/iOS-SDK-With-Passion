/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@class NSString;

@interface HUCameraRecordingOptionsModuleController : HUItemTableModuleController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithModule:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (_Bool)isItemHeader:(id)arg1;

@end
