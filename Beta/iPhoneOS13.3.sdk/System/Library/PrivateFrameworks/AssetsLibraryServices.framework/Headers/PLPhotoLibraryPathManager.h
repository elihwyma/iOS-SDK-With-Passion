/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, PLFileSystemCapabilities, PLPhotoLibraryPathManagerCore;

@interface PLPhotoLibraryPathManager : NSObject

{
    PLPhotoLibraryPathManagerCore *_internalPathManager;
    NSString *_singletonPhotoLibraryPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURL *libraryURL;
@property (copy, readonly) NSString *baseDirectory;
@property (nonatomic, readonly) PLFileSystemCapabilities *capabilities;
@property (copy, readonly) NSString *assetUUIDRecoveryMappingPath;

+ (id)systemLibraryURL;
+ (_Bool)isSystemPhotoLibraryURL:(id)arg1;
+ (id)systemLibraryPathManager;
+ (void)assertSingleLibraryMode;
+ (_Bool)isSystemLibraryURLDefined;
+ (_Bool)setSystemLibraryURL:(id)arg1 options:(unsigned short)arg2 error:(id *)arg3;
+ (_Bool)isMultiLibraryModeEnabled;
+ (void)enableMultiLibraryMode;
+ (id)systemLibraryBaseDirectory;
+ (void)throwMultiLibraryAPIMisuseForLibraryPath:(id)arg1;
+ (void)throwMultiLibraryAPIMisuse;

- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBaseDirectory:(id)arg1;
- (id)initWithLibraryURL:(id)arg1;
- (id)initWithLibraryURL:(id)arg1 bundleScope:(unsigned char)arg2;
- (void)setOrCompareLibraryURL:(id)arg1;
- (void)enumerateBundleScopesWithBlock:(CDUnknownBlockType)arg1;
- (id)timeMachineExclusionPathForPathType:(unsigned char)arg1;
- (_Bool)createTimeMachineExclusionPathsWithError:(id *)arg1;

@end
