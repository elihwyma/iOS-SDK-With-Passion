/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@interface PICompositionSerializerFormatVersion : NSObject

+ (id)currentFormatVersion;
+ (id)locallySupportedFormatVersions;
+ (id)_versionRules;
+ (id)versionRules;
+ (id)formatVersionForAdjustment:(id)arg1 identifier:(id)arg2;
+ (id)adjustmentDataFormatVersionForComposition:(id)arg1;

@end
