/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@protocol PUPhotoPickerHostService <Swift>

- (unsigned short)cancelPhotoPicker;
- (unsigned short)dismissCurrentViewControllerFromPhotoPickerAnimated: /* Error: Ran out of types for this method. */;
- (unsigned short)didDisplayPhotoPickerSourceType: /* Error: Ran out of types for this method. */;
- (unsigned short)didDisplayPhotoPickerPreview;
- (unsigned short)didSelectMediaWithInfoDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)didSelectMultipleMediaItemsWithInfoDictionaries: /* Error: Ran out of types for this method. */;
- (unsigned short)performTraitCollectionUpdateUsingData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidatePhotoPickerHostServices;

@end
