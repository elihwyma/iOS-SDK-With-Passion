/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface TSUDateFormatCategoryEntry : NSObject

{
    unsigned short mSeparator;
    struct __CFArray *mFormatters;
    NSMutableSet *mFormatStrings;
}

- (void)dealloc;
- (unsigned short)separator;
- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 forceAllowAMPM:(_Bool)arg2 successfulFormatString:(const struct __CFString **)arg3 perfect:(_Bool *)arg4;
- (id)initWithSeparator:(unsigned short)arg1;
- (void)addFormat:(id)arg1 locale:(struct __CFLocale *)arg2;

@end
