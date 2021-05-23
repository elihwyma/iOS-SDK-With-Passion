/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIDocumentContextData.h>

@class NSString;

@interface VUIDocumentContextDataMovieBundle : VUIDocumentContextData

{
    NSString *_movieBundleID;
}

@property (copy, nonatomic, readonly) NSString *movieBundleID;

- (id)jsonData;
- (id)initWithMovieBundleID:(id)arg1;

@end
