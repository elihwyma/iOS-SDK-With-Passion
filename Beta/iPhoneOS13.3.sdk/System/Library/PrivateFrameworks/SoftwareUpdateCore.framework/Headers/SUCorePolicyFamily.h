/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
 */

#import <Foundation/NSObject.h>

@interface SUCorePolicyFamily : NSObject

+ (id)_getIOSAssetTypeForKind:(int)arg1;
+ (id)_getTVOSAssetTypeForKind:(int)arg1;
+ (id)_getWatchOSAssetTypeForKind:(int)arg1;
+ (id)_getNERDCAssetTypeForKind:(int)arg1;
+ (id)_getNERDSUAssetTypeForKind:(int)arg1;
+ (id)_getNERDBRAINAssetTypeForKind:(int)arg1;
+ (id)_getPlatformDefaultAssetTypeForKind:(int)arg1;
+ (id)_copyGestaltValueForKey:(struct __CFString *)arg1;
+ (int)getFamilyUsingDeviceClass:(id)arg1;
+ (id)_getGenericDefaultAssetTypeForKind:(int)arg1;
+ (id)getAssetTypeForKind:(int)arg1 usingFamily:(int)arg2;
+ (id)getNameForSUCorePolicyAssetFamily:(int)arg1;
+ (id)getNameForSUCorePolicyAssetKind:(int)arg1;

@end
