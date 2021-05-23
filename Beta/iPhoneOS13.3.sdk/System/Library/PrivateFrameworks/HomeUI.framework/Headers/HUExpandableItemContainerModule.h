/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class NSArray;

@interface HUExpandableItemContainerModule : HFItemModule

@property (nonatomic, readonly) NSArray *expandableModules;

- (_Bool)isOptionItem:(id)arg1;
- (_Bool)isShowOptionsItem:(id)arg1;
- (_Bool)shouldExpandModuleForShowOptionsItem:(id)arg1;
- (void)setModuleExpanded:(_Bool)arg1 forItem:(id)arg2;
- (id)expandableModuleForItem:(id)arg1;

@end
