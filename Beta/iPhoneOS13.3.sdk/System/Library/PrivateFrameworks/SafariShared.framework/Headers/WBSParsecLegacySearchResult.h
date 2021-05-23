/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSParsecModel.h>

#import <SafariShared/Swift-Protocol.h>

@class MKMapItem, NSString, NSURL, SFSearchResult, WBSParsecActionButton, WBSParsecImageRepresentation, WBSQuerySuggestion;

@interface WBSParsecLegacySearchResult : WBSParsecModel <Swift>

{
    WBSParsecImageRepresentation *_icon;
    WBSParsecImageRepresentation *_completionIcon;
    _Bool _topHit;
    SFSearchResult *_sfSearchResult;
    NSString *_title;
    NSString *_descriptionText;
    NSString *_identifier;
    NSString *_feedbackIdentifier;
    NSString *_urlString;
    NSString *_sectionHeader;
    NSString *_completion;
    NSString *_query;
    unsigned long long _legacyType;
    unsigned long long _minimumRankOfTopHitToSuppressResult;
    NSURL *_appPunchoutURL;
    NSString *_mediaKind;
    NSString *_referrerForLoadingResult;
    WBSParsecActionButton *_actionButton;
    MKMapItem *_mapItem;
    SFSearchResult *_sfSearchResultValue;
    NSString *_sectionBundleIdentifier;
    long long _parsecQueryID;
}

@property (nonatomic, readonly) unsigned long long legacyType;
@property (retain, nonatomic) SFSearchResult *sfSearchResultValue;
@property (copy, nonatomic) NSString *sectionBundleIdentifier;
@property (nonatomic) long long parsecQueryID;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *feedbackIdentifier;
@property (nonatomic, readonly) NSString *urlString;
@property (nonatomic, readonly) NSString *sectionHeader;
@property (nonatomic, readonly) NSString *completion;
@property (copy, nonatomic, readonly) NSString *query;
@property (nonatomic, readonly) unsigned long long minimumRankOfTopHitToSuppressResult;
@property (nonatomic, readonly) NSURL *appPunchoutURL;
@property (copy, nonatomic, readonly) NSString *mediaKind;
@property (copy, nonatomic, readonly) NSString *referrerForLoadingResult;
@property (nonatomic, readonly) WBSParsecActionButton *actionButton;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, readonly) WBSParsecImageRepresentation *icon;
@property (nonatomic, readonly) WBSParsecImageRepresentation *completionIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;

+ (id)schema;
+ (id)resultWithDictionary:(id)arg1;
+ (id)_specializedSchema;
+ (Class)_resultClassForDictionary:(id)arg1;

- (id)initWithDictionary:(id)arg1;
- (_Bool)canBecomeTopHitForQuery:(id)arg1;
- (id)iconWithSession:(id)arg1;
- (id)completionIconWithSession:(id)arg1;
- (id)_glyphRepresentationsFromGlyphDictionaries:(id)arg1;
- (id)_glyphsFromGlyphRepresentations:(id)arg1 withSession:(id)arg2;

@end
