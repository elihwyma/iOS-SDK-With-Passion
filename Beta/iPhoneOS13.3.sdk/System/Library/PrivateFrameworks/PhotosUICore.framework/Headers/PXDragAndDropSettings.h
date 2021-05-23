/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXDragAndDropSettings : PXSettings

{
    _Bool _useData;
    _Bool _dragOutEnabled;
    _Bool _alwaysAllowDragsWithinUserAlbums;
    _Bool _springLoadingEnabled;
    _Bool _useFileProvider;
    long long _reorderCadence;
}

@property (nonatomic) _Bool useData;
@property (nonatomic) _Bool dragOutEnabled;
@property (nonatomic) _Bool alwaysAllowDragsWithinUserAlbums;
@property (nonatomic) _Bool springLoadingEnabled;
@property (nonatomic) _Bool useFileProvider;
@property (nonatomic) long long reorderCadence;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
