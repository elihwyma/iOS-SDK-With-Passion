/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@interface PRSRankingUtilities : NSObject

+ (void)computeDateCountsForDates:(id)arg1 countLastYear:(unsigned long long *)arg2 countLastMonth:(unsigned long long *)arg3 countLastWeek:(unsigned long long *)arg4 countLastDay:(unsigned long long *)arg5 currentTime:(double)arg6;
+ (float)floatValue:(float)arg1 withSigFigs:(long long)arg2;
+ (_Bool)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 isEqualToString:(id)arg2;
+ (_Bool)multiWordString:(id)arg1 hasPrefix:(id)arg2;
+ (_Bool)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 hasPrefix:(id)arg2 locale:(id)arg3;
+ (_Bool)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 containsString:(id)arg2 locale:(id)arg3;
+ (void)initMappings;
+ (id)categoryForBundleID:(id)arg1;
+ (id)bundleIDForCategory:(id)arg1;

@end
