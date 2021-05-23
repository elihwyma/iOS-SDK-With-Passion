/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSDictionary, NSLocale, NSMutableArray, NSObject, NSString, TSKAccessController, TSKAnnotationAuthorStorage, TSKChangeNotifier, TSKDocumentSupport, TSKPasteboardController, TSSStylesheet, TSSTheme, UIViewController;

@protocol OS_dispatch_queue, TSKDocumentViewController, TSKSearchReference, TSKUndoRedoState;

@interface TSKDocumentRoot : TSPObject <Swift>

{
    TSKAccessController *_accessController;
    TSKChangeNotifier *_changeNotifier;
    _Bool _isFindActive;
    TSKPasteboardController *_pasteboardController;
    id <TSKUndoRedoState> _undoRedoState;
    TSKAnnotationAuthorStorage *_annotationAuthorStorage;
    NSObject<OS_dispatch_queue> *_iCloudTeardownStackQueue;
    NSMutableArray *_iCloudTeardownStack;
    _Bool _isBeingLocalized;
    NSLocale *_locale;
    NSObject<TSKSearchReference> *_activeSearchReference;
    NSDictionary *_searchReferencesToHighlight;
    TSKDocumentSupport *_documentSupport;
}

@property (nonatomic, readonly) UIViewController<TSKDocumentViewController> *viewController;
@property (retain, nonatomic) TSSTheme *theme;
@property (nonatomic, readonly) TSSStylesheet *stylesheet;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) TSKPasteboardController *pasteboardController;
@property (nonatomic, readonly) TSKDocumentSupport *documentSupport;
@property (nonatomic, readonly) TSKAccessController *accessController;
@property (nonatomic, readonly) TSKChangeNotifier *changeNotifier;
@property (nonatomic, readonly) unsigned long long applicationType;
@property (nonatomic, getter=isFindActive) _Bool findActive;
@property (nonatomic, readonly) NSString *creationLanguage;
@property (nonatomic, readonly) unsigned long long writingDirection;
@property (retain, nonatomic) id <TSKUndoRedoState> undoRedoState;
@property (retain, nonatomic) TSKAnnotationAuthorStorage *annotationAuthorStorage;
@property (nonatomic, readonly) _Bool isBeingLocalized;
@property (retain, nonatomic) NSObject<TSKSearchReference> *activeSearchReference;
@property (retain, nonatomic) NSDictionary *searchReferencesToHighlight;
@property (nonatomic, readonly) _Bool hasICloudConflict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)commandControllerClass;

- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)documentDidLoad;
- (_Bool)shouldHyphenate;
- (struct __CFLocale *)hyphenationLocale;
- (id)additionalDocumentPropertiesForWrite;
- (void)coalesceChanges:(id)arg1;
- (id)modelEnumerator;
- (id)modelEnumeratorForObjectsPassingTest:(CDUnknownBlockType)arg1;
- (unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)arg1;
- (void)withRootSearchTargetAtIndex:(unsigned long long)arg1 executeBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)nextRootSearchTargetIndexFromIndex:(unsigned long long)arg1 forString:(id)arg2 options:(unsigned long long)arg3 inDirection:(unsigned long long)arg4;
- (id)dataFromDocumentCachePath:(id)arg1;
- (_Bool)writeData:(id)arg1 atDocumentCachePath:(id)arg2;
- (struct CGImageSource *)newImageSourceForDocumentCachePath:(id)arg1;
- (id)uniqueDocumentCachePathForProposedPath:(id)arg1;
- (void)changeDocumentCacheFileProtection:(id)arg1;
- (_Bool)documentCacheHasAtMostFileProtection:(id)arg1;
- (void)didSaveWithEncryptionChange;
- (_Bool)isDirectionRightToLeft;
- (_Bool)documentDisallowsHighlightsOnStorage:(id)arg1;
- (id)modelEnumeratorWithFlags:(unsigned long long)arg1;
- (id)modelEnumeratorForObjectsOfClass:(Class)arg1;
- (id)modelEnumeratorForObjectsConformingToProtocol:(id)arg1;
- (id)modelEnumeratorForObjectsRespondingToSelector:(SEL)arg1;
- (void)markAsModifiedIfLocaleIsOutOfDate;
- (id)commandForPropagatingPresetChangeCommand:(id)arg1 alwaysPreserveAppearance:(_Bool)arg2;
- (long long)addObserverForICloudTeardownWithBlock:(CDUnknownBlockType)arg1;
- (void)removeICloudTeardownObserver:(long long)arg1;
- (void)notifyICloudTeardownObservers;
- (_Bool)hasICloudTeardownObserver;
- (void)updateForNonCommandChangesWithWriteLock:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)enumerateStyleClientsUsingBlock:(CDUnknownBlockType)arg1;
- (id)changeSessionManagerForModel:(id)arg1;
- (_Bool)useLigatures;
- (id)documentFonts;
- (id)changeVisibility;
- (id)unavailableDocumentFonts;

@end
