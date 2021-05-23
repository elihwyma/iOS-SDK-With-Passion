/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/_INVocabularyConnection.h>

@interface INVocabularyUpdater : _INVocabularyConnection

+ (id)_sharedAppInstance;
+ (void)clearAllCustomVocabulary;

- (void)setValidatedVocabulary:(id)arg1 forIntentSlot:(id)arg2 validationCompletion:(CDUnknownBlockType)arg3;
- (void)setCustomPhotoAlbumNames:(id)arg1;

@end
