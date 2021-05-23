/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@class NSArray, NSNumber, NSString, WBSParsecAuxiliaryInfo, WBSParsecImageRepresentation;

@protocol WBSParsecSearchGenericResult

@property (nonatomic, readonly) NSNumber *titleMaximumLines;
@property (copy, nonatomic, readonly) NSArray *descriptionRichTexts;
@property (copy, nonatomic, readonly) NSString *footnote;
@property (copy, nonatomic, readonly) NSString *secondaryTitle;
@property (nonatomic, readonly) WBSParsecImageRepresentation *secondaryTitleGlyph;
@property (nonatomic, readonly) WBSParsecAuxiliaryInfo *auxiliaryInfo;
@property (nonatomic, readonly) WBSParsecImageRepresentation *thumbnail;

- (unsigned short)thumbnailWithSession: /* Error: Ran out of types for this method. */;

@end
