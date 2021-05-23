/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <Foundation/NSObject.h>

@interface DOCThumbnailRequest : NSObject

{
    CDUnknownBlockType _thumbnailGenerationRequiresDownloadHandler;
}

@property (copy, nonatomic) CDUnknownBlockType thumbnailGenerationRequiresDownloadHandler;

+ (id)iconRequestForURL:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;
+ (id)iconRequestForItem:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;
+ (id)requestForItem:(id)arg1 descriptor:(id)arg2 thumbnailGenerator:(id)arg3;

- (void)cancel;
- (void)generateThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
