/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSMutableURLRequest;

@protocol HMCameraClipDownloadAssetDataTaskHandling;

@interface HMCameraClipDownloadAssetDataTask : NSObject

{
    NSMutableURLRequest *_urlRequest;
    id <HMCameraClipDownloadAssetDataTaskHandling> _handler;
}

@property (readonly) NSMutableURLRequest *urlRequest;
@property (readonly) id <HMCameraClipDownloadAssetDataTaskHandling> handler;

- (id)initWithURL:(id)arg1 httpHeaderFields:(id)arg2;
- (id)downloadDataForByteRange:(struct _NSRange)arg1;
- (id)initWithURL:(id)arg1 httpHeaderFields:(id)arg2 handler:(id)arg3;

@end
