/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/APFormatter.h>

@class NSCharacterSet, NSString;

@interface MACFormatter : APFormatter

{
    NSCharacterSet *_possibleSeparators;
    NSCharacterSet *_possibleSeparatorsInvertedSet;
    NSString *_userPreferredSeparator;
}

+ (id)macFormatter;
+ (id)macAddressSet;
+ (id)sharedMACFormatter;
+ (_Bool)parseMACAddress:(const char *)arg1 intoHexString:(char *)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (void)setPossibleSeparators:(id)arg1;
- (id)possibleSeparators;
- (void)setPossibleSeparatorsInvertedSet:(id)arg1;
- (void)setUserPreferredSeparator:(id)arg1;
- (void)removeMACAddressSeparatorsFromString:(id)arg1;
- (id)possibleSeparatorsInvertedSet;
- (id)userPreferredSeparator;

@end
