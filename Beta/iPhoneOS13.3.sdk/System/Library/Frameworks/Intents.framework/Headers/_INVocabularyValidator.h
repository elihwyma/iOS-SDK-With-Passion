/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@interface _INVocabularyValidator : NSObject

+ (void)initialize;

- (id)_intentsUsingVocabularyType:(long long)arg1;
- (id)validatedItemsFromVocabularyStrings:(id)arg1 ofType:(long long)arg2 loggingWarnings:(_Bool)arg3;
- (id)validatedItemsFromVocabularySpeakables:(id)arg1 ofType:(long long)arg2 loggingWarnings:(_Bool)arg3;
- (id)_validatedItemsFromVocabularyObject:(id)arg1 ofType:(long long)arg2 loggingWarnings:(_Bool)arg3 withItemFactory:(CDUnknownBlockType)arg4;
- (_Bool)_bundleID:(id)arg1 isWhitelistedForVocabularyType:(long long)arg2;
- (void)_confirmExistenceOfWatchAppForCompanionBundleID:(id)arg1 handlingIntents:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_determineIfBundle:(id)arg1 canProvideVocabularyOfType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)determineIfBundle:(id)arg1 canProvideVocabularyOfType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)maximumNumberOfVocabularyStringsForType:(long long)arg1;

@end
