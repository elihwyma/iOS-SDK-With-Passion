/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLNLP : NSObject

+ (id)lemmasForToken:(id)arg1 locale:(id)arg2 options:(long long)arg3;
+ (id)tokensFromString:(id)arg1 options:(long long)arg2;
+ (id)stringWithoutDiacriticsFromString:(id)arg1;
+ (id)ngramsFromTokens:(id)arg1 ofSize:(unsigned long long)arg2 usingSeparator:(id)arg3;
+ (id)dateIntervalsFromMessage:(id)arg1 onDate:(id)arg2;
+ (id)dateFilterForCMMWithAttributes:(id)arg1 withReferenceDate:(id)arg2;
+ (id)stopWordsForLanguageCode:(id)arg1;
+ (id)_englishStopWords;
+ (id)_frenchStopWords;
+ (_Bool)nlpSearchSupportsLocale:(id)arg1;

@end
