/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXPhotosDetailsBarsController.h>

@class PHPerson, UIButton;

@interface PXPeopleDetailBarsController : PXPhotosDetailsBarsController

{
    UIButton *_peopleTitleView;
    PHPerson *_person;
}

@property (retain, nonatomic) UIButton *peopleTitleView;
@property (retain, nonatomic) PHPerson *person;

- (id)createTitleView;
- (id)createAssetActionManager;

@end
