/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXSampleInboxMediaProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_mockImage;

- (void)cancelImageRequest:(int)arg1;
- (int)requestImageForPreviewItem:(id)arg1 targetSize:(struct CGSize)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end
