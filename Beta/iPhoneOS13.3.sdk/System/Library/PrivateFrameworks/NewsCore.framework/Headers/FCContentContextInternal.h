/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCArticleListRecordSource, FCArticleRecordSource, FCCKContentDatabase, FCChannelMembershipController, FCFeedDatabase, FCForYouConfigRecordSource, FCIssueListRecordSource, FCIssueRecordSource, FCPurchaseLookupRecordSource, FCResourceRecordSource, FCTagListRecordSource, FCTagRecordSource, FCWidgetSectionConfigRecordSource, NSArray, NSString;

@protocol FCAssetKeyManagerType;

@interface FCContentContextInternal : NSObject

{
    FCArticleRecordSource *_articleRecordSource;
    FCTagRecordSource *_tagRecordSource;
    FCTagListRecordSource *_tagListRecordSource;
    FCChannelMembershipController *_channelMembershipController;
    FCResourceRecordSource *_resourceRecordSource;
    FCArticleListRecordSource *_articleListRecordSource;
    FCPurchaseLookupRecordSource *_purchaseLookupRecordSource;
    FCForYouConfigRecordSource *_forYouConfigRecordSource;
    FCWidgetSectionConfigRecordSource *_widgetSectionConfigRecordSource;
    FCIssueRecordSource *_issueRecordSource;
    FCIssueListRecordSource *_issueListRecordSource;
    FCFeedDatabase *_feedDatabase;
    FCCKContentDatabase *_contentDatabase;
    id <FCAssetKeyManagerType> _assetKeyManager;
}

@property (retain, nonatomic) FCArticleRecordSource *articleRecordSource;
@property (retain, nonatomic) FCTagRecordSource *tagRecordSource;
@property (retain, nonatomic) FCTagListRecordSource *tagListRecordSource;
@property (retain, nonatomic) FCChannelMembershipController *channelMembershipController;
@property (retain, nonatomic) FCResourceRecordSource *resourceRecordSource;
@property (retain, nonatomic) FCArticleListRecordSource *articleListRecordSource;
@property (retain, nonatomic) FCPurchaseLookupRecordSource *purchaseLookupRecordSource;
@property (retain, nonatomic) FCForYouConfigRecordSource *forYouConfigRecordSource;
@property (retain, nonatomic) FCWidgetSectionConfigRecordSource *widgetSectionConfigRecordSource;
@property (retain, nonatomic) FCIssueRecordSource *issueRecordSource;
@property (retain, nonatomic) FCIssueListRecordSource *issueListRecordSource;
@property (retain) FCFeedDatabase *feedDatabase;
@property (retain, nonatomic) FCCKContentDatabase *contentDatabase;
@property (retain, nonatomic) id <FCAssetKeyManagerType> assetKeyManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *recordSources;

- (id)init;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;

@end
