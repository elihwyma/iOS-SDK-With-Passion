/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, PHResourceDownloadRequest;

__attribute__((visibility("hidden")))
@interface PUPhotosGridDownloadHelpContext : NSObject

{
    PHResourceDownloadRequest *_resourceDownloadRequest;
    NSString *_gridProgressIdentifier;
    CDUnknownBlockType _downloadHandler;
}

@property (retain, nonatomic) PHResourceDownloadRequest *resourceDownloadRequest;
@property (retain, nonatomic) NSString *gridProgressIdentifier;
@property (copy, nonatomic) CDUnknownBlockType downloadHandler;

@end
