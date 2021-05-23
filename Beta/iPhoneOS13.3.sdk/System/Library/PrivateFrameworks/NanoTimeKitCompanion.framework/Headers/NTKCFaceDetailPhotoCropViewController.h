/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCNavigationController.h>

@class NTKCompanionCustomPhotosEditor, NTKDigitalTimeLabelStyle, NTKFace, _NTKCFaceDetailPhotoCropViewController;

@interface NTKCFaceDetailPhotoCropViewController : NTKCNavigationController

{
    _NTKCFaceDetailPhotoCropViewController *_implementationVC;
}

@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) NTKCompanionCustomPhotosEditor *editor;
@property (nonatomic, readonly) NTKFace *face;
@property (nonatomic, readonly) NTKDigitalTimeLabelStyle *timeStyle;

- (void)viewDidLoad;
- (id)initWithIndex:(unsigned long long)arg1 inPhotosEditor:(id)arg2 forFace:(id)arg3 timeStyle:(id)arg4;

@end
