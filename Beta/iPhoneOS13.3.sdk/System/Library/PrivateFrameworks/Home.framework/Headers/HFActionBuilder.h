/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemBuilder.h>

@class HMAction;

@interface HFActionBuilder : HFItemBuilder

@property (nonatomic, readonly) HMAction *action;
@property (nonatomic, readonly) _Bool requiresDeviceUnlock;
@property (nonatomic, readonly, getter=isAffectedByEndEvents) _Bool affectedByEndEvents;

+ (id)actionBuilderForAction:(id)arg1 inHome:(id)arg2;
+ (Class)homeKitRepresentationClass;

- (void)setAction:(id)arg1;
- (id)createNewAction;
- (_Bool)updateWithActionBuilder:(id)arg1;
- (id)copyForCreatingNewAction;
- (id)getOrCreateAction;
- (_Bool)isEquivalentToAction:(id)arg1;
- (_Bool)hasSameTargetAsAction:(id)arg1;
- (id)performValidation;

@end
