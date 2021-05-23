/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TSUDateFormatCategory : NSObject

{
    struct __CFDateFormatter *mInitialFormatter;
    NSMutableArray *mEntries;
}

- (void)dealloc;
- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 forceAllowAMPM:(_Bool)arg2 successfulFormatString:(const struct __CFString **)arg3 perfect:(_Bool *)arg4;
- (id)initWithInitialPattern:(id)arg1 locale:(struct __CFLocale *)arg2;
- (void)addSeparator:(unsigned short)arg1 format:(id)arg2 locale:(struct __CFLocale *)arg3;
- (id)entryForSeparator:(unsigned short)arg1;

@end
