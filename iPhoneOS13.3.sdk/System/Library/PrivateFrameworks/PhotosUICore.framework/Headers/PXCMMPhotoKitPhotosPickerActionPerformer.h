//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMShowPhotosPickerActionPerformer.h>

#import <PhotosUICore/PXCMMPhotoKitActionPerformer-Protocol.h>

@class UIViewController;

@interface PXCMMPhotoKitPhotosPickerActionPerformer : PXCMMShowPhotosPickerActionPerformer <PXCMMPhotoKitActionPerformer>
{
    UIViewController *_photosPickerViewController;
}

// - (void).cxx_destruct;
- (id)_currentSelectedAssets;
- (id)_currentAssets;
- (void)_pickerDidCompleteWithPickedAssets:(id)arg1;
- (void)performUserInteractionTask;

@end

