/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

#import <WorkflowUI/Swift-Protocol.h>

@class CKCollectionViewTransactionalDataSource, NSIndexPath, NSString, UICollectionView, WFContentClassesToolbar, WFModulesCollectionViewLayout, WFScrollPositionPinningCollectionView, WFWorkflow, WFWorkflowModuleIndentationCache;

@protocol UIScrollViewDelegate, WFComponentNavigationContext, WFContentClassesToolbarDelegate, WFModuleModelProvider, WFModulesCollectionViewDelegate, WFModulesSupplementaryViewDataSource, WFWorkflowViewControllerDelegate;

@interface WFWorkflowViewController : UIViewController <Swift>

{
    _Bool _alwaysBounceCollectionViewVertically;
    _Bool _allowsAcceptsToolbar;
    id <WFWorkflowViewControllerDelegate> _delegate;
    WFWorkflow *_workflow;
    unsigned long long _workflowViewStyle;
    WFScrollPositionPinningCollectionView *_pinningCollectionView;
    id <WFComponentNavigationContext> _context;
    CDUnknownFunctionPointerType _cellConfigurationFunction;
    double _currentModuleWidth;
    NSIndexPath *_actionOutputIndexPath;
    CDUnknownBlockType _actionOutputCompletionHandler;
    CKCollectionViewTransactionalDataSource *_dataSource;
    WFModulesCollectionViewLayout *_collectionViewLayout;
    id <WFContentClassesToolbarDelegate> _acceptsToolbarDelegate;
    id <WFModulesCollectionViewDelegate> _collectionViewDelegate;
    id <WFModulesSupplementaryViewDataSource> _supplementaryViewDataSource;
    id <WFModuleModelProvider> _modelProvider;
    WFWorkflowModuleIndentationCache *_indentationCache;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    double _maximumModuleWidth;
    double _maximumContentWidth;
    WFContentClassesToolbar *_acceptsToolbar;
    struct CGSize _viewSize;
}

@property (weak, nonatomic) WFScrollPositionPinningCollectionView *pinningCollectionView;
@property (nonatomic, readonly) id <WFComponentNavigationContext> context;
@property (nonatomic, readonly) CDUnknownFunctionPointerType cellConfigurationFunction;
@property (nonatomic) double currentModuleWidth;
@property (nonatomic) struct CGSize viewSize;
@property (retain, nonatomic) NSIndexPath *actionOutputIndexPath;
@property (copy, nonatomic) CDUnknownBlockType actionOutputCompletionHandler;
@property (nonatomic, readonly) CKCollectionViewTransactionalDataSource *dataSource;
@property (weak, nonatomic, readonly) WFModulesCollectionViewLayout *collectionViewLayout;
@property (weak, nonatomic) id <WFContentClassesToolbarDelegate> acceptsToolbarDelegate;
@property (weak, nonatomic) id <WFModulesCollectionViewDelegate> collectionViewDelegate;
@property (weak, nonatomic) id <WFModulesSupplementaryViewDataSource> supplementaryViewDataSource;
@property (weak, nonatomic) id <WFModuleModelProvider> modelProvider;
@property (nonatomic, readonly) WFWorkflowModuleIndentationCache *indentationCache;
@property (weak, nonatomic) id <UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) double maximumModuleWidth;
@property (nonatomic) double maximumContentWidth;
@property (nonatomic) _Bool alwaysBounceCollectionViewVertically;
@property (nonatomic) _Bool allowsAcceptsToolbar;
@property (weak, nonatomic, readonly) WFContentClassesToolbar *acceptsToolbar;
@property (weak, nonatomic) id <WFWorkflowViewControllerDelegate> delegate;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (nonatomic, readonly) unsigned long long workflowViewStyle;
@property (weak, nonatomic, readonly) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)componentForModel:(id)arg1 context:(id)arg2;
+ (id)moduleAppearanceForStyle:(unsigned long long)arg1;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)viewSafeAreaInsetsDidChange;
- (unsigned long long)indentationLevelForModule:(id)arg1 withAction:(id)arg2;
- (void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(_Bool)arg2 variableProvider:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(CDUnknownBlockType)arg3 goBackHandler:(CDUnknownBlockType)arg4 scrolledAwayHandler:(CDUnknownBlockType)arg5;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 verticalOffsetForItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 itemAtIndexPath:(id)arg3 isConnectedToItemAtIndexPath:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3;
- (id)initWithWorkflow:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithWorkflow:(id)arg1 style:(unsigned long long)arg2 context:(id)arg3 cellConfigurationFunction:(CDUnknownFunctionPointerType)arg4;
- (void)textSizeChanged;
- (id)indexPathOfCellWithSubview:(id)arg1;
- (id)indexPathOfCellContainingResponder:(id)arg1;
- (void)removeOutputTokens;
- (void)tappedOutputToken:(id)arg1 withModel:(id)arg2;
- (void)cancelActionOutputPicking;
- (id)createModelForAction:(id)arg1;
- (double)moduleWidthForViewSize:(struct CGSize)arg1;
- (void)generateNewModelsAndReload;
- (void)invalidateActionConnections;

@end
