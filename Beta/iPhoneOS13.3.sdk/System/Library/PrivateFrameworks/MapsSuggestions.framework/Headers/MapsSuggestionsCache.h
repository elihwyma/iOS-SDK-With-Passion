/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@interface MapsSuggestionsCache : NSObject

+ (_Bool)saveToFilePath:(id)arg1 storage:(struct NSMutableDictionary *)arg2 ETAValidUntilDate:(id)arg3;
+ (_Bool)loadFromFilePath:(id)arg1 storage:(struct NSMutableDictionary **)arg2 ETAValidUntilDate:(id *)arg3;

@end
