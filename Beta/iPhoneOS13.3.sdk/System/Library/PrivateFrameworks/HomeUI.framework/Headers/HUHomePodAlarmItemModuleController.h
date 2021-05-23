/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@class NSMapTable, NSString;

@protocol HUHomePodAlarmItemModuleControllerDelegate;

@interface HUHomePodAlarmItemModuleController : HUItemTableModuleController

{
    id <HUHomePodAlarmItemModuleControllerDelegate> _delegate;
    NSMapTable *_cellToItemMap;
}

@property (nonatomic, readonly) NSMapTable *cellToItemMap;
@property (weak, nonatomic) id <HUHomePodAlarmItemModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithModule:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (void)setAlarmEnabled:(_Bool)arg1 forCell:(id)arg2;

@end
