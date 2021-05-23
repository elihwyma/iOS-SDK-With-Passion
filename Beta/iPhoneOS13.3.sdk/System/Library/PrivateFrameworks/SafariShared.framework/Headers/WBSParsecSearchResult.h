/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@class MKMapItem, NSArray, NSNumber, NSString, NSURL, SFSearchResult, WBSParsecActionButton, WBSParsecAuxiliaryInfo, WBSParsecImageRepresentation, WBSParsecLegacySearchResult, WBSParsecSearchMapsResultFeedbackSender, WBSParsecSearchSportsAttributionExtraCompletionItem, WBSQuerySuggestion;

@protocol WBSParsecSearchSession;

@interface WBSParsecSearchResult : NSObject <Swift>

{
    WBSParsecLegacySearchResult *_legacySearchResult;
}

@property (nonatomic, readonly) WBSParsecLegacySearchResult *legacySearchResult;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long subtype;
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
@property (copy, nonatomic, readonly) NSString *sectionBundleIdentifier;
@property (nonatomic, readonly) WBSParsecImageRepresentation *icon;
@property (nonatomic, readonly) WBSParsecImageRepresentation *completionIcon;
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
@property (nonatomic, readonly) NSNumber *titleMaximumLines;
@property (copy, nonatomic, readonly) NSArray *descriptionRichTexts;
@property (copy, nonatomic, readonly) NSString *footnote;
@property (copy, nonatomic, readonly) NSString *secondaryTitle;
@property (nonatomic, readonly) WBSParsecImageRepresentation *secondaryTitleGlyph;
@property (nonatomic, readonly) WBSParsecAuxiliaryInfo *auxiliaryInfo;
@property (nonatomic, readonly) WBSParsecImageRepresentation *thumbnail;
@property (retain, nonatomic) id <WBSParsecSearchSession> parsecSearchSession;
@property (retain, nonatomic) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender;
@property (nonatomic, readonly) NSNumber *titleMaximumNumberOfLines;
@property (nonatomic, readonly) NSString *descriptionLeadInText;
@property (nonatomic, readonly) NSNumber *descriptionMaximumNumberOfLines;
@property (nonatomic, readonly) _Bool descriptionTextCanWrap;
@property (nonatomic, readonly) _Bool hasSingleLineDescriptionAndTitle;
@property (copy, nonatomic, readonly) NSArray *images;
@property (copy, nonatomic, readonly) NSArray *individualScores;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) WBSParsecSearchSportsAttributionExtraCompletionItem *extraCompletionItem;

+ (long long)typeForSFSearchResult:(id)arg1 isOneLine:(_Bool)arg2;
+ (long long)typeForSFSearchResult:(id)arg1;

- (id)init;
- (id)_result;
- (_Bool)canBecomeTopHitForQuery:(id)arg1;
- (id)iconWithSession:(id)arg1;
- (id)completionIconWithSession:(id)arg1;
- (id)_genericResult;
- (id)thumbnailWithSession:(id)arg1;
- (id)_resultPresentedInCard;
- (id)_mapsResult;
- (id)_simpleResult;
- (id)titleGlyphWithSession:(id)arg1;
- (id)_sportsResult;
- (id)initWithLegacySearchResult:(id)arg1;

@end
