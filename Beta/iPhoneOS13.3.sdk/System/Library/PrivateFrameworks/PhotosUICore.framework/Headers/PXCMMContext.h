/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString, PXAssetsDataSourceManager, PXCMMActionManager, PXCMMPeopleSuggestionsDataSourceManager, PXCMMPeopleSuggestionsMediaProvider, PXCMMSendBackSuggestionSource, PXRecipient, PXUIMediaProvider;

@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXCMMContext : NSObject

{
    _Bool _hideActionMenu;
    _Bool _ppt_presentComposeRecipientView;
    _Bool _ppt_scrollComposeRecipientsView;
    PXAssetsDataSourceManager *_dataSourceManager;
    PXUIMediaProvider *_mediaProvider;
    unsigned long long _activityType;
    unsigned long long _sourceType;
    PXCMMPeopleSuggestionsDataSourceManager *_peopleSuggestionsPreviewDataSourceManager;
    PXCMMPeopleSuggestionsDataSourceManager *_peopleSuggestionsDataSourceManager;
    PXCMMPeopleSuggestionsMediaProvider *_peopleSuggestionsMediaProvider;
    NSString *_originalTitle;
    NSString *_title;
    NSString *_subtitle;
    NSDictionary *_assetPreparationOptions;
    PXCMMSendBackSuggestionSource *_sendBackSuggestionSource;
    id <PXDisplayAsset> _posterAsset;
    id <PXUIImageProvider> _posterMediaProvider;
    NSDate *_startDate;
    NSDate *_endDate;
    long long _photosCount;
    long long _videosCount;
    long long _count;
    NSArray *_recipients;
    PXRecipient *_originatorRecipient;
    unsigned long long _numberOfReceivedAssets;
    double _ppt_delay;
}

@property (nonatomic, readonly) PXCMMActionManager *actionManager;
@property (nonatomic, readonly) PXAssetsDataSourceManager *dataSourceManager;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsPreviewDataSourceManager;
@property (retain, nonatomic) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (retain, nonatomic) PXCMMPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider;
@property (copy, nonatomic) NSString *originalTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) _Bool hideActionMenu;
@property (copy, nonatomic) NSDictionary *assetPreparationOptions;
@property (retain, nonatomic) PXCMMSendBackSuggestionSource *sendBackSuggestionSource;
@property (retain, nonatomic) id <PXDisplayAsset> posterAsset;
@property (retain, nonatomic) id <PXUIImageProvider> posterMediaProvider;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) long long photosCount;
@property (nonatomic) long long videosCount;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) PXRecipient *originatorRecipient;
@property (nonatomic) unsigned long long numberOfReceivedAssets;
@property (nonatomic) double ppt_delay;
@property (nonatomic) _Bool ppt_presentComposeRecipientView;
@property (nonatomic) _Bool ppt_scrollComposeRecipientsView;

+ (id)new;

- (id)init;
- (id)initWithAssetsDataSourceManager:(id)arg1 mediaProvider:(id)arg2 activityType:(unsigned long long)arg3;
- (id)createSession;

@end
