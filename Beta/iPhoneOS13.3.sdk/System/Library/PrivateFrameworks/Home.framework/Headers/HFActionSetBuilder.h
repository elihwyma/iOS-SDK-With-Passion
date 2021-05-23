/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemBuilder.h>

@class HFMediaPlaybackActionBuilder, HFMutableSetDiff, HMActionSet, NSArray, NSString;

@protocol HFIconDescriptor;

@interface HFActionSetBuilder : HFItemBuilder

{
    _Bool _isFavorite;
    NSArray *_actions;
    NSString *_name;
    id <HFIconDescriptor> _iconDescriptor;
    HFMutableSetDiff *_actionBuilders;
}

@property (retain, nonatomic) HFMutableSetDiff *actionBuilders;
@property (nonatomic, readonly) HMActionSet *actionSet;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool isFavorite;
@property (retain, nonatomic) id <HFIconDescriptor> iconDescriptor;
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
- (id)initWithHome:(id)arg1;
- (void)setActionSet:(id)arg1;
- (void)removeAction:(id)arg1;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)_performValidation;
- (id)commitItem;
- (id)_lazilyUpdateActions;
- (void)updateAction:(id)arg1;
- (id)deleteActionSet;
- (id)_lazilyUpdateFavorite;
- (id)_deleteActionSet:(id)arg1 fromHome:(id)arg2;
- (id)_lazilyUpdateIcon;

@end
