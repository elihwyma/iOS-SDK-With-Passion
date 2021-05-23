/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <DocumentManagerUICore/DOCThumbnailRequest.h>

@class DOCThumbnailDescriptor;

@interface DOCStaticBadgedFolderThumbnailRequest : DOCThumbnailRequest

{
    unsigned long long _folderType;
    DOCThumbnailDescriptor *_descriptor;
}

- (void)generateThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithFolderType:(unsigned long long)arg1 descriptor:(id)arg2;

@end
