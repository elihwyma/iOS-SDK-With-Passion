/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewControllerSpec.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUPhotoEditToolControllerSpec : PUViewControllerSpec

{
    long long _layoutOrientation;
}

@property (nonatomic, readonly) double standardBottomBarHeight;
@property (nonatomic, readonly) double standardSideBarWidth;
@property (nonatomic, readonly) _Bool isiPadLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long layoutOrientation;

+ (id)toolPickerSelectionColor;

- (void)setLayoutOrientation:(long long)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;

@end
