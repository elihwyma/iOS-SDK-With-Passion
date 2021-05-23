/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSParsecLegacySearchResult.h>

@class NSString, SFSearchResult, WBSParsecSearchMapsResultFeedbackSender, WBSQuerySuggestion;

@protocol WBSParsecSearchSession;

@interface WBSParsecSearchMapsResult : WBSParsecLegacySearchResult

{
    id <WBSParsecSearchSession> _parsecSearchSession;
    WBSParsecSearchMapsResultFeedbackSender *_mapsFeedbackSender;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id <WBSParsecSearchSession> parsecSearchSession;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic, readonly) SFSearchResult *sfSearchResultValue;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (nonatomic, readonly) long long parsecQueryID;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (retain, nonatomic) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender;

- (id)initWithDictionary:(id)arg1;

@end
