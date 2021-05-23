/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class ICDocCamDocumentInfo, ICDocCamImageCache;

__attribute__((visibility("hidden")))
@interface DCMarkupActivityItem : NSObject

{
    ICDocCamDocumentInfo *_documentInfo;
    ICDocCamImageCache *_imageCache;
}

@property (retain, nonatomic) ICDocCamDocumentInfo *documentInfo;
@property (retain, nonatomic) ICDocCamImageCache *imageCache;

- (id)initWithDocumentInfo:(id)arg1 imageCache:(id)arg2;

@end
