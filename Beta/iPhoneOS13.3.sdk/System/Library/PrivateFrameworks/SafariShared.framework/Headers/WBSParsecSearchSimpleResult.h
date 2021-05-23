/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSParsecLegacySearchResult.h>

@class NSArray, NSNumber, NSString, WBSParsecImageRepresentation, WBSParsecSearchMapsResultFeedbackSender;

@protocol WBSParsecSearchSession;

@interface WBSParsecSearchSimpleResult : WBSParsecLegacySearchResult

{
    WBSParsecImageRepresentation *_titleGlyph;
    NSArray *_moreIconRepresentations;
    _Bool _descriptionTextCanWrap;
    _Bool _hasSingleLineDescriptionAndTitle;
    WBSParsecSearchMapsResultFeedbackSender *_mapsFeedbackSender;
    id <WBSParsecSearchSession> _parsecSearchSession;
    NSNumber *_titleMaximumNumberOfLines;
    NSString *_descriptionLeadInText;
    NSNumber *_descriptionMaximumNumberOfLines;
    NSString *_footnote;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id <WBSParsecSearchSession> parsecSearchSession;
@property (retain, nonatomic) WBSParsecSearchMapsResultFeedbackSender *mapsFeedbackSender;
@property (nonatomic, readonly) NSNumber *titleMaximumNumberOfLines;
@property (nonatomic, readonly) NSString *descriptionLeadInText;
@property (nonatomic, readonly) NSNumber *descriptionMaximumNumberOfLines;
@property (nonatomic, readonly) _Bool descriptionTextCanWrap;
@property (nonatomic, readonly) NSString *footnote;
@property (nonatomic, readonly) _Bool hasSingleLineDescriptionAndTitle;

- (id)initWithDictionary:(id)arg1;
- (id)titleGlyphWithSession:(id)arg1;

@end
