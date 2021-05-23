/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDSlideChild.h>

@class NSMutableArray, OITSUNoCopyDictionary, PDNotesSlide, PDSlideLayout;

__attribute__((visibility("hidden")))
@interface PDSlide : PDSlideChild

{
    PDSlideLayout *mSlideLayout;
    NSMutableArray *mComments;
    PDNotesSlide *mNotesSlide;
    OITSUNoCopyDictionary *mCommentParents;
}

@property (retain) OITSUNoCopyDictionary *commentParents;

- (id)description;
- (id)background;
- (id)transition;
- (void)addComment:(id)arg1;
- (unsigned long long)commentCount;
- (id)defaultTheme;
- (id)slideLayout;
- (id)parentSlideBase;
- (void)removeUnnecessaryOverrides;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (void)doneWithContent;
- (void)setSlideLayout:(id)arg1;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(_Bool)arg4;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)notesSlide;
- (void)setNotesSlide:(id)arg1;
- (id)commentAtIndex:(unsigned long long)arg1;
- (id)commentForAuthorId:(unsigned long long)arg1 authorIdx:(unsigned long long)arg2;
- (void)setInheritedTextStyle:(id)arg1 placeholderType:(int)arg2 defaultTextListStyle:(id)arg3;
- (id)inheritedTextStyleForPlaceholderType:(int)arg1;

@end
