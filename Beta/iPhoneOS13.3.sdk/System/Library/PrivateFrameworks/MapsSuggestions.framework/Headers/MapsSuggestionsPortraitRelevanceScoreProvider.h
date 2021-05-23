/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class NSDate, NSLocale, NSMutableArray, NSString;

@interface MapsSuggestionsPortraitRelevanceScoreProvider : NSObject

{
    NSDate *_fetchEntriesFromDate;
    NSMutableArray *_portraitStrings;
    struct Queue _queue;
    NSLocale *_currentLocale;
    NSString *_languageCode;
    NSString *_currentCountryCode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (id)init;
- (id).cxx_construct;
- (_Bool)relevanceScoreForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)preLoad;
- (_Bool)_searchForName:(id)arg1;
- (void)_fetchStringsFromPortrait;

@end
