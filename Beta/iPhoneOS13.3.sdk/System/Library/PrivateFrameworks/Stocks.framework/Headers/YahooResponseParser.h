/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@interface YahooResponseParser : NSObject

+ (void)parseData:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;
+ (id)parseDataSourceMapFromDataSourceDictionaries:(id)arg1;
+ (void)parseStockQuoteDictionaries:(id)arg1 withDataSources:(id)arg2 parsedStockResult:(CDUnknownBlockType)arg3;
+ (void)parseExchangeDictionaries:(id)arg1 parsedExchangeResult:(CDUnknownBlockType)arg2;
+ (id)arrayWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2 wrapResultIfDictionary:(_Bool)arg3;
+ (id)dictionaryWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2;
+ (id)objectOfClass:(Class)arg1 withDictionaryKeyPath:(id)arg2 inJSONObject:(id)arg3;
+ (id)objectWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2;

@end
