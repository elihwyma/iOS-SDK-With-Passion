/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <InstallCoordination/IXOwnedDataPromise.h>

#import <InstallCoordination/Swift-Protocol.h>

@class IXPlaceholderSeed, MIStoreMetadata, NSString;

@interface IXPlaceholder : IXOwnedDataPromise <Swift>

@property (retain, nonatomic) IXPlaceholderSeed *seed;
@property (copy, nonatomic, readonly) NSString *bundleName;
@property (copy, nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) unsigned long long placeholderType;
@property (nonatomic, readonly) unsigned long long installType;
@property (nonatomic, readonly) _Bool hasIconPromise;
@property (nonatomic, readonly) _Bool hasEntitlementsPromise;
@property (nonatomic, readonly) _Bool hasPlugInPlaceholderPromises;
@property (copy, nonatomic) MIStoreMetadata *metadata;

+ (_Bool)supportsSecureCoding;
+ (id)placeholderForInstallable:(id)arg1 client:(unsigned long long)arg2 installType:(unsigned long long)arg3 metadata:(id)arg4 error:(id *)arg5;
+ (id)_placeholderForBundle:(id)arg1 client:(unsigned long long)arg2 withParent:(id)arg3 installType:(unsigned long long)arg4 metadata:(id)arg5 error:(id *)arg6;
+ (id)errorStringForMISError:(int)arg1;
+ (id)_iconDataForBundle:(struct __CFBundle *)arg1 error:(id *)arg2;
+ (id)_infoPlistLocalizationDictionaryForBundleURL:(id)arg1 error:(id *)arg2;
+ (id)placeholderForRemovableSystemAppWithBundleID:(id)arg1 client:(unsigned long long)arg2 installType:(unsigned long long)arg3 error:(id *)arg4;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setBundleName:(id)arg1;
- (id)initWithSeed:(id)arg1;
- (Class)seedClass;
- (id)initAppPlaceholderWithBundleName:(id)arg1 bundleID:(id)arg2 installType:(unsigned long long)arg3 client:(unsigned long long)arg4;
- (_Bool)setMetadata:(id)arg1 error:(id *)arg2;
- (id)initPlugInPlaceholderWithBundleName:(id)arg1 bundleID:(id)arg2 parentPlaceholder:(id)arg3 client:(unsigned long long)arg4;
- (_Bool)setPlaceholderAttributes:(id)arg1 error:(id *)arg2;
- (_Bool)setEntitlementsPromise:(id)arg1 error:(id *)arg2;
- (_Bool)setIconPromise:(id)arg1 error:(id *)arg2;
- (_Bool)setInfoPlistLocalizations:(id)arg1 error:(id *)arg2;
- (_Bool)setPlugInPlaceholderPromises:(id)arg1 error:(id *)arg2;
- (_Bool)setConfigurationCompleteWithError:(id *)arg1;
- (_Bool)_doInitWithBundleName:(id)arg1 bundleID:(id)arg2 installType:(unsigned long long)arg3 isPlugin:(_Bool)arg4;
- (id)metadataWithError:(id *)arg1;
- (id)iconPromiseWithError:(id *)arg1;
- (id)infoPlistLocalizationsWithError:(id *)arg1;
- (id)entitlementsPromiseWithError:(id *)arg1;
- (id)plugInPlaceholderPromisesWithError:(id *)arg1;
- (_Bool)setSinfData:(id)arg1 error:(id *)arg2;
- (id)sinfDataWithError:(id *)arg1;
- (_Bool)setLaunchProhibited:(_Bool)arg1 error:(id *)arg2;
- (_Bool)launchProhibited:(_Bool *)arg1 error:(id *)arg2;
- (id)placeholderAttributesWithError:(id *)arg1;

@end
