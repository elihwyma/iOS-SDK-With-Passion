/*
 Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL, PDFDocumentPrivate, PDFOutline, PDFSelection;

@protocol PDFDocumentDelegate;

@interface PDFDocument : NSObject

{
    PDFDocumentPrivate *_private;
}

@property (nonatomic, readonly) NSURL *documentURL;
@property (nonatomic, readonly) struct CGPDFDocument *documentRef;
@property (copy, nonatomic) NSDictionary *documentAttributes;
@property (nonatomic, readonly) long long majorVersion;
@property (nonatomic, readonly) long long minorVersion;
@property (nonatomic, readonly) _Bool isEncrypted;
@property (nonatomic, readonly) _Bool isLocked;
@property (nonatomic, readonly) _Bool allowsPrinting;
@property (nonatomic, readonly) _Bool allowsCopying;
@property (nonatomic, readonly) _Bool allowsDocumentChanges;
@property (nonatomic, readonly) _Bool allowsDocumentAssembly;
@property (nonatomic, readonly) _Bool allowsContentAccessibility;
@property (nonatomic, readonly) _Bool allowsCommenting;
@property (nonatomic, readonly) _Bool allowsFormFieldEntry;
@property (nonatomic, readonly) long long permissionsStatus;
@property (nonatomic, readonly) NSString *string;
@property (weak, nonatomic) id <PDFDocumentDelegate> delegate;
@property (retain, nonatomic) PDFOutline *outlineRoot;
@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic, readonly) Class pageClass;
@property (nonatomic, readonly) _Bool isFinding;
@property (nonatomic, readonly) PDFSelection *selectionForEntireDocument;

+ (_Bool)pdfDocumentAppendModeActiveForThisThread;
+ (void)setPDFDocumentAppendModeActiveForThisThread:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)dataRepresentation;
- (void)_commonInit;
- (void)undo:(id)arg1;
- (void)redo:(id)arg1;
- (void)setDocument:(struct CGPDFDocument *)arg1;
- (id)pageAtIndex:(unsigned long long)arg1;
- (void)cancelFindString;
- (id)findString:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)akDocumentAdaptor;
- (unsigned long long)indexForPage:(id)arg1;
- (id)renderingProperties;
- (void)setRenderingProperties:(id)arg1;
- (void)setDocumentHasBurnInAnnotations:(_Bool)arg1;
- (id)formData;
- (void)setFormData:(id)arg1;
- (id)selectionFromPage:(id)arg1 atCharacterIndex:(unsigned long long)arg2 toPage:(id)arg3 atCharacterIndex:(unsigned long long)arg4;
- (id)annotationsForFieldName:(id)arg1;
- (void)setPageChangeDelegate:(id)arg1;
- (_Bool)unlockWithPassword:(id)arg1;
- (id)akController;
- (void)requirePasswordsIfNeeded:(CDUnknownBlockType)arg1;
- (id)PDFAKControllerDelegate;
- (void)setPDFAKControllerDelegate:(id)arg1;
- (id)findPageWithCGPDFDictionaryPageRef:(struct CGPDFDictionary *)arg1;
- (_Bool)documentChanged;
- (id)bookmarkedPages;
- (id)_documentCatalogMetadataForRootPath:(id)arg1 withKeys:(id)arg2;
- (id)_rawPageAtIndex:(unsigned long long)arg1;
- (_Bool)_isCommonlyMappedToNothing:(id)arg1;
- (_Bool)_isNonAsciiSpace:(id)arg1;
- (id)_addEncryptionFromOptions:(id)arg1;
- (id)_convertWriteOptions:(id)arg1;
- (_Bool)canSaveWithAppendModeUsingOptions:(id)arg1;
- (_Bool)_writeAppendMode:(struct CGDataConsumer *)arg1;
- (struct __CFDictionary *)_createInfoDictionary;
- (_Bool)bookmarksChanged;
- (void)updateBookmarksInPDFDocument;
- (struct __CFData *)newXMPFromData:(id)arg1 preserveExistingXMPMetadata:(_Bool)arg2;
- (struct CGPDFAnnotation *)_createCGPDFAnnotationForAnnotation:(id)arg1;
- (void)_sanitizeAnnotationDictionary:(struct __CFDictionary *)arg1;
- (struct CGPDFName *)_convertCFStringToCGPDFName:(void *)arg1 forKey:(struct __CFString *)arg2;
- (void)_sanitizeAnnotationArray:(struct __CFArray *)arg1;
- (id)_dataFromXMP:(struct __CFData *)arg1 withRootPath:(id)arg2 keys:(id)arg3;
- (id)passwordUsedForUnlocking;
- (id)_SASLSanitize:(id)arg1;
- (_Bool)_canSaveWithEncryption;
- (void)didMatchString:(id)arg1;
- (id)dataRepresentationWithOptions:(id)arg1;
- (_Bool)writeToConsumer:(struct CGDataConsumer *)arg1 withOptions:(id)arg2;
- (_Bool)writeToFile:(id)arg1 withOptions:(id)arg2;
- (_Bool)writeToURL:(id)arg1 withOptions:(id)arg2;
- (id)_getNearestOutline:(id)arg1 forDestination:(id)arg2;
- (void)_notifyAKAdaptorPagePlaceholder:(id)arg1 wasReplacedWithPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)normalizeFindOptions:(unsigned long long)arg1;
- (void)coreFindString:(id)arg1;
- (void)beginFindStrings:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)coreFindStrings:(id)arg1;
- (id)_findString:(id)arg1 fromSelection:(id)arg2 withOptions:(unsigned long long)arg3;
- (void)cleanupFind;
- (id)selectionFromPage:(id)arg1 atPoint:(struct CGPoint)arg2 toPage:(id)arg3 atPoint:(struct CGPoint)arg4 type:(int)arg5;
- (id)_bookmarksCatalog;
- (void)_setDocumentCatalogMetadata:(id)arg1 withNSpace:(id)arg2 prefix:(id)arg3 rootPath:(id)arg4;
- (id)_namedDestination:(id)arg1 forNameDictionary:(struct CGPDFDictionary *)arg2;
- (_Bool)validateUndo:(id)arg1;
- (_Bool)validateRedo:(id)arg1;
- (_Bool)findOnPage;
- (void)scheduledFindOnPage:(id)arg1;
- (void)setupAKDocumentAdaptorIfNecessaryWithView:(id)arg1;
- (void)enableDocumentMRUMode:(_Bool)arg1;
- (_Bool)writeToFile:(id)arg1;
- (_Bool)writeToURL:(id)arg1;
- (id)outlineItemForSelection:(id)arg1;
- (void)insertPage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removePageAtIndex:(unsigned long long)arg1;
- (void)exchangePageAtIndex:(unsigned long long)arg1 withPageAtIndex:(unsigned long long)arg2;
- (void)beginFindString:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)findString:(id)arg1 fromSelection:(id)arg2 withOptions:(unsigned long long)arg3;
- (id)findStringPerPage:(id)arg1 fromSelection:(id)arg2 withOptions:(unsigned long long)arg3;
- (void)asyncFindString:(id)arg1 withDelegate:(id)arg2 onQueue:(id)arg3;
- (id)selectionFromPage:(id)arg1 atPoint:(struct CGPoint)arg2 toPage:(id)arg3 atPoint:(struct CGPoint)arg4;
- (_Bool)showsAnnotations;
- (void)setShowsAnnotations:(_Bool)arg1;
- (void)setBookmarked:(_Bool)arg1 atPageIndex:(unsigned long long)arg2;
- (void)enableLimitedSearch;
- (id)namedDestination:(id)arg1;
- (void)revert;
- (id)pageAnnotationChanges;
- (void)resetPageAnnotationChanges;
- (_Bool)viewPreferenceRightToLeft;
- (void)enqueueLayoutThreadForPage:(id)arg1;
- (Class)annotationSubclassForType:(id)arg1;

@end
