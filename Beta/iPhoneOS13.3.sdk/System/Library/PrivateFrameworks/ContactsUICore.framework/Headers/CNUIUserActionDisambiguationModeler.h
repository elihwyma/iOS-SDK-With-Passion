/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@protocol CNUIDefaultUserActionFetcher, CNUIUserActionDiscoveringEnvironment, CNUIUserActionRanking, CNUIUserActionTargetDiscovering;

@interface CNUIUserActionDisambiguationModeler : NSObject

{
    _Bool _tracksChanges;
    id <CNUIUserActionTargetDiscovering> _targetDiscoveringHelper;
    id <CNUIUserActionRanking> _rankingHelper;
    id <CNUIDefaultUserActionFetcher> _defaultActionFetcher;
    id <CNUIUserActionDiscoveringEnvironment> _discoveringEnvironment;
}

@property (retain, nonatomic) id <CNUIUserActionTargetDiscovering> targetDiscoveringHelper;
@property (retain, nonatomic) id <CNUIUserActionRanking> rankingHelper;
@property (retain, nonatomic) id <CNUIDefaultUserActionFetcher> defaultActionFetcher;
@property (retain, nonatomic) id <CNUIUserActionDiscoveringEnvironment> discoveringEnvironment;
@property (nonatomic) _Bool tracksChanges;

+ (id)descriptorForRequiredKeys;

- (id)init;
- (void)setContactStore:(id)arg1;
- (id)schedulerProvider;
- (id)initWithDiscoveringEnvironment:(id)arg1;
- (id)thirdPartyTargetsForActionTypes:(id)arg1;
- (id)thirdPartyActionsForContactProperty:(id)arg1;
- (id)modelsWithContact:(id)arg1 actionType:(id)arg2;
- (id)initWithTargetDiscoveringHelper:(id)arg1 rankingHelper:(id)arg2 defaultActionFetcher:(id)arg3 discoveringEnvironment:(id)arg4;
- (id)discoverActionsForContact:(id)arg1 actionType:(id)arg2 trackingChanges:(_Bool)arg3;
- (id)defaultActionFromActions:(id)arg1 trackingChanges:(_Bool)arg2;
- (id)recentActionsFromActions:(id)arg1;
- (id)modelsWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5 sorts:(_Bool)arg6 throttles:(_Bool)arg7;
- (id)targetsChangedObservableForActionType:(id)arg1;
- (id)discoverActionsForContact:(id)arg1 actionType:(id)arg2;
- (id)_discoverActionsForContact:(id)arg1 actionType:(id)arg2;
- (id)defaultActionChangedObservable;
- (id)defaultActionFromActions:(id)arg1;
- (id)sortActionsOnModel:(id)arg1;

@end
