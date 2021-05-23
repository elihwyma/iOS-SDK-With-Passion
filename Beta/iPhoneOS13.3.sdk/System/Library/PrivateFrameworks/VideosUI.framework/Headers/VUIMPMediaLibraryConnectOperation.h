/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUICore/VUIAsynchronousOperation.h>

@class MPMediaLibrary, NSError, NSObject;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VUIMPMediaLibraryConnectOperation : VUIAsynchronousOperation

{
    _Bool _success;
    CDUnknownBlockType _progressBlock;
    NSError *_error;
    MPMediaLibrary *_mediaLibrary;
    NSObject<OS_dispatch_source> *_progressTimer;
}

@property (nonatomic) _Bool success;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *progressTimer;
@property (copy, nonatomic) CDUnknownBlockType progressBlock;

- (id)init;
- (void)executionDidBegin;
- (id)initWithMediaLibrary:(id)arg1;
- (void)_startProgressTimer;
- (void)_stopProgressTimer;
- (void)_notifyClientOfProgress:(float)arg1;

@end
