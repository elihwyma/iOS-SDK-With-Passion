/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDSlideChild.h>

@class PDNotesMaster;

__attribute__((visibility("hidden")))
@interface PDNotesSlide : PDSlideChild

{
    PDNotesMaster *mNotesMaster;
}

- (id)init;
- (id)description;
- (id)parentSlideBase;
- (void)doneWithContent;
- (void)setNotesMaster:(id)arg1;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(_Bool)arg4;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)notesMaster;
- (id)masterPlaceholderOfType:(int)arg1;

@end
