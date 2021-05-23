/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (NTKUtilities)

+ (id)NTKTimeWithDate:(id)arg1 andDesignatorFont:(id)arg2 timeZone:(id)arg3 options:(unsigned long long)arg4;
+ (id)NTKTimeWithDate:(id)arg1 andDesignatorAttributes:(id)arg2 timeZone:(id)arg3 options:(unsigned long long)arg4;
+ (id)NTKTimeWithDate:(id)arg1 andDesignatorFont:(id)arg2 options:(unsigned long long)arg3;
+ (id)NTKSwapPlaceholderString:(id)arg1 withTimeStringForDate:(id)arg2 inString:(id)arg3 usingBaseFont:(id)arg4 timeZone:(id)arg5 options:(unsigned long long)arg6;
+ (id)NTKHyphenatableString:(id)arg1 factor:(float)arg2;
+ (id)NTKDesignatorAttributedTimeWithDate:(id)arg1;
+ (id)NTKTimeWithDate:(id)arg1 andDesignatorFont:(id)arg2;
+ (id)NTKReplaceTimeDesignatorAttributesFrom:(id)arg1 withDesignatorFont:(id)arg2;
+ (id)NTKSwapPlaceholderString:(id)arg1 withTimeStringForDate:(id)arg2 inString:(id)arg3 usingBaseFont:(id)arg4;
+ (id)NTKCountdownToDate:(id)arg1 useShort:(_Bool)arg2 withDesignatorFont:(id)arg3;
+ (id)NTKHyphenatableString:(id)arg1;

@end
