/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetsDataSourceManager.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PXAssetsDataSourceManager;

__attribute__((visibility("hidden")))
@interface PUPXAssetsDataSourceManager : PUAssetsDataSourceManager <Swift>

{
    PXAssetsDataSourceManager *_underlyingDataSourceManager;
    long long __currentUpdateID;
}

@property (nonatomic, setter=_setCurrentUpdateId:) long long _currentUpdateID;
@property (nonatomic, readonly) PXAssetsDataSourceManager *underlyingDataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_update;
- (void)_scheduleUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_handleScheduledUpdateWithID:(long long)arg1;
- (id)initWithUnderlyingDataSourceManager:(id)arg1;

@end
