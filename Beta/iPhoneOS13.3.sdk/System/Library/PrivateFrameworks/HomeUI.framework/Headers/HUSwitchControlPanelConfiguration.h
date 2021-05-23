/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol HUControlPanelRule;

@interface HUSwitchControlPanelConfiguration : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HUControlPanelRule> rule;
@property (nonatomic, readonly) Class cellClass;

- (_Bool)shouldShowSectionTitleForItem:(id)arg1;
- (void)setupControlsForCell:(id)arg1 item:(id)arg2;
- (id)valueTransformerForControlItem:(id)arg1;

@end
