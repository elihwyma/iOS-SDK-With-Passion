/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@interface INVocabulary : NSObject

+ (id)sharedVocabulary;

- (id)init;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
- (void)setVocabularyStrings:(id)arg1 ofType:(long long)arg2;
- (void)setVocabulary:(id)arg1 ofType:(long long)arg2;
- (void)removeAllVocabularyStrings;

@end
