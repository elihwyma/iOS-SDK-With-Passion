/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDSlideBase.h>

@class OADColorMap, OADTextListStyle, OADTheme;

__attribute__((visibility("hidden")))
@interface PDNotesMaster : PDSlideBase

{
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mNotesTextStyle;
}

- (id)init;
- (id)description;
- (id)colorMap;
- (id)theme;
- (id)colorScheme;
- (id)styleMatrix;
- (id)fontScheme;
- (id)parentSlideBase;
- (void)removeUnnecessaryOverrides;
- (id)drawingTheme;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (void)doneWithContent;
- (id)notesTextStyle;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(_Bool)arg4;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)defaultTextListStyle;

@end
