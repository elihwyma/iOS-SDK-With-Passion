/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKBundleComplicationDataSourceLoader.h>

@class NSOrderedSet;

@interface NTKBundleAggregateComplicationLoader : NTKBundleComplicationDataSourceLoader

{
    NSOrderedSet *_loaders;
}

@property (copy, nonatomic) NSOrderedSet *loaders;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_loadClassesUsingBlock:(CDUnknownBlockType)arg1;

@end
