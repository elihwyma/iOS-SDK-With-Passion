/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class PDFViewControllerPrivate;

__attribute__((visibility("hidden")))
@interface PDFViewController : NSObject

{
    PDFViewControllerPrivate *_private;
}

- (void)dealloc;
- (id)initWithView:(id)arg1;
- (void)highlight:(id)arg1;
- (id)activeAnnotation;
- (void)removeControlForAnnotation:(id)arg1;
- (void)setActiveAnnotation:(id)arg1;
- (void)handleGesture:(id)arg1;
- (void)markupMenuControllerDidHide:(id)arg1;
- (void)markupMenuController:(id)arg1 setMarkupStyle:(unsigned long long)arg2;
- (void)markupMenuControllerEditNote:(id)arg1;
- (id)markupMenuPDFView:(id)arg1;
- (void)markupMenuControllerDeleteAnnotation:(id)arg1;
- (void)markupMenuControllerShowTextSelectionMenu:(id)arg1;
- (void)interactWithAnnotation:(id)arg1;
- (unsigned long long)textSelectionMenu;
- (void)showMarkupMenu:(id)arg1;
- (void)hideActiveMenus;
- (void)showActiveMenus;
- (void)_clearTextSelectionMenuItems;
- (void)_hidePDFMarkupMenuView;
- (id)_annotationPreceding:(id)arg1 wrapAround:(_Bool)arg2;
- (id)_annotationFollowing:(id)arg1 wrapAround:(_Bool)arg2;
- (void)_addControlForAnnotation:(id)arg1;
- (void)_postAnnotationHitNotification:(id)arg1;
- (id)_pageViewForAnnotation:(id)arg1;
- (_Bool)_shouldUpdateMarkupWithStyle:(unsigned long long)arg1 onPage:(id)arg2 forIndexSet:(id)arg3;
- (void)_doButtonHit:(id)arg1;
- (void)_postAnnotationWillHitNotification:(id)arg1;
- (void)_handleButtonHit:(id)arg1;
- (void)showPDFMarkupMenuView;
- (void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3;
- (id)_annotationAtGestureLocation:(struct CGPoint)arg1;
- (void)_annotationHitLongPress:(id)arg1 gestureState:(long long)arg2 location:(struct CGPoint)arg3;
- (void)_annotationHit:(id)arg1 atLocation:(struct CGPoint)arg2;
- (void)_performDoubleTapAtLocation:(struct CGPoint)arg1;
- (void)_hideTextSelectionMenu;
- (void)updateTextSelectionMenuAndShowMenu:(_Bool)arg1;
- (id)_annotationsForSelection:(id)arg1;
- (id)_menuItemsForTextSelectionMenu:(unsigned long long)arg1;
- (void)setMarkupStyle:(unsigned long long)arg1 forSelection:(id)arg2 clearSelection:(_Bool)arg3;
- (void)editNoteForAnnotation:(id)arg1;
- (void)setMarkupStyle:(unsigned long long)arg1 forAnnotation:(id)arg2;
- (id)_getPagePoint:(struct CGPoint *)arg1 forGestureLocation:(struct CGPoint)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toPageView:(id)arg2;
- (void)activateNextAnnotation:(_Bool)arg1;
- (void)removeNoteForAnnotation:(id)arg1;
- (void)deleteAnnotation:(id)arg1;

@end
