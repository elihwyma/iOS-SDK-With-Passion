/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKBundleComplicationDataSourceLoader.h>

@class NSArray;

@interface NTKBundleBundleComplicationLoader : NTKBundleComplicationDataSourceLoader

{
    NSArray *_urls;
}

@property (retain, nonatomic) NSArray *urls;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_enumerateBundles:(CDUnknownBlockType)arg1;
- (void)_loadClassesUsingBlock:(CDUnknownBlockType)arg1;

@end
