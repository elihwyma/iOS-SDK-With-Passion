/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface DCMarkupUtilities : NSObject

+ (_Bool)hasPrivateImageMetadata:(id)arg1;
+ (id)cleanImageMetadataFromData:(id)arg1;
+ (id)createMarkupViewController;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2 embedData:(_Bool)arg3;
+ (id)createProcessingMarkupViewControllerOutWindow:(struct UIWindow **)arg1;
+ (id)markupModelDataFromDataAtURL:(id)arg1;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageURL:(id)arg2;
+ (id)markupModelDataFromData:(id)arg1;
+ (id)dataToEditForDocumentInfo:(id)arg1 includeMarkupModelData:(_Bool)arg2 imageCache:(id)arg3 embedMarkupModelDataInImage:(_Bool)arg4;
+ (id)dataToEditForDocumentInfo:(id)arg1 imageCache:(id)arg2 includeMarkupModelData:(_Bool)arg3;
+ (void)applyMarkupModelData:(id)arg1 documentInfo:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)applyReturnedMarkupURL:(id)arg1 documentInfo:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)extractReturnedMarkupURL:(id)arg1 documentInfo:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
