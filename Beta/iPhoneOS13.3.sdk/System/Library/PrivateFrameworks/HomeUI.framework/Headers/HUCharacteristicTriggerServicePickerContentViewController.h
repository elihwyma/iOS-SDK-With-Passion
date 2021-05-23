/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUSelectableServiceGridViewController.h>

@class HFCharacteristicTriggerBuilder, NSString, UINavigationItem;

@protocol HUTriggerEditorDelegate;

@interface HUCharacteristicTriggerServicePickerContentViewController : HUSelectableServiceGridViewController

{
    HFCharacteristicTriggerBuilder *_characteristicTriggerBuilder;
    unsigned long long _mode;
    unsigned long long _source;
    UINavigationItem *_effectiveNavigationItem;
}

@property (retain, nonatomic) HFCharacteristicTriggerBuilder *characteristicTriggerBuilder;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) unsigned long long source;
@property (nonatomic, readonly) UINavigationItem *effectiveNavigationItem;
@property (weak, nonatomic) id <HUTriggerEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_cancel:(id)arg1;
- (void)_next:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)layoutOptionsForSection:(long long)arg1;
- (_Bool)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2;
- (id)initWithServiceGridItemManager:(id)arg1;
- (_Bool)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithCharacteristicTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 source:(unsigned long long)arg3 effectiveNavigationItem:(id)arg4 delegate:(id)arg5;
- (void)_validateNextButton;
- (void)didChangeSelection;
- (void)_addCharacteristicEventsForAlarmItem:(id)arg1;
- (void)_addCharacteristicEventsForOtherDeviceItem:(id)arg1;

@end
