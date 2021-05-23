/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@interface _KSTextReplacementHelper : NSObject

+ (id)errorWithCode:(long long)arg1 description:(id)arg2;
+ (void)fetchConfigurationPlistIfNeeded;
+ (id)aggdPrefix;
+ (id)sampleShortcut;
+ (id)errorWithCode:(long long)arg1 failedAdds:(id)arg2 failedDeletes:(id)arg3;
+ (void)logAggdValueForSyncIsPull:(_Bool)arg1 success:(_Bool)arg2;
+ (long long)validateTextReplacement:(id)arg1;
+ (id)errorWithCode:(long long)arg1 forEntry:(id)arg2;
+ (id)textReplaceEntryFromTIDictionaryValue:(id)arg1;
+ (id)transactionFromTextReplacementEntry:(id)arg1 forDelete:(_Bool)arg2;
+ (id)multipleAddErrors:(id)arg1 removeErrors:(id)arg2;
+ (void)extractAggdMetricsForTextReplacement:(id)arg1;
+ (id)errorStringForCode:(long long)arg1;
+ (void)logPhraseWordCount:(long long)arg1;
+ (id)appleLanguagesPreference;
+ (id)fetchConfigurationPlist;

@end
