/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFTriggerBuilder.h>

@class HFEventBuilder, NSSet;

@protocol HFLocationEventBuilder;

@interface HFLocationTriggerBuilder : HFTriggerBuilder

{
    HFEventBuilder<HFLocationEventBuilder> *_eventBuilder;
    NSSet *_stagedEvents;
}

@property (retain, nonatomic) NSSet *stagedEvents;
@property (retain, nonatomic) HFEventBuilder<HFLocationEventBuilder> *eventBuilder;
@property (nonatomic, readonly) _Bool isCustomLocationTrigger;
@property (nonatomic, readonly) _Bool locationCanBeEdited;

+ (Class)homeKitRepresentationClass;

- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (id)_performValidation;
- (id)_updateEvents;
- (_Bool)supportsConditions;
- (_Bool)supportsEndEvents;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (id)_allActionSets;
- (_Bool)requiresConfirmationToRun;
- (_Bool)secureActionsRequireConfirmationToRun;
- (_Bool)requiresLocationServicesAuthorization;
- (_Bool)requiresFMFDeviceToRun;

@end
