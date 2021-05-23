/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SSScreenshotAssetManagerPhotoLibraryBackend : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_ARKitImageDataFromImage:(id)arg1;
- (void)registerEntryWithImage:(id)arg1 options:(id)arg2 identifierHandler:(CDUnknownBlockType)arg3;
- (void)imageForPreviouslyRegisteredIdentifier:(id)arg1 imageHandler:(CDUnknownBlockType)arg2;
- (void)updateImage:(id)arg1 withModificationData:(id)arg2 forEntryWithIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)saveImageToTemporaryLocation:(id)arg1 withName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeEntryWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
