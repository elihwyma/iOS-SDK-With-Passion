/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFRunnableLibraryResultsController.h>

@class NSString, UISearchBar, WFDatabaseResult, WFLibraryLayoutMetrics;

@protocol WFLibraryWorkflowCellDelegate;

@interface WFLibraryResultsController : WFRunnableLibraryResultsController

{
    _Bool _searching;
    NSString *_searchText;
    UISearchBar *_legacySearchBar;
    WFDatabaseResult *_allWorkflows;
}

@property (nonatomic, readonly) WFDatabaseResult *allWorkflows;
@property (weak, nonatomic) id <WFLibraryWorkflowCellDelegate> cellDelegate;
@property (copy, nonatomic) WFLibraryLayoutMetrics *cellLayoutMetrics;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic, getter=isSearching) _Bool searching;
@property (retain, nonatomic) UISearchBar *legacySearchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)libraryWorkflowCellClass;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)searchPredicate;
- (id)initWithWorkflows:(id)arg1 collectionView:(id)arg2 runCoordinator:(id)arg3;
- (void)visibleWorkflowsQueryChanged;

@end
