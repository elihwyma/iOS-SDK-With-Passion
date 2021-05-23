/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSParsecModel.h>

#import <SafariShared/Swift-Protocol.h>

@class NSString, NSURL, SFSearchResult, WBSParsecImageRepresentation, WBSQuerySuggestion;

@interface WBSParsecSearchSportsAttributionExtraCompletionItem : WBSParsecModel <Swift>

{
    SFSearchResult *sfSearchResultValue;
    long long _parsecQueryID;
    NSString *_label;
    NSURL *_url;
    WBSParsecImageRepresentation *_imageRepresentation;
}

@property (copy, nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) WBSParsecImageRepresentation *imageRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic, readonly) SFSearchResult *sfSearchResultValue;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (nonatomic, readonly) long long parsecQueryID;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;

+ (id)schema;

- (id)initWithDictionary:(id)arg1;

@end
