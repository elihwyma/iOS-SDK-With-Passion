/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@interface MKIconManager : NSObject

+ (id)iconManager;
+ (id)_imageForFeatureStyleAttributes:(id)arg1 iconText:(id)arg2 size:(unsigned long long)arg3 forScale:(double)arg4 navMode:(_Bool)arg5 nightMode:(_Bool)arg6;
+ (id)_imageForFeatureStyleAttributes:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 navMode:(_Bool)arg4;
+ (id)_imageForFeatureStyleAttributes:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 navMode:(_Bool)arg4 nightMode:(_Bool)arg5;
+ (id)imageForTrafficCamera:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 nightMode:(_Bool)arg4;
+ (id)imageForTrafficIncidentType:(long long)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 nightMode:(_Bool)arg4;
+ (id)_imageForFeatureStyleAttributes:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 nightMode:(_Bool)arg4;
+ (id)imageForMapItem:(id)arg1 forScale:(double)arg2 fallbackToBundleIcon:(_Bool)arg3;
+ (id)imageForMapItem:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 fallbackToBundleIcon:(_Bool)arg5;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(_Bool)arg6;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(_Bool)arg6 transparent:(_Bool)arg7;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(_Bool)arg6 transparent:(_Bool)arg7 nightMode:(_Bool)arg8;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(_Bool)arg5 transitMode:(_Bool)arg6 isCarplay:(_Bool)arg7;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(_Bool)arg5 transitMode:(_Bool)arg6 isCarplay:(_Bool)arg7 nightMode:(_Bool)arg8;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(_Bool)arg6 transparent:(_Bool)arg7 transitmode:(_Bool)arg8 interactive:(_Bool)arg9 isCarplay:(_Bool)arg10;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(_Bool)arg6 transparent:(_Bool)arg7 transitmode:(_Bool)arg8 interactive:(_Bool)arg9 isCarplay:(_Bool)arg10 nightMode:(_Bool)arg11;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(_Bool)arg6 transparent:(_Bool)arg7 transitmode:(_Bool)arg8 interactive:(_Bool)arg9;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(_Bool)arg6 transparent:(_Bool)arg7 transitmode:(_Bool)arg8 interactive:(_Bool)arg9 nightMode:(_Bool)arg10;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(_Bool)arg6 nightMode:(_Bool)arg7;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(_Bool)arg6 transparent:(_Bool)arg7 transitmode:(_Bool)arg8;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(_Bool)arg6 transparent:(_Bool)arg7 transitmode:(_Bool)arg8 nightMode:(_Bool)arg9;
+ (void)setDiskCacheURL:(id)arg1;
+ (struct CGColor *)newFillColorForStyleAttributes:(id)arg1 forScale:(double)arg2;
+ (struct CGColor *)newHaloColorForStyleAttributes:(id)arg1 forScale:(double)arg2;
+ (struct CGColor *)newGlyphColorForStyleAttributes:(id)arg1 forScale:(double)arg2;
+ (id)_imageForFeatureStyleAttributes:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3;
+ (id)imageForTrafficCamera:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3;
+ (id)imageForTrafficIncidentType:(long long)arg1 size:(unsigned long long)arg2 forScale:(double)arg3;
+ (id)imageForMapItem:(id)arg1 forScale:(double)arg2;
+ (id)imageForMapItem:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 nightMode:(_Bool)arg5;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(_Bool)arg5;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(_Bool)arg5 nightMode:(_Bool)arg6;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(_Bool)arg5 transitMode:(_Bool)arg6;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(_Bool)arg5 transitMode:(_Bool)arg6 nightMode:(_Bool)arg7;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(_Bool)arg5 transitMode:(_Bool)arg6 interactive:(_Bool)arg7;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(_Bool)arg5 transitMode:(_Bool)arg6 interactive:(_Bool)arg7 nightMode:(_Bool)arg8;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 nightMode:(_Bool)arg6;
+ (void)requestImageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
