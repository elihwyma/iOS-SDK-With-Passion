/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <DocumentManagerUICore/DOCThumbnailRequest.h>

@class QLThumbnailGenerationRequest, QLThumbnailGenerator;

@interface DOCIconThumbnailRequest : DOCThumbnailRequest

{
    QLThumbnailGenerationRequest *_request;
    QLThumbnailGenerator *_thumbnailGenerator;
}

- (void)generateThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithItem:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;
- (id)initWithURL:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;

@end
