/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HFActionSetValueSource, HFItemBuilder, HMActionSet, HMHome, NSMutableSet;

@protocol HFActionSetBuilderProtocol, HFActionSetValueSourceDelegate;

@interface HFServiceActionItemProvider : HFItemProvider

{
    HMHome *_home;
    HMActionSet *_actionSet;
    HFItemBuilder<HFActionSetBuilderProtocol> *_actionSetBuilder;
    CDUnknownBlockType _filter;
    NSMutableSet *_actionItems;
    HFActionSetValueSource *_valueSource;
}

@property (retain, nonatomic) HMActionSet *actionSet;
@property (retain, nonatomic) HFItemBuilder<HFActionSetBuilderProtocol> *actionSetBuilder;
@property (retain, nonatomic) NSMutableSet *actionItems;
@property (retain, nonatomic) HFActionSetValueSource *valueSource;
@property (nonatomic, readonly) HMHome *home;
@property (weak, nonatomic) id <HFActionSetValueSourceDelegate> actionSetValueSourceDelegate;
@property (copy, nonatomic) CDUnknownBlockType filter;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithHome:(id)arg1 actionSet:(id)arg2;
- (id)initWithHome:(id)arg1 actionSetBuilder:(id)arg2;
- (id)_addOrUpdateActionItemWithMediaAction:(id)arg1 mediaActionBuilder:(id)arg2 addedActionItems:(id)arg3 home:(id)arg4;
- (id)_addOrUpdateActionItemWithAction:(id)arg1 actionBuilder:(id)arg2 addedActionItems:(id)arg3 home:(id)arg4;
- (id)_findServiceActionForIdentifier:(id)arg1 addedActionItems:(id)arg2;
- (id)_actionItemForCharacteristic:(id)arg1 addedActionItems:(id)arg2 home:(id)arg3;
- (id)_createActionItemForCharacteristic:(id)arg1 home:(id)arg2;
- (id)_actionItemForMediaProfile:(id)arg1 addedActionItems:(id)arg2 home:(id)arg3;
- (id)_createActionItemForMediaProfile:(id)arg1 home:(id)arg2;

@end
