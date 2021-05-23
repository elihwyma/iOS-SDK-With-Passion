/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKBundleComplicationDataSourceLoader.h>

@interface NTKBundleBlockComplicationLoader : NTKBundleComplicationDataSourceLoader

{
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_loadClassesUsingBlock:(CDUnknownBlockType)arg1;

@end
