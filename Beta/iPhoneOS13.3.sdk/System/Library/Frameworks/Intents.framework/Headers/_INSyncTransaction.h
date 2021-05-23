/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSString, _INVocabularyGenerationDocument, _INVocabularyStoreManager;

@interface _INSyncTransaction : NSObject

{
    NSString *_pathToLatestVocabularyDocument;
    NSString *_pathToStagedVocabularyDocument;
    NSString *_pathToSentVocabularyDocument;
    NSString *_syncSlot;
    _INVocabularyStoreManager *_storeManager;
    _Bool _deleteExistingVocabulary;
    _Bool _vocabularyUpdatesEnabled;
    _Bool _fullResetRequired;
    _INVocabularyGenerationDocument *_latest;
    _INVocabularyGenerationDocument *_sent;
}

@property (nonatomic, readonly) _INVocabularyGenerationDocument *latestVocabularyDocument;
@property (nonatomic, readonly) _INVocabularyGenerationDocument *sentVocabularyDocument;
@property (nonatomic) _Bool fullResetRequired;

+ (id)beginTransactionForBundleID:(id)arg1 bundlePath:(id)arg2 syncSlot:(id)arg3;

- (void)_beginTransaction;
- (id)calculateDiff;
- (id)_initWithVocabularyManager:(id)arg1 syncSlot:(id)arg2 deleteExistingVocabulary:(_Bool)arg3;
- (void)_saveAndCleanup;
- (void)endTransactionWithFinalAnchor:(id)arg1;
- (id)_emptySentDocument;
- (void)_deleteInvalidSavedData;
- (_Bool)_isMissingLatestFileError:(id)arg1;

@end
