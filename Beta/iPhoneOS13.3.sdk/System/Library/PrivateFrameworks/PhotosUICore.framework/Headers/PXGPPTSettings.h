/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@interface PXGPPTSettings : PXSettings

{
    _Bool _useAssetBadgeDecoration;
    long long _numberOfItems;
    long long _numberOfSections;
    long long _numberOfColumns;
    long long _selectionDecorationStlye;
}

@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long numberOfSections;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) _Bool useAssetBadgeDecoration;
@property (nonatomic) long long selectionDecorationStlye;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)allPresetNames;
+ (id)scrollingPresetNames;

- (void)setDefaultValues;
- (id)parentSettings;
- (void)setDefaultValuesWithPresetName:(id)arg1;
- (id)createLayout;

@end
