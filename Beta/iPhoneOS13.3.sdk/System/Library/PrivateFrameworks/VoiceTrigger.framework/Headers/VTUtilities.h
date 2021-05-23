/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@interface VTUtilities : NSObject

+ (_Bool)isInternalInstall;
+ (_Bool)isAlwaysOn;
+ (id)deviceProductType;
+ (id)deviceProductVersion;
+ (_Bool)isNano;
+ (_Bool)VTIsHorseman;
+ (_Bool)supportBargeIn;
+ (void)forceReload;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)arg1;
+ (double)_round:(double)arg1 withPlaces:(int)arg2;
+ (id)sanitizeEventInfoForLogging:(id)arg1;
+ (double)systemUpTime;
+ (_Bool)supportTTS;
+ (_Bool)supportExternalPhraseSpotter;
+ (_Bool)supportPremiumAssets;
+ (id)deviceSoftwareVersion;
+ (id)getAssetHashFromConfigPath:(id)arg1;
+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)arg1;

@end
