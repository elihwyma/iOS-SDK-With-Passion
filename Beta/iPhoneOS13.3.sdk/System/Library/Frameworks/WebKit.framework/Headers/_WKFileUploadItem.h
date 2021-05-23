/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSURL, UIImage;

__attribute__((visibility("hidden")))
@interface _WKFileUploadItem : NSObject

{
    struct RetainPtr<NSURL> _fileURL;
}

@property (nonatomic, readonly, getter=isVideo) _Bool video;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) UIImage *displayImage;

- (id).cxx_construct;
- (id)initWithFileURL:(id)arg1;

@end
