/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <DocumentManagerUICore/DOCThumbnailRequest.h>

@class DOCThumbnailDescriptor;

@interface DOCPlainFolderThumbnailRequest : DOCThumbnailRequest

{
    DOCThumbnailDescriptor *_descriptor;
}

- (id)initWithDescriptor:(id)arg1;
- (void)generateThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
