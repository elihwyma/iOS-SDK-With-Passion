/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <DocumentManagerUICore/DOCThumbnailRequest.h>

@class DOCThumbnailFolderIcon, QLThumbnailGenerationRequest, QLThumbnailGenerator;

@interface DOCRegularItemThumbnailRequest : DOCThumbnailRequest

{
    QLThumbnailGenerator *_thumbnailGenerator;
    QLThumbnailGenerationRequest *_thumbnailRequest;
    DOCThumbnailFolderIcon *_folderIcon;
    unsigned long long _style;
}

- (void)cancel;
- (void)generateThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithItem:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;

@end
