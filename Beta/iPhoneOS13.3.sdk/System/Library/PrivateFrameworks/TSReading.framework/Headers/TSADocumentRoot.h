/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSKDocumentRoot.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString, TSADrawableFactory, TSTCustomFormatList;

@protocol TSADocumentRootDelegate;

@interface TSADocumentRoot : TSKDocumentRoot

{
    int _needsToCaptureViewState;
    id <TSADocumentRootDelegate> _delegate;
    NSMutableDictionary *_upgradeState;
    NSMutableSet *_warnings;
    NSString *_creationLanguage;
    unsigned long long _creationLanguageWritingDirection;
    TSTCustomFormatList *_tablesCustomFormatList;
    _Bool _needsMovieCompatibilityUpgrade;
    _Bool _isClosed;
    NSString *_templateIdentifier;
    _Bool _hasPreUFFVersion;
}

@property (nonatomic) _Bool hasPreUFFVersion;
@property (nonatomic, readonly) NSSet *missingFontWarningMessages;
@property (nonatomic) _Bool needsMovieCompatibilityUpgrade;
@property (nonatomic) id <TSADocumentRootDelegate> delegate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *defaultDraftName;
@property (nonatomic, readonly, getter=isDocumentEditedSinceLastSave) _Bool documentEditedSinceLastSave;
@property (copy, nonatomic) NSString *templateIdentifier;
@property (nonatomic, readonly) TSADrawableFactory *drawableFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool importingDesignDemoDoc;
@property (nonatomic, readonly) _Bool isBrowsingVersions;

+ (id)persistenceWarningsForData:(id)arg1 isReadable:(_Bool)arg2 isExternal:(_Bool)arg3;

- (id)init;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (unsigned long long)writingDirection;
- (id)warnings;
- (void)documentDidLoad;
- (id)packageDataForWrite;
- (id)additionalDocumentPropertiesForWrite;
- (id)dataFromDocumentCachePath:(id)arg1;
- (_Bool)writeData:(id)arg1 atDocumentCachePath:(id)arg2;
- (struct CGImageSource *)newImageSourceForDocumentCachePath:(id)arg1;
- (id)uniqueDocumentCachePathForProposedPath:(id)arg1;
- (void)changeDocumentCacheFileProtection:(id)arg1;
- (void)didSaveWithEncryptionChange;
- (id)creationLanguage;
- (id)commandForPropagatingPresetChangeCommand:(id)arg1 alwaysPreserveAppearance:(_Bool)arg2;
- (long long)addObserverForICloudTeardownWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasICloudConflict;
- (id)referencedStylesOfClass:(Class)arg1;
- (id)customFormatList;
- (void)p_updateCreationLanguage;
- (void)p_updateBuildVersionHistoryWithVersionOfTemplateBundle:(id)arg1;
- (void)setCreationLanguage:(id)arg1;
- (_Bool)isMultiPageForQuickLook;
- (void)fulfillPasteboardPromises;
- (void)p_registerAllFormulasAfterImport;
- (_Bool)exportToPath:(id)arg1 exporter:(id)arg2 delegate:(id)arg3 error:(id *)arg4;
- (id)p_parseNumberOutOfBasename:(id)arg1 hasNumber:(_Bool *)arg2 number:(unsigned long long *)arg3;
- (id)protected_defaultTextPresetOrdering;
- (void)pUpgradeHyperlinksInStorage:(id)arg1;
- (void)performHyperlinkUpgradesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)p_removeStyles:(id)arg1;
- (void)p_replaceStyles:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (id)documentCachePath;
- (void)addWarning:(id)arg1;
- (void)removeWarning:(id)arg1;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1;
- (void)updateWritingDirection:(unsigned long long)arg1;
- (id)upgradeState;
- (void)documentDidSave;
- (void)willClose;
- (void)initializeForImport;
- (void)setCustomFormatList:(id)arg1;
- (void)suspendBackgroundActivities;
- (void)resumeBackgroundActivities;
- (void)suspendThumbnailing;
- (void)resumeThumbnailing;
- (void)didDownloadDocumentResources:(id)arg1 failedOrCancelledDocumentResources:(id)arg2 error:(id)arg3;
- (void)importerDidFinish:(id)arg1;
- (id)newExporterForType:(id)arg1 options:(id)arg2 preferredType:(id *)arg3;
- (_Bool)exportToPath:(id)arg1 exporter:(id)arg2 error:(id *)arg3;
- (void)prepareForSavingAsTemplate;
- (void)insertTextPresetDisplayItemsPreservingGrouping:(id)arg1 insertAtBeginningOfGroup:(_Bool)arg2;
- (id)p_characterStyleWithProperties:(id)arg1 stylesheet:(id)arg2 override:(id)arg3;
- (void)pUpgradeHyperlinks;
- (void)performStylesheetUpdatesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)p_replaceStyle:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (_Bool)shouldAllowDrawableInGroups:(id)arg1 forImport:(_Bool)arg2;

@end
