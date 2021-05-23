/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, NSString, PXAssetsDataSourceManager, PXCMMActionManager, PXCMMPeopleSuggestionsDataSourceManager, PXCMMPeopleSuggestionsMediaProvider, PXCMMSendBackSuggestionSource, PXCMMViewModel, PXUIMediaProvider;

@protocol PXAssetImportStatusManager;

@interface PXCMMSession : NSObject

{
    _Bool _hideActionMenu;
    _Bool _ppt_presentComposeRecipientView;
    _Bool _ppt_scrollComposeRecipientsView;
    PXAssetsDataSourceManager *_dataSourceManager;
    PXUIMediaProvider *_mediaProvider;
    PXCMMPeopleSuggestionsDataSourceManager *_peopleSuggestionsPreviewDataSourceManager;
    PXCMMPeopleSuggestionsDataSourceManager *_peopleSuggestionsDataSourceManager;
    PXCMMPeopleSuggestionsMediaProvider *_peopleSuggestionsMediaProvider;
    PXCMMSendBackSuggestionSource *_sendBackSuggestionSource;
    PXCMMActionManager *_actionManager;
    unsigned long long _activityType;
    unsigned long long _sourceType;
    NSDictionary *_preparationOptionsPerAsset;
    PXCMMViewModel *_viewModel;
    double _ppt_delay;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *diagnosticDictionary;
@property (nonatomic, readonly) PXAssetsDataSourceManager *dataSourceManager;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (nonatomic, readonly) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsPreviewDataSourceManager;
@property (nonatomic, readonly) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (nonatomic, readonly) PXCMMPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider;
@property (nonatomic, readonly) PXCMMSendBackSuggestionSource *sendBackSuggestionSource;
@property (nonatomic, readonly) PXCMMActionManager *actionManager;
@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (nonatomic, readonly) _Bool hideActionMenu;
@property (nonatomic, readonly) NSDictionary *preparationOptionsPerAsset;
@property (nonatomic, readonly) NSSet *notificationSuppressionContexts;
@property (nonatomic, readonly) PXCMMViewModel *viewModel;
@property (nonatomic, readonly) id <PXAssetImportStatusManager> importStatusManager;
@property (nonatomic) double ppt_delay;
@property (nonatomic, readonly) _Bool ppt_presentComposeRecipientView;
@property (nonatomic, readonly) _Bool ppt_scrollComposeRecipientsView;

+ (id)new;

- (id)init;
- (id)initWithContext:(id)arg1;
- (id)momentShareStatusPresentationWithPresentationStyle:(long long)arg1;

@end
