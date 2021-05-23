/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class NSURL, UIImage;

@protocol CKNetworkImageDownloading;

@interface CKNetworkImageSpecifier : NSObject

{
    NSURL *_url;
    UIImage *_defaultImage;
    id <CKNetworkImageDownloading> _imageDownloader;
    id _scenePath;
    struct CGRect _cropRect;
}

@property (copy, nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) UIImage *defaultImage;
@property (nonatomic, readonly) id <CKNetworkImageDownloading> imageDownloader;
@property (nonatomic, readonly) id scenePath;
@property (nonatomic, readonly) struct CGRect cropRect;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1 defaultImage:(id)arg2 imageDownloader:(id)arg3 scenePath:(id)arg4 cropRect:(struct CGRect)arg5;

@end
