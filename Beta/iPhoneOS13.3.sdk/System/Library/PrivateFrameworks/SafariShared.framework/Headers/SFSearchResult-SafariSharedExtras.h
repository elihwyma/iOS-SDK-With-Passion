/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SearchFoundation/SFSearchResult.h>

#import <SafariShared/Swift-Protocol.h>

@class NSString, WBSQuerySuggestion;

@interface SFSearchResult (SafariSharedExtras) <Swift>

@property (nonatomic, readonly) SFSearchResult *sfSearchResultValue;
@property (nonatomic, readonly) NSString *safari_loggingDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (nonatomic, readonly) long long parsecQueryID;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;

+ (id)safari_sfSearchResultWithUniqueIdentifier;

- (id)safari_firstInlineCardSectionOfClass:(Class)arg1;
- (id)_firstCardSectionOfClass:(Class)arg1 ofCard:(id)arg2 outIndex:(unsigned long long *)arg3;
- (id)safari_firstCardSectionOfClass:(Class)arg1;
- (unsigned long long)safari_indexOfFirstInlineCardSectionOfClass:(Class)arg1;

@end
