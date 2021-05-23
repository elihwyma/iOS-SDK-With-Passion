/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKComplicationBundleHelper : NSObject

+ (id)localizedComplicationTemplateForFamily:(long long)arg1 bundle:(id)arg2 localization:(id)arg3;
+ (id)_complicationFamilyToTemplateFileNameMapping:(id)arg1;
+ (id)_templateForFamily:(long long)arg1 bundle:(id)arg2;
+ (id)localizedComplicationTemplateForTemplate:(id)arg1 bundle:(id)arg2 localization:(id)arg3;
+ (id)supportedComplicationFamiliesForBundle:(id)arg1;
+ (id)localizedComplicationDescriptionForFamily:(long long)arg1 bundle:(id)arg2 localization:(id)arg3;

@end
