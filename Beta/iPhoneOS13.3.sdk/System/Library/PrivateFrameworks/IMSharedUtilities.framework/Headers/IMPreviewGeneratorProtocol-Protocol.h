/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@protocol IMPreviewGeneratorProtocol

+ (unsigned short)shouldScaleUpPreview;
+ (unsigned short)maxUpScale;
+ (unsigned short)newPreviewFromSourceURL:withPreviewConstraints:error: /* Error: Ran out of types for this method. */;
+ (unsigned short)sizePreviewAtSourceURL:withPreviewConstraints:error: /* Error: Ran out of types for this method. */;
+ (unsigned short)shouldShadePreview;
+ (unsigned short)previewExtension;
+ (unsigned short)writesToDisk;
+ (unsigned short)generateAndPersistPreviewFromSourceURL:withPreviewConstraints:outSize:error: /* Error: Ran out of types for this method. */;

@end
