/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesShared/ICAttachmentModel.h>

@class NSArray, NSString, NSURL;

@interface ICAttachmentModel (UI)

@property (nonatomic, readonly) CDUnknownBlockType genericListThumbnailCreator;
@property (nonatomic, readonly) CDUnknownBlockType genericBrickThumbnailCreator;
@property (nonatomic, readonly) CDUnknownBlockType genericBrickLargeThumbnailCreator;
@property (nonatomic, readonly) NSArray *quicklookPreviewItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) _Bool needToGeneratePreviews;
@property (nonatomic, readonly) _Bool generateAsynchronousPreviews;
@property (nonatomic, readonly) _Bool generatePreviewsDuringCloudActivity;
@property (nonatomic, readonly) _Bool requiresNetworkToGeneratePreview;
@property (nonatomic, readonly) _Bool needToPostProcessAttachment;

+ (struct UIImage *)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2 uti:(id)arg3;
+ (struct UIImage *)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2;

- (id)activityItems;
- (void)drawPreviewInRect:(struct CGRect)arg1;
- (_Bool)generatePreviewsInOperation:(id)arg1;
- (void)generateOCRInOperation:(id)arg1;
- (void)classifyImageInOperation:(id)arg1;
- (struct UIImage *)fileIconWithPreferredSize:(struct CGSize)arg1;
- (void)didCancelPreviewGeneratorOperation;

@end
