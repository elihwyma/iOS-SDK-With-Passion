/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemBuilder.h>

@class HFMediaPlaybackActionBuilder, HFMutableSetDiff, HMActionSet, HMTrigger, NSArray, NSString;

@interface HFTriggerAnonymousActionSetBuilder : HFItemBuilder

{
    NSArray *_actions;
    HMTrigger *_containingTrigger;
    unsigned long long _actionSetType;
    HFMutableSetDiff *_actionBuilders;
}

@property (retain, nonatomic) HFMutableSetDiff *actionBuilders;
@property (retain, nonatomic) HMTrigger *containingTrigger;
@property (nonatomic) unsigned long long actionSetType;
@property (retain, nonatomic) HMActionSet *actionSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) _Bool requiresDeviceUnlock;
@property (nonatomic, readonly, getter=isAffectedByEndEvents) _Bool affectedByEndEvents;
@property (nonatomic, readonly) HFMediaPlaybackActionBuilder *mediaAction;

+ (Class)homeKitRepresentationClass;

- (void)removeAllActions;
- (void)addAction:(id)arg1;
- (_Bool)hasActions;
- (void)removeAction:(id)arg1;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)commitItem;
- (id)_existingActionBuilder:(id)arg1 inSet:(id)arg2;
- (id)_lazilyUpdateActions;
- (void)updateAction:(id)arg1;
- (id)getOrCreateActionSet;
- (void)addAction:(id)arg1 actionSetType:(unsigned long long)arg2;
- (void)updateActionBuildersDiff:(id)arg1;

@end
