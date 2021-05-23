/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

#import <ContactsUICore/Swift-Protocol.h>

@class CNContact, CNUIUserActionDisambiguationModeler, CNUIUserActionListModelCache, NSString;

@protocol CNSchedulerProvider;

@interface CNUIUserActionListDataSource : NSObject <Swift>

{
    _Bool _tracksChanges;
    id <CNSchedulerProvider> _schedulerProvider;
    CNContact *_contact;
    CNUIUserActionListModelCache *_models;
    CNUIUserActionDisambiguationModeler *_modeler;
}

@property (copy, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNUIUserActionListModelCache *models;
@property (retain, nonatomic) CNUIUserActionDisambiguationModeler *modeler;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) _Bool tracksChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)allActionTypes;
+ (id)allSupportedActionTypes;
+ (id)allSupportedActionTypesWithCapabilities:(id)arg1;
+ (id)displayNameForDisambiguationForActionType:(id)arg1;
+ (id)displayNameForButtonForActionType:(id)arg1;

- (void)dealloc;
- (void)setContactStore:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1;
- (id)initWithDiscoveringEnvironment:(id)arg1;
- (id)actionTypesForConsumer:(id)arg1;
- (id)consumer:(id)arg1 actionModelsForActionType:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)consumer:(id)arg1 actionModelsForActionType:(id)arg2;
- (id)consumer:(id)arg1 localizedDisplayNameForActionType:(id)arg2;
- (id)consumer:(id)arg1 localizedButtonDisplayNameForActionType:(id)arg2;
- (id)consumer:(id)arg1 localizedDisplayNameForButtonWithDefaultAction:(id)arg2 actionType:(id)arg3;
- (id)consumer:(id)arg1 imageForActionType:(id)arg2;
- (id)thirdPartyTargetsForActionTypes:(id)arg1;
- (id)thirdPartyActionsForContactProperty:(id)arg1;
- (id)thirdPartyActionsForCurrentContactAndPropertyKey:(id)arg1 identifier:(id)arg2;
- (id)initWithContact:(id)arg1 schedulerProvider:(id)arg2;
- (_Bool)shouldUseLabelForButtonWithDefaultAction:(id)arg1;
- (id)modelsForActionType:(id)arg1;
- (id)makeModelObservableForActionType:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1 idsAvailabilityProvider:(id)arg2;

@end
