/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/UTF8Formatter.h>

@interface WEPKeyFormatter : UTF8Formatter

+ (id)sharedWEPKeyFormatter;
+ (id)wepKeyFormatter:(unsigned long long)arg1;

- (_Bool)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;

@end
