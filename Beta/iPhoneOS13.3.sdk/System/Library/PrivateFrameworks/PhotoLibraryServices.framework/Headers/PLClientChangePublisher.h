/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, PLAssetsdClient;

@interface PLClientChangePublisher : NSObject

{
    PLAssetsdClient *_assetsdClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)publishChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 transaction:(id)arg3;
- (void)pauseLaunchEventNotifications;
- (void)unpauseLaunchEventNotifications;
- (id)initWithAssetsdClient:(id)arg1;

@end
