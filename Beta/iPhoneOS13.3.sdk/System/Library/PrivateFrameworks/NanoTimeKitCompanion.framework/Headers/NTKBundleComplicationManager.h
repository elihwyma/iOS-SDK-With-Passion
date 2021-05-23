/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, NTKBundleComplicationDataSourceLoader;

@interface NTKBundleComplicationManager : NSObject

{
    NTKBundleComplicationDataSourceLoader *_loader;
}

@property (nonatomic, readonly) NTKBundleComplicationDataSourceLoader *loader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (id)localizedAppNameForBundleIdentifier:(id)arg1;
- (void)enumerateBundlesForComplicationFamily:(long long)arg1 device:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (Class)dataSourceClassForBundleComplication:(id)arg1;
- (_Bool)bundleComplicationExistsForAppBundleIdentifier:(id)arg1;
- (_Bool)bundleExistsWithIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;

@end
