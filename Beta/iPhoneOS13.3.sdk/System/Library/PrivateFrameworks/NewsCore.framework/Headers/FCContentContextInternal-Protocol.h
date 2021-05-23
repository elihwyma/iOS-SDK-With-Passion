/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class FCArticleListRecordSource, FCArticleRecordSource, FCCKContentDatabase, FCChannelMembershipController, FCFeedDatabase, FCForYouConfigRecordSource, FCIssueListRecordSource, FCIssueRecordSource, FCPurchaseLookupRecordSource, FCResourceRecordSource, FCTagListRecordSource, FCTagRecordSource, FCWidgetSectionConfigRecordSource, NSArray;

@protocol FCAssetKeyManagerType;

@protocol FCContentContextInternal <Swift>

@property (nonatomic, readonly) FCArticleRecordSource *articleRecordSource;
@property (nonatomic, readonly) FCTagRecordSource *tagRecordSource;
@property (nonatomic, readonly) FCTagListRecordSource *tagListRecordSource;
@property (nonatomic, readonly) FCChannelMembershipController *channelMembershipController;
@property (nonatomic, readonly) FCResourceRecordSource *resourceRecordSource;
@property (nonatomic, readonly) FCArticleListRecordSource *articleListRecordSource;
@property (nonatomic, readonly) FCPurchaseLookupRecordSource *purchaseLookupRecordSource;
@property (nonatomic, readonly) FCForYouConfigRecordSource *forYouConfigRecordSource;
@property (nonatomic, readonly) FCWidgetSectionConfigRecordSource *widgetSectionConfigRecordSource;
@property (nonatomic, readonly) FCIssueRecordSource *issueRecordSource;
@property (nonatomic, readonly) FCIssueListRecordSource *issueListRecordSource;
@property (nonatomic, readonly) NSArray *recordSources;
@property (readonly) FCFeedDatabase *feedDatabase;
@property (nonatomic, readonly) FCCKContentDatabase *contentDatabase;
@property (nonatomic, readonly) id <FCAssetKeyManagerType> assetKeyManager;

@end
