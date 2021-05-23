/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@class NSArray, NSDictionary;

@protocol PUPhotoPicker <Swift>

@property (nonatomic, readonly) unsigned long long savingOptions;
@property (nonatomic, readonly) NSArray *mediaTypes;
@property (nonatomic, readonly) _Bool allowsMultipleSelection;
@property (nonatomic, readonly) unsigned long long multipleSelectionLimit;
@property (nonatomic, readonly) _Bool requiresPickingConfirmation;
@property (nonatomic, readonly) _Bool showsFileSizePicker;
@property (nonatomic, readonly) _Bool showsPrompt;
@property (nonatomic, readonly) _Bool convertAutoloopsToGIF;
@property (nonatomic, readonly) NSDictionary *properties;

- (unsigned short)cancelPhotoPicker;
- (unsigned short)didDisplayPhotoPickerSourceType: /* Error: Ran out of types for this method. */;
- (unsigned short)didDisplayPhotoPickerPreview;
- (unsigned short)didSelectMultipleMediaItemsWithInfoDictionaries: /* Error: Ran out of types for this method. */;
- (unsigned short)presentViewController: /* Error: Ran out of types for this method. */;
- (unsigned short)performTraitCollectionUpdateUsingData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)performPhotosSelection;
- (unsigned short)didSelectMediaWithInfoDictionary:allowedHandler: /* Error: Ran out of types for this method. */;

@end
