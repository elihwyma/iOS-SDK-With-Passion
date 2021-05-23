/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString;

@protocol HUControlPanelControllerDelegate;

@interface HUControlPanelController : NSObject

{
    NSMutableSet *_allItems;
    id <HUControlPanelControllerDelegate> _delegate;
    NSSet *_configurations;
    NSMutableDictionary *_interactionStateByControlID;
}

@property (nonatomic, readonly) NSSet *configurations;
@property (nonatomic, readonly) NSMutableDictionary *interactionStateByControlID;
@property (weak, nonatomic, readonly) id <HUControlPanelControllerDelegate> delegate;
@property (nonatomic, readonly) NSSet *allItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)removeItem:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)addItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (void)controlView:(id)arg1 valueDidChange:(id)arg2;
- (void)controlViewDidBeginUserInteraction:(id)arg1;
- (void)controlViewDidEndUserInteraction:(id)arg1;
- (_Bool)shouldDisplayItem:(id)arg1;
- (_Bool)shouldShowSectionTitleForItem:(id)arg1;
- (id)sectionTitleForItem:(id)arg1 forSourceItem:(id)arg2;
- (id)sectionFooterForItem:(id)arg1 forSourceItem:(id)arg2;
- (_Bool)shouldShowSectionFooterForItem:(id)arg1;
- (id)_createConfigurations;
- (id)_createWriteThrottleForControlItem:(id)arg1 controlPanelItem:(id)arg2;
- (id)_configurationForItem:(id)arg1;
- (void)_updateStateForControlView:(id)arg1 controlPanelItem:(id)arg2;
- (id)_valueTransformerForControlItem:(id)arg1 controlPanelItem:(id)arg2;
- (id)_controlPanelItemForControlView:(id)arg1;
- (void)_updateWriteStateForControlItem:(id)arg1 controlPanelItem:(id)arg2;
- (void)_updateWriteStateForControlView:(id)arg1;
- (id)_controlItemForControlView:(id)arg1;

@end
