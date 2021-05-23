/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <InstallCoordination/IXAppInstallCoordinator.h>

@class NSString;

@interface IXInitiatingAppInstallCoordinator : IXAppInstallCoordinator

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasAppAssetPromise;
@property (nonatomic, readonly) _Bool hasInstallOptions;
@property (nonatomic, readonly) _Bool hasInitialODRAssetPromises;

+ (id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(_Bool)arg3 created:(_Bool *)arg4 error:(id *)arg5;
+ (id)existingCoordinatorForAppWithBundleID:(id)arg1 error:(id *)arg2;
+ (_Bool)enumerateCoordinatorsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)enumerateCoordinatorsUsingBlock:(CDUnknownBlockType)arg1;

- (id)validInstallTypes;

@end
