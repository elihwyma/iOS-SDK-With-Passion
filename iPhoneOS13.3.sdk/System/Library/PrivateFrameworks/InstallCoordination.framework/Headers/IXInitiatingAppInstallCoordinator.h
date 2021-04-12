//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InstallCoordination/IXAppInstallCoordinator.h>

#import <InstallCoordination/IXCoordinatorWithAppAssetPromise-Protocol.h>
#import <InstallCoordination/IXCoordinatorWithDeviceSecurityPromise-Protocol.h>
#import <InstallCoordination/IXCoordinatorWithImportance-Protocol.h>
#import <InstallCoordination/IXCoordinatorWithInitialODRAssetPromises-Protocol.h>
#import <InstallCoordination/IXCoordinatorWithInstallOptions-Protocol.h>

@interface IXInitiatingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithInitialODRAssetPromises, IXCoordinatorWithDeviceSecurityPromise, IXCoordinatorWithImportance>
{
}

+ (void)enumerateCoordinatorsUsingBlock:(id /* CDUnknownBlockType */)arg1;
+ (BOOL)enumerateCoordinatorsWithError:(id )arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
+ (id)existingCoordinatorForAppWithBundleID:(id)arg1 error:(id )arg2;
+ (id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(NSUInteger)arg2 createIfNotExisting:(BOOL)arg3 created:(BOOL )arg4 error:(id )arg5;
- (id)validInstallTypes;

@end

