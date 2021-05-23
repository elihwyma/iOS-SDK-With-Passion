/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@class CUIMutableCommonAssetStorage, CoreThemeDocument, NSArray, NSMutableArray, NSString, NSThread, NSUUID, TDLogger;

@interface TDDistiller : NSObject

{
    CoreThemeDocument *_document;
    CUIMutableCommonAssetStorage *_assetStore;
    NSMutableArray *_renditionEntries;
    NSArray *_changedProductions;
    NSArray *_mainThreadPerformRunLoopModes;
    int _fileCompression;
    _Bool _dontPackRenditionsBeforeDistilling;
    _Bool _incremental;
    _Bool _cancelled;
    _Bool _successful;
    _Bool _finished;
    NSString *_assetStoreVersionString;
    long long _assetStoreVersionNumber;
    TDLogger *_logger;
    NSString *_accumulatedErrorDescription;
    NSThread *_callbackThread;
    CDUnknownBlockType _completionHandler;
}

@property (getter=isIncremental) _Bool incremental;
@property (getter=isCancelled) _Bool cancelled;
@property (getter=isFinished) _Bool finished;
@property (getter=isSuccessful) _Bool successful;
@property (retain, nonatomic) NSString *accumulatedErrorDescription;
@property (retain) NSThread *callbackThread;
@property (copy) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly) NSUUID *uuid;
@property int fileCompression;
@property (copy) NSString *assetStoreVersionString;
@property long long assetStoreVersionNumber;
@property (retain) TDLogger *logger;
@property (nonatomic) _Bool dontPackRenditionsBeforeDistilling;

- (void)dealloc;
- (void)waitUntilFinished;
- (id)keyFormatData;
- (void)_logError:(id)arg1;
- (void)_logWarning:(id)arg1;
- (void)_logExtra:(id)arg1;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 attemptIncremental:(_Bool)arg3 versionString:(id)arg4;
- (id)_keyDataFromKey:(const struct _renditionkeytoken *)arg1;
- (void)_logInfo:(id)arg1;
- (void)removeRenditionsFromAssetStoreWithKey:(id)arg1;
- (void)setAssetStoreRenditionCount:(unsigned int)arg1;
- (void)setAssetStoreUuid:(id)arg1;
- (void)setAssetStoreAssociatedChecksum:(unsigned int)arg1;
- (void)setAssetStoreKeyFormatData:(id)arg1;
- (void)setAssetStoreKeySemantics:(int)arg1;
- (void)setAssetStorageVersion:(unsigned int)arg1;
- (void)setAssetStorageVersionString:(const char *)arg1;
- (void)setAssetSchemaVersion:(unsigned int)arg1;
- (void)setAssetColorSpaceID:(unsigned int)arg1;
- (_Bool)assetStoreWriteToDisk;
- (_Bool)_storeRenditions;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 attemptIncremental:(_Bool)arg3;
- (void)saveAndDistillWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_accumulateErrorDescription:(id)arg1;
- (_Bool)_setupWithOutputPath:(id)arg1 attemptIncremental:(_Bool)arg2;
- (id)_filterRenditions:(id)arg1;
- (void)_logErrorAndAccumulateDescription:(id)arg1;
- (void)_binaryInsertList:(id)arg1;
- (_Bool)_sortRenditionEntries;
- (void)setAsset:(id)arg1 withKey:(const struct _renditionkeytoken *)arg2 fromRenditionSpec:(id)arg3;
- (id)_renditionsWithError:(id *)arg1;
- (id)_productionForRenditionSpec:(id)arg1;
- (_Bool)_distillColorDefinitions:(id)arg1;
- (_Bool)_distillFonts:(id)arg1;
- (_Bool)_distillNamedElements:(id)arg1;
- (_Bool)_distillCursorFacetDefinitions:(id)arg1;
- (void)markDistillationAsFinished;
- (void)performSelectorOnCallbackThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(_Bool)arg3;
- (id)dateOfLastDistill;
- (_Bool)distillCustomFontSizes;
- (id)_keySpecsToRemoveFromKeySpecs:(id)arg1;
- (unsigned long long)_removeRenditionsWithKeySpecs:(id)arg1;
- (id)_renditionsFromProductions:(id)arg1 error:(id *)arg2;
- (_Bool)_recordRenditionEntryFromRendition:(id)arg1;
- (_Bool)sortAndStoreRenditions;
- (void)_resetDocumentUuid:(id)arg1;
- (void)finishDistillationWithSuccess:(_Bool)arg1;
- (_Bool)distillCatalogGlobals;
- (_Bool)distillThemeAppearances;
- (_Bool)distillLocalizationss;
- (_Bool)distillCustomColors;
- (_Bool)distillCustomFonts;
- (_Bool)distillNamedElements;
- (_Bool)distillCursorFacetDefinitions;
- (_Bool)distillRenditions;
- (void)_distillChanges:(id)arg1;
- (void)_distill:(id)arg1;
- (void)waitTimerDidFire:(id)arg1;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 versionString:(id)arg3;
- (id)documentPath;
- (id)_textureFaceExclusionPredicate;
- (id)_copyStandardEffectDefinitions;
- (void)cancelDistill;

@end
