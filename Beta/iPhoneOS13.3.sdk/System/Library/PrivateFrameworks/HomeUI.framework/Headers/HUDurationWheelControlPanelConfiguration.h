/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol HUControlPanelRule;

@interface HUDurationWheelControlPanelConfiguration : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HUControlPanelRule> rule;
@property (nonatomic, readonly) Class cellClass;

- (_Bool)shouldShowSectionTitleForItem:(id)arg1;
- (id)sectionTitleForItem:(id)arg1 forSourceItem:(id)arg2;
- (id)sectionFooterForItem:(id)arg1 forSourceItem:(id)arg2;
- (void)setupControlsForCell:(id)arg1 item:(id)arg2;
- (_Bool)shouldShowSectionFooterForItem:(id)arg1;
- (id)_characteristicTypesFromControlPanelItem:(id)arg1;

@end
