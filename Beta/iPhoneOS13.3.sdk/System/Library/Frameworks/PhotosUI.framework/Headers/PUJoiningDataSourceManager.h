/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetsDataSourceManager.h>

@class NSArray, NSString;

@interface PUJoiningDataSourceManager : PUAssetsDataSourceManager

{
    NSArray *__dataSourceManagers;
    long long __currentUpdateID;
}

@property (nonatomic, readonly) NSArray *_dataSourceManagers;
@property (nonatomic, setter=_setCurrentUpdateId:) long long _currentUpdateID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_update;
- (void)_scheduleUpdate;
- (id)initWithDataSourceManagers:(id)arg1;
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1;
- (void)_handleScheduledUpdateWithID:(long long)arg1;

@end
