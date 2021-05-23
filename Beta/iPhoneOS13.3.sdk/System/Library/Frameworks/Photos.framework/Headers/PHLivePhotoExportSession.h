/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSArray, NSURL;

@interface PHLivePhotoExportSession : NSObject

{
    NSArray *_fileURLs;
    NSURL *_imageURL;
    NSURL *_videoURL;
}

@property (nonatomic, readonly) NSArray *fileURLs;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) NSURL *videoURL;

+ (_Bool)_identifyResourceURLs:(id)arg1 outImageURL:(id *)arg2 outVideoURL:(id *)arg3 error:(id *)arg4;
+ (_Bool)_canCreateLivePhotoWithURLs:(id)arg1 outError:(id *)arg2;

- (id)initWithResourceFileURLs:(id)arg1;
- (id)writeToFileURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_isOutputURLValid:(id)arg1 withOptions:(id)arg2 error:(out id *)arg3;

@end
