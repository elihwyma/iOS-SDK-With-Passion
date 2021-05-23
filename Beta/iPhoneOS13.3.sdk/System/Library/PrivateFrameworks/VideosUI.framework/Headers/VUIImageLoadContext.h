/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSOperation;

@protocol VUIImageLoadingOperation;

__attribute__((visibility("hidden")))
@interface VUIImageLoadContext : NSObject

{
    NSOperation<VUIImageLoadingOperation> *_imageLoadOperation;
    unsigned long long _requestCount;
}

@property (retain, nonatomic) NSOperation<VUIImageLoadingOperation> *imageLoadOperation;
@property (nonatomic) unsigned long long requestCount;

@end
