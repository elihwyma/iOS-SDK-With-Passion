/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSLocale, NSNumberFormatter, NSString;

__attribute__((visibility("hidden")))
@interface AVTimeFormatterInternal : NSObject

{
    long long style;
    double formatTemplate;
    _Bool isFullWidth;
    NSLocale *locale;
    _Bool isRightToLeft;
    NSString *cachedDateFormatterFormat;
    NSString *cachedDateFormatterTemplate;
    NSNumberFormatter *numberFormatterWithOneMinimumIntegerDigits;
    NSNumberFormatter *numberFormatterWithTwoMinimumIntegerDigits;
}

@end
