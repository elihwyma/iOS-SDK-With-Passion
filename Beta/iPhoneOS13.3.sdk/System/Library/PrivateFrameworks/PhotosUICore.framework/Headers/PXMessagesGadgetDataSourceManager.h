/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetDataSourceManager.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString, PXCMMSuggestionsDataSourceManager, PXCPLStatus, PXCloudWelcomeGadgetProvider, PXGadgetNavigationHelper, PXMessagesCMMSuggestionsCollectionGadgetProvider, PXMessagesExtensionViewModel, PXMessagesRecentPhotosGadgetProvider, UIViewController;

@protocol PXGadgetDelegate, PXGadgetTransition, PXPhotoLibraryPresenting;

@interface PXMessagesGadgetDataSourceManager : PXGadgetDataSourceManager <Swift>

{
    PXMessagesExtensionViewModel *_viewModel;
    PXCloudWelcomeGadgetProvider *_cloudWelcomeGadgeProvider;
    PXMessagesCMMSuggestionsCollectionGadgetProvider *_suggestionsCollectionGadgetProvider;
    NSArray *_cachedGadgetProviders;
    PXCPLStatus *_cplStatusProvider;
    _Bool _cmmIsAvailable;
    PXCMMSuggestionsDataSourceManager *_suggestionsDataSourceManager;
    UIViewController<PXPhotoLibraryPresenting> *_recentPhotosViewController;
    double _recentPhotosHeight;
    NSString *_placeholderTitle;
    PXMessagesRecentPhotosGadgetProvider *_recentPhotosProvider;
}

@property (retain, nonatomic) PXMessagesRecentPhotosGadgetProvider *recentPhotosProvider;
@property (retain, nonatomic) PXCMMSuggestionsDataSourceManager *suggestionsDataSourceManager;
@property (retain, nonatomic) UIViewController<PXPhotoLibraryPresenting> *recentPhotosViewController;
@property (nonatomic) double recentPhotosHeight;
@property (copy, nonatomic) NSString *placeholderTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <PXGadgetTransition> gadgetTransition;
@property (nonatomic, readonly) PXGadgetNavigationHelper *rootNavigationHelper;
@property (weak, nonatomic) id <PXGadgetDelegate> nextGadgetResponder;

- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)presentationRequestForWelcomeCloudViewController:(id)arg1;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)arg1;
- (id)initWithViewModel:(id)arg1 dataSourceManager:(id)arg2;
- (void)_updateGadgetProviders;
- (void)removeCachedProviders;
- (id)gadgetProviders;

@end
