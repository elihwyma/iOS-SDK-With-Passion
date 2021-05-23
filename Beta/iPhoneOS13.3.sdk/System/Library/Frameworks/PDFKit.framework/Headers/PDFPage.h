/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSData, NSString, PDFDocument, PDFPagePrivate;

@interface PDFPage : NSObject

{
    PDFPagePrivate *_private;
}

@property (weak, nonatomic, readonly) PDFDocument *document;
@property (nonatomic, readonly) struct CGPDFPage *pageRef;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic) long long rotation;
@property (nonatomic, readonly) NSArray *annotations;
@property (nonatomic) _Bool displaysAnnotations;
@property (nonatomic, readonly) unsigned long long numberOfCharacters;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) NSData *dataRepresentation;

+ (_Bool)isNativeRotationDrawingEnabledForThisThread;
+ (void)setNativeRotationDrawingEnabledForThisThread:(_Bool)arg1;
+ (_Bool)shouldHideAnnotationsForThisThread;
+ (void)setShouldHideAnnotationsForThisThread:(_Bool)arg1;
+ (_Bool)isExcludingAKAnnotationRenderingForThisThread;
+ (void)setExcludingAKAnnotationRenderingForThisThread:(_Bool)arg1;
+ (_Bool)_getBooleanProperty:(id)arg1 forKey:(id)arg2 withDefault:(_Bool)arg3;
+ (id)fontWithPDFFont:(struct CGPDFFont *)arg1 size:(float)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugQuickLookObject;
- (id)initWithImage:(id)arg1;
- (id)view;
- (void)_commonInit;
- (void)setView:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)purgeAll;
- (struct CGPDFLayout *)pageLayout;
- (void)addAnnotation:(id)arg1 withUndo:(_Bool)arg2;
- (void)removeAnnotation:(id)arg1 withUndo:(_Bool)arg2;
- (struct CGRect)boundsForBox:(long long)arg1;
- (void)addAnnotation:(id)arg1;
- (id)selectionFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 type:(int)arg3;
- (id)selectionForRange:(struct _NSRange)arg1;
- (void)changedAnnotation:(id)arg1;
- (void)postAnnotationsChangedNotification;
- (id)akPageAdaptor;
- (void)removeAnnotation:(id)arg1;
- (struct CGAffineTransform)getDrawingTransformForBox:(long long)arg1;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (void)transformContext:(struct CGContext *)arg1 forBox:(long long)arg2;
- (void)addAnnotationFormField:(id)arg1;
- (id)selectionForAll;
- (id)selectionForCharacterAtPoint:(struct CGPoint)arg1;
- (id)annotationAtPoint:(struct CGPoint)arg1;
- (id)annotationWithUUID:(id)arg1;
- (id)annotationsForFieldName:(id)arg1;
- (void)insertAnnotation:(id)arg1 atIndex:(long long)arg2;
- (void)drawWithBox:(long long)arg1 toContext:(struct CGContext *)arg2;
- (struct CGAffineTransform)transformForBox:(long long)arg1;
- (struct CGColor *)pageBackgroundColorHint;
- (_Bool)isBookmarked;
- (id)imageOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withOptions:(id)arg3;
- (id)scannedAnnotationAtPoint:(struct CGPoint)arg1;
- (void)setupAKPageAdaptorIfNecessary;
- (id)allAnnotations;
- (struct __CFDictionary *)gcCreateBoxDictionary;
- (void)drawBurnedInAnnotationsWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (id)annotationChanges;
- (void)clearAnnotationChanges;
- (_Bool)setPageRef:(struct CGPDFPage *)arg1;
- (id)initWithPageRef:(struct CGPDFPage *)arg1;
- (void)setBookmarked:(_Bool)arg1 updateBookmarks:(_Bool)arg2;
- (_Bool)akDidSetupRealPageModelController;
- (void)setAKDidSetupRealPageModelController:(_Bool)arg1;
- (struct CGPDFPage *)createPageRefFromImage;
- (id)changedAnnotations;
- (void)resetChangedAnnotations;
- (id)selectionFromPointToBottom:(struct CGPoint)arg1 type:(int)arg2;
- (id)selectionFromTopToPoint:(struct CGPoint)arg1 type:(int)arg2;
- (void)fetchPageLayoutOnQueue:(id)arg1;
- (id)scannedAnnotations;
- (_Bool)colorWidgetBackgrounds;
- (_Bool)didChangeBounds;
- (void)setBounds:(struct CGRect)arg1 forBox:(long long)arg2;
- (void)lazilyLoadAnnotations;
- (void)getAnnotations;
- (void)_addWidgetAnnotationToLookupDictionary:(id)arg1;
- (void)removeAnnotation:(id)arg1 atIndex:(long long)arg2;
- (void)_removeWidgetAnnotationFromLookupDictionary:(id)arg1;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 isThumbnail:(_Bool)arg3;
- (void)_drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2 withRotation:(_Bool)arg3 isThumbnail:(_Bool)arg4 withAnnotations:(_Bool)arg5 withBookmark:(_Bool)arg6 withDelegate:(id)arg7;
- (void)_drawPageImageInContext:(struct CGContext *)arg1 withRotation:(_Bool)arg2 withDisplayBox:(long long)arg3;
- (void)_drawPageCGImageInContext:(struct CGContext *)arg1 withDisplayBox:(long long)arg2;
- (void)_drawAnnotationsWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (void)_drawBookmarkInContext:(struct CGContext *)arg1;
- (id)thumbnailOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withBookmark:(_Bool)arg3 withAnnotations:(_Bool)arg4;
- (struct CGImage *)_newCGImageWithBox:(long long)arg1 bitmapSize:(struct CGSize)arg2 scale:(double)arg3 offset:(struct CGPoint)arg4 backgroundColor:(id)arg5 withRotation:(_Bool)arg6 withAntialiasing:(_Bool)arg7 withAnnotations:(_Bool)arg8 withBookmark:(_Bool)arg9 withDelegate:(id)arg10;
- (id)selectionForRangeCommon:(struct _NSRange)arg1 isCodeRange:(_Bool)arg2;
- (id)_createAttributedString;
- (id)rvItemAtPoint:(struct CGPoint)arg1;
- (_Bool)_writeToConsumer:(struct CGDataConsumer *)arg1;
- (void)_addBox:(int)arg1 toDictionary:(struct __CFDictionary *)arg2 offset:(struct CGPoint)arg3;
- (_Bool)hasCropBox;
- (_Bool)hasBleedBox;
- (_Bool)hasTrimBox;
- (_Bool)hasArtBox;
- (void)_scanData:(id)arg1;
- (void)_buildPageLayout;
- (struct CGPDFLayout *)pageLayoutIfAvail;
- (_Bool)columnAtPoint:(struct CGPoint)arg1;
- (_Bool)disableUndoManagerForAK;
- (void)enableUndoManagerForAK:(_Bool)arg1;
- (void)_postAnnotationsChangedNotificationCoalesced;
- (void)addScannedAnnotation:(id)arg1;
- (id)pdfScannerResultAtPoint:(struct CGPoint)arg1 onPageLayer:(id)arg2;
- (id)pdfScannerResultAtPoint:(struct CGPoint)arg1;
- (id)rvItemWithPDFScannerResult:(id)arg1;
- (id)_rvItemAtPoint:(struct CGPoint)arg1;
- (id)initWithImageSource:(struct CGImageSource *)arg1;
- (id)annotationAtRect:(struct CGRect)arg1;
- (_Bool)hasPopups;
- (id)thumbnailOfSize:(struct CGSize)arg1 forBox:(long long)arg2;
- (id)thumbnailOfSize:(struct CGSize)arg1 forBox:(long long)arg2 withBookmark:(_Bool)arg3;
- (id)selectionForCodeRange:(struct _NSRange)arg1;
- (struct CGRect)columnFrameAtPoint:(struct CGPoint)arg1;
- (struct CGRect)characterBoundsAtIndex:(long long)arg1;
- (long long)characterIndexAtPoint:(struct CGPoint)arg1;
- (id)selectionForRect:(struct CGRect)arg1;
- (id)selectionForWordAtPoint:(struct CGPoint)arg1;
- (id)selectionForLineAtPoint:(struct CGPoint)arg1;
- (id)selectionFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)setBookmarked:(_Bool)arg1;
- (void)setColorWidgetBackgrounds:(_Bool)arg1;
- (_Bool)columnAtPointIfAvailable:(struct CGPoint)arg1;
- (void)setDisplaysMarkupAnnotations:(_Bool)arg1;
- (void)printActivePageAnnotations;
- (id)ddScannerResults;
- (id)rvItemAtPoint:(struct CGPoint)arg1 onPageLayer:(id)arg2;
- (unsigned long long)_documentIndex;

@end
