/*
 Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TRINamespaceFactorProvider : NSObject

{
    struct NSString *_treatmentId;
    unsigned int _namespaceVersion;
    unsigned int _namespaceCompatibilityVersion;
    NSMutableDictionary *_factorLevels;
    unsigned int _namespaceId;
}

@property (readonly) unsigned int namespaceId;
@property (readonly) unsigned int namespaceVersion;
@property (readonly) unsigned int namespaceCompatibilityVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)factorProviderWithNamespaceDescriptor:(id)arg1;
+ (id)pathForFactor:(id)arg1 directory:(id)arg2;
+ (id)factorProviderWithNamespaceId:(unsigned int)arg1 directory:(id)arg2;

- (_Bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (id)treatment;
- (struct NSString *)treatmentId;
- (id)initWithNamespaceId:(unsigned int)arg1 treatment:(id)arg2 namespaceVersion:(unsigned int)arg3 namespaceCompatibilityVersion:(unsigned int)arg4;
- (void)initFactorLevelsWithTreatment:(id)arg1;
- (_Bool)copyAssetsToDirectory:(id)arg1;
- (id)levelForFactor:(struct NSString *)arg1;
- (id)factorLevels;
- (void)setFactorLevels:(id)arg1;
- (_Bool)saveToPath:(id)arg1 copyAssets:(_Bool)arg2;

@end
