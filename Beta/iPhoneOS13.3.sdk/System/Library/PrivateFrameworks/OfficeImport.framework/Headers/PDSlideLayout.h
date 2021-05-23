/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDSlideChild.h>

@class PDSlideMaster;

__attribute__((visibility("hidden")))
@interface PDSlideLayout : PDSlideChild

{
    int mSlideLayoutType;
    PDSlideMaster *mSlideMaster;
}

@property (weak) PDSlideMaster *slideMaster;

- (id)description;
- (id)background;
- (id)transition;
- (id)defaultTheme;
- (id)parentSlideBase;
- (void)doneWithContent;
- (int)slideLayoutType;
- (void)setSlideLayoutType:(int)arg1;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(_Bool)arg4;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)initWithSlideMaster:(id)arg1;

@end
