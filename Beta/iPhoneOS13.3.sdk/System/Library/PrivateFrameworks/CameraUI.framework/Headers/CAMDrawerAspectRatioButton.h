/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMControlDrawerMenuButton.h>

@class NSMutableDictionary;

@interface CAMDrawerAspectRatioButton : CAMControlDrawerMenuButton

{
    long long _aspectRatio;
    NSMutableDictionary *__imagesByText;
}

@property (nonatomic, readonly) NSMutableDictionary *_imagesByText;
@property (nonatomic) long long aspectRatio;

- (void)updateImage;
- (long long)controlType;
- (id)initWithLayoutStyle:(long long)arg1;
- (id)imageNameForCurrentState;
- (void)didSelectMenuItem:(id)arg1;
- (id)hudItemForMenuHeader;
- (id)hudItemForMenuItem:(id)arg1;
- (_Bool)isMenuItemSelected:(id)arg1;
- (id)loadMenuItems;
- (id)_titleForAspectRatio:(long long)arg1;
- (id)_imageForAspectRatio:(long long)arg1;

@end
