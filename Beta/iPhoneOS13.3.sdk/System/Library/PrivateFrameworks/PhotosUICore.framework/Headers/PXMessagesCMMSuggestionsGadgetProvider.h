/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString, PXCMMSuggestionsDataSource, PXCMMSuggestionsDataSourceManager, PXMessagesExtensionViewModel;

@interface PXMessagesCMMSuggestionsGadgetProvider : PXGadgetProvider <Swift>

{
    PXCMMSuggestionsDataSourceManager *_suggestionsDataSourceManager;
    PXCMMSuggestionsDataSource *_dataSource;
    _Bool _didGenerateGadgets;
    PXMessagesExtensionViewModel *_viewModel;
    NSArray *_suggestionGadgets;
}

@property (retain, nonatomic) PXCMMSuggestionsDataSourceManager *suggestionsDataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void)_setDataSource:(id)arg1 changes:(id)arg2;
- (id)initWithViewModel:(id)arg1 suggestionsDataSourceManager:(id)arg2;
- (void)didSelectSuggestionGadget:(id)arg1;
- (id)_createSuggestionGadgetWithSuggestion:(id)arg1;

@end
