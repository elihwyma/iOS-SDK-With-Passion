/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UITextSelection, UIWebDocumentView;

@protocol UIWebSelectionBlock;

__attribute__((visibility("hidden")))
@interface UIWebSelection : NSObject

{
    UIWebDocumentView *_documentView;
    id <UIWebSelectionBlock> _base;
    id <UIWebSelectionBlock> _extent;
    struct CGSize _desiredSize;
    UITextSelection *_textSelection;
}

@property (retain, nonatomic) id <UIWebSelectionBlock> base;
@property (retain, nonatomic) id <UIWebSelectionBlock> extent;
@property (nonatomic, readonly) UIWebDocumentView *documentView;
@property (nonatomic, readonly) UITextSelection *textSelection;
@property (nonatomic, readonly) _Bool valid;
@property (nonatomic, readonly) struct CGRect boundingRect;
@property (nonatomic) struct CGSize desiredSize;
@property (nonatomic, readonly, getter=isTextOnly) _Bool textOnly;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)webFrame;
- (id)webView;
- (id)webArchive;
- (void)selectionChanged;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)setSelectionWithPoint:(struct CGPoint)arg1 ignoringLargeBlocks:(_Bool)arg2;
- (id)blockAtPoint:(struct CGPoint)arg1;
- (struct CGRect)boundingRectAndInsideFixedPosition:(int *)arg1;
- (id)asDomRange;
- (void)shrinkSelectionFromPoint:(struct CGPoint)arg1 towardsPoint:(struct CGPoint)arg2 withNewRect:(struct CGRect)arg3;
- (void)growSelectionTowardsPoint:(struct CGPoint)arg1;
- (id)elementAtPoint:(struct CGPoint)arg1;
- (void)useBlock;
- (double)distanceBetweenFirstRect:(struct CGRect)arg1 second:(struct CGRect)arg2 edge:(int)arg3;
- (id)duplicate;
- (_Bool)tryToShrinkToBaseAndExtent;
- (_Bool)isEqualToSelection:(id)arg1;
- (void)growFromEdge:(int)arg1;
- (void)shrinkFromEdge:(int)arg1;
- (id)domDocument;
- (id)blockOfSameWidthAtPoint:(struct CGPoint)arg1;
- (id)initWithDocumentView:(id)arg1;
- (struct CGRect)boundingTextSelectionRectAndInsideFixedPosition:(int *)arg1;
- (id)textSelectionRects;
- (id)textRepresentation;
- (void)adjustSelectionFromPoint:(struct CGPoint)arg1 towardsPoint:(struct CGPoint)arg2 withNewRect:(struct CGRect)arg3;
- (void)moveEdge:(int)arg1 outwards:(_Bool)arg2;
- (struct CGRect)boundingTextSelectionRect;
- (void)applySelectionToWebDocumentView;
- (_Bool)blockContainsPoint:(struct CGPoint)arg1;

@end
