/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDCollection, EDColorsCollection, EDContentFormatsCollection, EDFontsCollection, EDLinksCollection, EDStylesCollection, EDTableStylesCollection;

__attribute__((visibility("hidden")))
@interface EDResources : NSObject

{
    EDCollection *mStrings;
    EDContentFormatsCollection *mContentFormats;
    EDFontsCollection *mFonts;
    EDCollection *mAlignmentInfos;
    EDStylesCollection *mStyles;
    EDColorsCollection *mColors;
    EDColorsCollection *mThemes;
    EDCollection *mNames;
    EDLinksCollection *mLinks;
    EDCollection *mBorders;
    EDCollection *mBorder;
    EDCollection *mFills;
    EDCollection *mDifferentialStyles;
    EDTableStylesCollection *mTableStyles;
}

- (id)description;
- (id)names;
- (void)setColors:(id)arg1;
- (id)borders;
- (id)strings;
- (id)colors;
- (id)styles;
- (id)fonts;
- (id)border;
- (id)links;
- (id)themes;
- (id)fills;
- (id)tableStyles;
- (id)contentFormats;
- (id)initWithStringOptimization:(_Bool)arg1;
- (id)alignmentInfos;
- (id)differentialStyles;
- (void)setThemes:(id)arg1;

@end
