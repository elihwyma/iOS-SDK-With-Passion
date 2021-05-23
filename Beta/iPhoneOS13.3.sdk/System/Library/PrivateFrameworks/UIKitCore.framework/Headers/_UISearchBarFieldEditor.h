/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIFieldEditor.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UISearchBarFieldEditor : UIFieldEditor

{
    struct {
        unsigned int inLayoutSubviews:1;
    } _flags;
    NSMutableSet *_atomViews;
}

@property (retain) NSMutableSet *_atomViews;

- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;
- (_Bool)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout struct CGRect *)arg2 lineFragmentUsedRect:(inout struct CGRect *)arg3 baselineOffset:(inout double *)arg4 inTextContainer:(id)arg5 forGlyphRange:(struct _NSRange)arg6;
- (void)layoutSubviews;
- (void)_updateTokenViews;
- (void)activateEditor;
- (void)deactivateEditorDiscardingEdits:(_Bool)arg1;
- (double)_uiatom_currentScreenScale;
- (id)selectionRectsForRange:(id)arg1;
- (struct CGRect)_usedRectWithLayoutManager:(id)arg1 textContainer:(id)arg2;

@end
