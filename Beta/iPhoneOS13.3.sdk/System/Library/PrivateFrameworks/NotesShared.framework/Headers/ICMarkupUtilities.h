/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICMarkupUtilities : NSObject

+ (_Bool)hasPrivateImageMetadata:(id)arg1;
+ (id)cleanImageMetadataFromData:(id)arg1;
+ (id)createMarkupViewController;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2 embedData:(_Bool)arg3;
+ (id)createProcessingMarkupViewControllerOutWindow:(struct UIWindow **)arg1;
+ (void)embedReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)extractReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)markupModelDataFromDataAtURL:(id)arg1;
+ (void)applyMarkupModelData:(id)arg1 attachment:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageData:(id)arg2;
+ (id)imageDataWithMarkupModelData:(id)arg1 sourceImageURL:(id)arg2;
+ (void)applyReturnedMarkupURL:(id)arg1 attachment:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)markupModelDataFromData:(id)arg1;

@end
