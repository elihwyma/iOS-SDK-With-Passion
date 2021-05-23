/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/Swift-Protocol.h>

@class NSString, SFSearchResult, WBSQuerySuggestion;

@protocol WBSCompletionListItem <Swift>

@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic, readonly) SFSearchResult *sfSearchResultValue;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (nonatomic, readonly) long long parsecQueryID;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;

@end
