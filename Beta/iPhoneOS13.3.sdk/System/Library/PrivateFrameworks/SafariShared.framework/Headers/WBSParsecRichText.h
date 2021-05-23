/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSParsecModel.h>

@class NSArray, NSNumber, NSString, WBSParsecImageRepresentation;

@interface WBSParsecRichText : WBSParsecModel

{
    WBSParsecImageRepresentation *_contentAdvisoryImage;
    NSString *_text;
    NSNumber *_maximumLines;
    NSArray *_formattedTextList;
    NSArray *_moreGlyphRepresentations;
    NSString *_contentAdvisoryString;
}

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSNumber *maximumLines;
@property (nonatomic, readonly) NSArray *formattedTextList;
@property (nonatomic, readonly) NSArray *moreGlyphRepresentations;
@property (nonatomic, readonly) NSString *contentAdvisoryString;

+ (id)schema;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)contentAdvisoryImageWithSession:(id)arg1;
- (id)moreGlyphsWithSession:(id)arg1;

@end
