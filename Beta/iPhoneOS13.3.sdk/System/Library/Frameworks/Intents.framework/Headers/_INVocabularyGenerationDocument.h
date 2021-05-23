/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface _INVocabularyGenerationDocument : NSObject <Swift>

{
    NSMutableDictionary *_itemsBySiriIDCache;
    NSMutableDictionary *_itemsByStringCache;
    _Bool _resetOnNextSync;
    _Bool _haveAssignedAllSiriIDs;
    NSString *_appBundleID;
    NSString *_intentSlot;
    NSString *_validity;
    NSString *_thisGeneration;
    NSArray *_vocabularyItems;
}

@property (nonatomic) _Bool haveAssignedAllSiriIDs;
@property (nonatomic) _Bool resetOnNextSync;
@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSString *intentSlot;
@property (copy, nonatomic) NSString *validity;
@property (copy, nonatomic) NSString *thisGeneration;
@property (copy, nonatomic) NSArray *vocabularyItems;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_initWithDictionary:(id)arg1;
- (id)_itemsBySiriID;
- (id)_everyVocabularyItemSiriID;
- (id)_vocabularyItemForSiriID:(id)arg1;
- (id)_vocabularyItemWithString:(id)arg1;
- (void)assignMissingSiriIDsForOptimalDiffFromPreviousDocument:(id)arg1;
- (id)diffFromPreviousDocument:(id)arg1;
- (void)_clearVocabularyItemCaches;
- (void)_addValueForSelector:(SEL)arg1 toDictionary:(id)arg2;
- (id)_valueForSelector:(SEL)arg1 ofClass:(Class)arg2 from:(id)arg3;
- (id)_stringForSelector:(SEL)arg1 from:(id)arg2;
- (void)_takeValuesFromDictionary:(id)arg1;
- (id)writeToFile:(id)arg1 createIntermediateDirectories:(_Bool)arg2;

@end
