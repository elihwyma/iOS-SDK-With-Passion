/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXCMMSuggestionsDataSource, PXCMMSuggestionsDataSourceManager;

@protocol PXCMMWorkflowPresenting;

@interface PXCMMSuggestionsGadgetProvider : PXGadgetProvider <Swift>

{
    PXCMMSuggestionsDataSource *_dataSource;
    _Bool _didGenerateGadgets;
    PXCMMSuggestionsDataSourceManager *_dataSourceManager;
    id <PXCMMWorkflowPresenting> _workflowPresenter;
}

@property (nonatomic, readonly) PXCMMSuggestionsDataSourceManager *dataSourceManager;
@property (nonatomic, readonly) id <PXCMMWorkflowPresenting> workflowPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)initWithDataSourceManager:(id)arg1 workflowPresenter:(id)arg2;
- (id)_newGadgetForSuggestion:(id)arg1;
- (void)_setDataSource:(id)arg1 changes:(id)arg2;

@end
