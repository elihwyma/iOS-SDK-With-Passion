/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSParsecLegacySearchResult.h>

@class NSArray, NSNumber, NSString, WBSParsecActionButton, WBSParsecAuxiliaryInfo, WBSParsecImageRepresentation;

@interface WBSParsecSearchGenericResult : WBSParsecLegacySearchResult

{
    WBSParsecActionButton *_actionButton;
    NSNumber *_titleMaximumLines;
    NSArray *_descriptionRichTexts;
    NSString *_footnote;
    NSString *_secondaryTitle;
    WBSParsecImageRepresentation *_secondaryTitleGlyph;
    WBSParsecAuxiliaryInfo *_auxiliaryInfo;
    WBSParsecImageRepresentation *_thumbnail;
}

@property (nonatomic, readonly) NSNumber *titleMaximumLines;
@property (copy, nonatomic, readonly) NSArray *descriptionRichTexts;
@property (copy, nonatomic, readonly) NSString *footnote;
@property (copy, nonatomic, readonly) NSString *secondaryTitle;
@property (nonatomic, readonly) WBSParsecImageRepresentation *secondaryTitleGlyph;
@property (nonatomic, readonly) WBSParsecAuxiliaryInfo *auxiliaryInfo;
@property (nonatomic, readonly) WBSParsecImageRepresentation *thumbnail;

+ (id)_specializedSchema;

- (id)initWithDictionary:(id)arg1;
- (id)actionButton;
- (id)thumbnailWithSession:(id)arg1;

@end
