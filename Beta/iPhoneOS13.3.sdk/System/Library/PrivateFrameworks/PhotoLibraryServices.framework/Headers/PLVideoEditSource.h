/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLEditSource.h>

@class NSURL;

@interface PLVideoEditSource : PLEditSource

{
    NSURL *_videoURL;
}

@property (nonatomic, readonly) NSURL *videoURL;

- (id)initWithVideoURL:(id)arg1;

@end
