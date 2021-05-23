/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBIntentSlotValue;

@protocol _INPBSelectionItem <Swift>

@property (copy, nonatomic) NSString *uuid;
@property (nonatomic, readonly) _Bool hasUuid;
@property (retain, nonatomic) _INPBIntentSlotValue *value;
@property (nonatomic, readonly) _Bool hasValue;
@property (copy, nonatomic) NSString *vocabularyValue;
@property (nonatomic, readonly) _Bool hasVocabularyValue;

@end
