/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDSlideBase.h>

@class NSMutableArray, OADColorMap, OADTextListStyle, OADTheme, PDPresentation;

__attribute__((visibility("hidden")))
@interface PDSlideMaster : PDSlideBase

{
    NSMutableArray *mSlideLayouts;
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mTitleTextStyle;
    OADTextListStyle *mBodyTextStyle;
    OADTextListStyle *mOtherTextStyle;
    _Bool mHeaderPlaceholderIsVisible;
    _Bool mFooterPlaceholderIsVisible;
    _Bool mSlideNumberPlaceholderIsVisible;
    _Bool mDateTimePlaceholderIsVisible;
    PDPresentation *mPresentation;
}

@property (weak, nonatomic, readonly) PDPresentation *presentation;
@property (retain, nonatomic) NSMutableArray *slideLayouts;
@property (nonatomic) _Bool headerPlaceholderIsVisible;
@property (nonatomic) _Bool footerPlaceholderIsVisible;
@property (nonatomic) _Bool slideNumberPlaceholderIsVisible;
@property (nonatomic) _Bool dateTimePlaceholderIsVisible;

- (id)description;
- (id)colorMap;
- (id)theme;
- (id)colorScheme;
- (id)titleTextStyle;
- (id)bodyTextStyle;
- (void)setBodyTextStyle:(id)arg1;
- (id)styleMatrix;
- (id)defaultTheme;
- (id)fontScheme;
- (id)parentSlideBase;
- (void)removeUnnecessaryOverrides;
- (id)drawingTheme;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (void)doneWithContent;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (unsigned long long)slideLayoutCount;
- (id)slideLayoutAtIndex:(unsigned long long)arg1;
- (id)addSlideLayout;
- (id)initWithPresentation:(id)arg1;
- (id)slideLayoutOfType:(int)arg1;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(_Bool)arg4;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)defaultTextListStyle;
- (void)addSlideLayout:(id)arg1;
- (id)otherTextStyle;
- (void)setTitleTextStyle:(id)arg1;
- (void)setOtherTextStyle:(id)arg1;

@end
