/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSURL.h>

@interface NSURL (HealthKit)

+ (id)_hk_urlForAtrialFibrillationEventType;
+ (id)_hk_urlForViewHealthRecords;
+ (id)_hk_urlForHealthRecordsProviderSearch;
+ (id)hk_tapToRadarURLForBundleID:(id)arg1 component:(unsigned long long)arg2 title:(id)arg3 description:(id)arg4 classification:(long long)arg5 reproducibility:(long long)arg6 keywords:(id)arg7 autoDiagnostics:(long long)arg8 attachments:(id)arg9;
+ (id)hk_safeURLWithString:(id)arg1;
+ (id)hk_tapToHealthRadarURLWithTitle:(id)arg1 description:(id)arg2 classification:(long long)arg3 reproducibility:(long long)arg4 keywords:(id)arg5 autoDiagnostics:(long long)arg6 attachments:(id)arg7;
+ (id)hk_tapToHealthRadarURLForComponent:(unsigned long long)arg1 title:(id)arg2 description:(id)arg3 classification:(long long)arg4 reproducibility:(long long)arg5 keywords:(id)arg6 autoDiagnostics:(long long)arg7 attachments:(id)arg8;
+ (id)_hk_urlForElectrocardiogramType;

- (id)hk_valueForFirstInstanceOfParameterNamed:(id)arg1;
- (_Bool)hk_hasBaseURL:(id)arg1 error:(id *)arg2;
- (_Bool)hk_isValidSafariViewControllerURL;

@end
