/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBAppNames, _INPBIntentVocabulary, _INPBLanguageTag;

@protocol _INPBLocalizedProject <Swift>

@property (retain, nonatomic) _INPBAppNames *appNames;
@property (nonatomic, readonly) _Bool hasAppNames;
@property (retain, nonatomic) _INPBIntentVocabulary *intentVocabulary;
@property (nonatomic, readonly) _Bool hasIntentVocabulary;
@property (retain, nonatomic) _INPBLanguageTag *language;
@property (nonatomic, readonly) _Bool hasLanguage;

@end
