/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIViewController.h>

@class NSString, NTKFace, UIImage, UIImageView;

@interface NTKFaceSnapshotViewController : UIViewController

{
    NTKFace *_face;
    UIImageView *_imageView;
    UIImage *_snapshotImage;
    NSString *_snapshotKeyOfSnapshotImage;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (retain, nonatomic) UIImage *snapshotImage;
@property (retain, nonatomic) NSString *snapshotKeyOfSnapshotImage;
@property (nonatomic, readonly) NTKFace *face;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (id)initWithFace:(id)arg1;
- (void)_attemptToFetchSnapshot;
- (void)_handleSnapshot:(id)arg1 forKey:(id)arg2;
- (void)_updateFaceSnapshotIfNecessaryOfFace;

@end
