/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class HMHome, WFActionDrawerResults, WFActionRegistry;

@interface WFActionDrawerResultsController : NSObject

{
    HMHome *_home;
    WFActionRegistry *_actionRegistry;
    WFActionDrawerResults *_cachedSiriSuggestionsResults;
}

@property (nonatomic, readonly) WFActionRegistry *actionRegistry;
@property (nonatomic, readonly) WFActionDrawerResults *cachedSiriSuggestionsResults;
@property (retain, nonatomic) HMHome *home;

+ (id)localizedAppNames;

- (id)actions;
- (id)actionsForCategory:(id)arg1;
- (id)initWithActionRegistry:(id)arg1;
- (void)resultsForSearchQuery:(id)arg1 includingSiriSuggestedResults:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getResultsForAppWithBundleIdentifier:(id)arg1 legacyIdentifier:(id)arg2 shouldFilterForAppsViewController:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getResultsForCategory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)resultsForSuggestionsWithWorkflow:(id)arg1;
- (id)resultsForFavorites;
- (void)getSiriSuggestedResultsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getSiriSuggestedGroupedResultsRefreshingCache:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getDeveloperSuggestedResultsForAppIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)suggestedCategoriesForContentClasses:(id)arg1;
- (void)getHomeSectionsIncludingRelatedActions:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)filteringForResidentCompatibleActions;

@end
