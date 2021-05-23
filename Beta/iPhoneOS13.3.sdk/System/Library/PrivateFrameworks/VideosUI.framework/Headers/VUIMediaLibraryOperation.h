/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSError, VUIAsynchronousWorkToken, VUIMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMediaLibraryOperation : VUIAsynchronousOperation

{
    VUIMediaLibrary *_mediaLibrary;
    NSError *_error;
    VUIAsynchronousWorkToken *_asyncWorkToken;
}

@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) VUIAsynchronousWorkToken *asyncWorkToken;

- (id)init;
- (void)cancel;
- (id)initWithMediaLibrary:(id)arg1;

@end
