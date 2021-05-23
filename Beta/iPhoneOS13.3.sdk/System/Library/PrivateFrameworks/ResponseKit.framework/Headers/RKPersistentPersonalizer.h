/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSLocale, NSMutableDictionary, NSString, NSURL;

@protocol RKDisplayStringsProvider;

@interface RKPersistentPersonalizer : NSObject

{
    void *_model;
    NSURL *_dynamicDataURL;
    NSString *_languageID;
    NSLocale *_languageLocale;
    id <RKDisplayStringsProvider> _displayStringsProvider;
    NSDate *_lastObservedDynamicDataCreationDate;
    NSDate *_lastDynamicDataCreationCheckDate;
    NSMutableDictionary *_synonyms;
}

@property (retain) NSString *languageID;
@property (retain) NSLocale *languageLocale;
@property (retain) NSURL *dynamicDataURL;
@property (readonly) id <RKDisplayStringsProvider> displayStringsProvider;
@property (readonly) void *model;
@property (retain) NSDate *lastObservedDynamicDataCreationDate;
@property (retain) NSDate *lastDynamicDataCreationCheckDate;
@property (retain) NSMutableDictionary *synonyms;

+ (void)removeAllDynamicModelsInDirectory:(id)arg1;
+ (id)nonEmptyStringsPredicate;

- (id)init;
- (void)dealloc;
- (void)flushDynamicData;
- (id)headwordsForSynonym:(id)arg1;
- (id)topSynonymsForSpeechAct:(id)arg1 headword:(id)arg2 recipientContext:(id)arg3 maxCount:(unsigned long long)arg4;
- (id)headwordsForSynonymPrefix:(id)arg1;
- (void)trainSynonymForSpeechAct:(id)arg1 headword:(id)arg2 userResponse:(id)arg3 recipientContext:(id)arg4 weight:(unsigned long long)arg5 effectiveDate:(id)arg6;
- (id)initWithLanguageIdentifier:(id)arg1 andDynamicDataURL:(id)arg2 displayStringsProvider:(id)arg3;
- (void *)createLanguageModel;
- (id)dynamicDataCreationDate;
- (void)initializeDynamicLanguageModel;

@end
