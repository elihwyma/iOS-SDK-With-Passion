/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FxHost : NSObject

{
    struct FxHostPriv *_priv;
}

+ (id)host;
+ (id)fxMetaPlugsFolderURLs;
+ (id)_createPathArrayFromURLArray:(id)arg1;
+ (id)fxPlugsFolderURLs;
+ (id)_scanFxMetaPlugWrappersWithPlugInManager:(id)arg1;
+ (id)internalPlugInsFolderURL;
+ (id)plugInsFolderURLs;

- (id)init;
- (void)dealloc;
- (id)hostName;
- (id)uniqueID;
- (int)majorVersion;
- (int)minorVersion;
- (unsigned int)timeScaleForStream:(id)arg1;
- (double)startTimeForStream:(id)arg1;
- (double)durationForStream:(id)arg1;
- (double)frameDurationForStream:(id)arg1;
- (_Bool)isStreamPremultiplied:(id)arg1;
- (double)pixelAspectForStream:(id)arg1;
- (_Bool)isContextTypeSupported:(int)arg1 bySample:(id)arg2;
- (unsigned long long)fieldOrderForSample:(id)arg1;
- (_Bool)isSamplePredetermined:(id)arg1;
- (id)requiredSamplesForSample:(id)arg1;
- (id)evaluateSample:(id)arg1 withOptions:(id)arg2;
- (id)domainOfDefinitionForSample:(id)arg1;
- (id)_fxMetaPlugWrapperForPlugInTypeUUID:(id)arg1;
- (id)_createDefaultSearchableURLsDict;
- (id)_createDefaultSupportBuiltInsDict;
- (id)searchableURLsForPlugInTypeUUID:(id)arg1;
- (void)invalidateFxPlugDescriptorArray;
- (_Bool)allowBuiltInEffectsForPlugInTypeUUID:(id)arg1;
- (void)scanFxPlugsIfNecessary;
- (id)_findGroupInList:(id)arg1 withIdenticalDescriptor:(id)arg2;
- (id)_fxPlugGroupListForOptionalFlavor:(id)arg1;
- (unsigned int)globalTimeScale;
- (double)globalFrameDuration;
- (_Bool)supportsParameterClass:(Class)arg1;
- (id)defaultSearchableURLsForPlugInTypeUUID:(id)arg1;
- (void)setSearchableURLs:(id)arg1 forPlugInTypeUUID:(id)arg2;
- (id)defaultSupportedPlugInTypeUUIDs;
- (id)supportedPlugInTypeUUIDs;
- (void)setSupportedPlugInTypeUUIDs:(id)arg1;
- (void)setAllowBuiltInEffects:(_Bool)arg1 forPlugInTypeUUID:(id)arg2;
- (id)fxPlugGroupList;
- (id)fxPlugGroupListForFlavor:(id)arg1;
- (id)fxPlugDescriptorWithUUID:(id)arg1;

@end
